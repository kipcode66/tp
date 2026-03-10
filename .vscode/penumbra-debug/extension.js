const vscode = require('vscode');
const path = require('path');
const fs = require('fs');

function activate(context) {
    context.subscriptions.push(
        vscode.debug.registerDebugAdapterDescriptorFactory('penumbra', {
            createDebugAdapterDescriptor(_session) {
                // Look for penumbra in build/binutils/ (downloaded by build system)
                const workspaceFolder = vscode.workspace.workspaceFolders?.[0]?.uri.fsPath;
                if (workspaceFolder) {
                    const buildPath = path.join(workspaceFolder, 'build', 'binutils', 'penumbra');
                    if (fs.existsSync(buildPath)) {
                        return new vscode.DebugAdapterExecutable(buildPath, ['--dap']);
                    }
                }

                // Fallback to PATH
                return new vscode.DebugAdapterExecutable('penumbra', ['--dap']);
            }
        })
    );
}

function deactivate() {}

module.exports = { activate, deactivate };
