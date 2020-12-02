# Linker order for every file, passed to the Metrowerks linker.

INIT_O_FILES := 						            \
    $(BUILD_DIR)/asm/init.o

EXTAB_O_FILES :=                                    \
    $(BUILD_DIR)/asm/extab.o

EXTABINDEX_O_FILES :=                               \
    $(BUILD_DIR)/asm/extabindex.o

TEXT_O_FILES := 						            \
            $(BUILD_DIR)/src/m_Do/m_Do_main.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_printf.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_audio.o    \
            $(BUILD_DIR)/asm/m/Do/controller/m_Do_controller_pad.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_graphic.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_machine.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_mtx.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_ext.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_lib.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_Reset.o    \
            $(BUILD_DIR)/asm/m/Do/dvd/m_Do_dvd_thread.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_DVDError.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_MemCard.o    \
            $(BUILD_DIR)/asm/m/Do/m_Do_MemCardRWmng.o    \
            $(BUILD_DIR)/asm/m/Do/machine/m_Do_machine_exception.o    \
            $(BUILD_DIR)/asm/c/c_damagereaction.o    \
            $(BUILD_DIR)/asm/c/c_dylink.o    \
            $(BUILD_DIR)/asm/f/ap/f_ap_game.o    \
            $(BUILD_DIR)/asm/f/op/f_op_actor.o    \
            $(BUILD_DIR)/asm/f/op/actor/f_op_actor_iter.o    \
            $(BUILD_DIR)/asm/f/op/actor/f_op_actor_tag.o    \
            $(BUILD_DIR)/asm/f/op/actor/f_op_actor_mng.o    \
            $(BUILD_DIR)/asm/f/op/f_op_camera.o    \
            $(BUILD_DIR)/asm/f/op/camera/f_op_camera_mng.o    \
            $(BUILD_DIR)/asm/f/op/f_op_overlap.o    \
            $(BUILD_DIR)/asm/f/op/overlap/f_op_overlap_mng.o    \
            $(BUILD_DIR)/asm/f/op/overlap/f_op_overlap_req.o    \
            $(BUILD_DIR)/asm/f/op/f_op_scene.o    \
            $(BUILD_DIR)/asm/f/op/scene/f_op_scene_iter.o    \
            $(BUILD_DIR)/asm/f/op/scene/f_op_scene_mng.o    \
            $(BUILD_DIR)/asm/f/op/scene/f_op_scene_req.o    \
            $(BUILD_DIR)/asm/f/op/scene/f_op_scene_tag.o    \
            $(BUILD_DIR)/asm/f/op/f_op_view.o    \
            $(BUILD_DIR)/asm/f/op/f_op_kankyo.o    \
            $(BUILD_DIR)/asm/f/op/f_op_msg.o    \
            $(BUILD_DIR)/asm/f/op/kankyo/f_op_kankyo_mng.o    \
            $(BUILD_DIR)/asm/f/op/msg/f_op_msg_mng.o    \
            $(BUILD_DIR)/asm/f/op/draw/f_op_draw_iter.o    \
            $(BUILD_DIR)/asm/f/op/draw/f_op_draw_tag.o    \
            $(BUILD_DIR)/asm/f/op/scene/f_op_scene_pause.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_base.o    \
            $(BUILD_DIR)/asm/f/pc/create/f_pc_create_iter.o    \
            $(BUILD_DIR)/asm/f/pc/create/f_pc_create_req.o    \
            $(BUILD_DIR)/asm/f/pc/create/f_pc_create_tag.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_creator.o    \
            $(BUILD_DIR)/asm/f/pc/delete/f_pc_delete_tag.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_deletor.o    \
            $(BUILD_DIR)/asm/f/pc/draw/f_pc_draw_priority.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_executor.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_layer.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_leaf.o    \
            $(BUILD_DIR)/asm/f/pc/layer/f_pc_layer_iter.o    \
            $(BUILD_DIR)/asm/f/pc/layer/f_pc_layer_tag.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_line.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_load.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_manager.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_method.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_node.o    \
            $(BUILD_DIR)/asm/f/pc/node/f_pc_node_req.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_priority.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_profile.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_searcher.o    \
            $(BUILD_DIR)/asm/f/pc/line/f_pc_line_tag.o    \
            $(BUILD_DIR)/asm/f/pc/line/f_pc_line_iter.o    \
            $(BUILD_DIR)/asm/f/pc/method/f_pc_method_iter.o    \
            $(BUILD_DIR)/asm/f/pc/method/f_pc_method_tag.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_pause.o    \
            $(BUILD_DIR)/asm/f/pc/f_pc_draw.o    \
            $(BUILD_DIR)/asm/f/pc/fstcreate/f_pc_fstcreate_req.o    \
            $(BUILD_DIR)/asm/f/pc/stdcreate/f_pc_stdcreate_req.o    \
            $(BUILD_DIR)/asm/d/d_stage.o    \
            $(BUILD_DIR)/asm/d/d_map.o    \
            $(BUILD_DIR)/asm/d/com/inf/d_com_inf_game.o    \
            $(BUILD_DIR)/asm/d/com/d_com_static.o    \
            $(BUILD_DIR)/asm/d/d_bomb.o    \
            $(BUILD_DIR)/asm/d/d_lib.o    \
            $(BUILD_DIR)/src/d/d_save/d_save.o \
            $(BUILD_DIR)/asm/d/save/d_save_init.o    \
            $(BUILD_DIR)/asm/d/jnt/d_jnt_col.o    \
            $(BUILD_DIR)/asm/d/a/d_a_obj.o    \
            $(BUILD_DIR)/asm/d/a/itembase/d_a_itembase_static.o    \
            $(BUILD_DIR)/asm/d/a/item/d_a_item_static.o    \
            $(BUILD_DIR)/asm/d/a/shop/item/d_a_shop_item_static.o    \
            $(BUILD_DIR)/asm/d/a/horse/d_a_horse_static.o    \
            $(BUILD_DIR)/asm/d/d_demo.o    \
            $(BUILD_DIR)/asm/d/door/d_door_param2.o    \
            $(BUILD_DIR)/asm/d/d_resorce.o    \
            $(BUILD_DIR)/asm/d/map/d_map_path.o    \
            $(BUILD_DIR)/asm/d/map/path/d_map_path_fmap.o    \
            $(BUILD_DIR)/asm/d/map/path/d_map_path_dmap.o    \
            $(BUILD_DIR)/asm/d/d_event.o    \
            $(BUILD_DIR)/asm/d/event/d_event_data.o    \
            $(BUILD_DIR)/asm/d/event/d_event_manager.o    \
            $(BUILD_DIR)/asm/d/event/d_event_lib.o    \
            $(BUILD_DIR)/asm/d/simple/d_simple_model.o    \
            $(BUILD_DIR)/asm/d/d_particle.o    \
            $(BUILD_DIR)/asm/d/particle/d_particle_copoly.o    \
            $(BUILD_DIR)/asm/d/d_path.o    \
            $(BUILD_DIR)/asm/d/d_drawlist.o    \
            $(BUILD_DIR)/asm/d/kankyo/d_kankyo_data.o    \
            $(BUILD_DIR)/asm/d/kankyo/d_kankyo_wether.o    \
            $(BUILD_DIR)/asm/d/kankyo/d_kankyo_rain.o    \
            $(BUILD_DIR)/asm/d/d_vibration.o    \
            $(BUILD_DIR)/asm/d/d_attention.o    \
            $(BUILD_DIR)/asm/d/bg/d_bg_pc.o    \
            $(BUILD_DIR)/asm/d/bg/d_bg_plc.o    \
            $(BUILD_DIR)/asm/d/bg/d_bg_s.o    \
            $(BUILD_DIR)/asm/d/bg/s/d_bg_s_acch.o    \
            $(BUILD_DIR)/asm/d/bg/s/d_bg_s_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/gnd/d_bg_s_gnd_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/grp/pass/d_bg_s_grp_pass_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/lin/d_bg_s_lin_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/movebg/d_bg_s_movebg_actor.o    \
            $(BUILD_DIR)/asm/d/bg/s/sph/d_bg_s_sph_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/spl/grp/d_bg_s_spl_grp_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/poly/pass/d_bg_s_poly_pass_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/roof/d_bg_s_roof_chk.o    \
            $(BUILD_DIR)/asm/d/bg/s/wtr/d_bg_s_wtr_chk.o    \
            $(BUILD_DIR)/asm/d/bg/d_bg_w.o    \
            $(BUILD_DIR)/asm/d/bg/w/d_bg_w_base.o    \
            $(BUILD_DIR)/asm/d/bg/w/d_bg_w_kcol.o    \
            $(BUILD_DIR)/asm/d/bg/w/d_bg_w_sv.o    \
            $(BUILD_DIR)/asm/d/cc/d_cc_d.o    \
            $(BUILD_DIR)/asm/d/cc/mass/d_cc_mass_s.o    \
            $(BUILD_DIR)/asm/d/cc/d_cc_s.o    \
            $(BUILD_DIR)/asm/d/cc/d_cc_uty.o    \
            $(BUILD_DIR)/asm/d/cam/d_cam_param.o    \
            $(BUILD_DIR)/asm/d/ev/d_ev_camera.o    \
            $(BUILD_DIR)/asm/d/spline/d_spline_path.o    \
            $(BUILD_DIR)/asm/d/d_item.o    \
            $(BUILD_DIR)/asm/d/d_tresure.o    \
            $(BUILD_DIR)/asm/d/d_model.o    \
            $(BUILD_DIR)/asm/d/eye/d_eye_hl.o    \
            $(BUILD_DIR)/asm/d/error/d_error_msg.o    \
            $(BUILD_DIR)/asm/d/a/d_a_alink.o    \
            $(BUILD_DIR)/asm/d/a/d_a_itembase.o    \
            $(BUILD_DIR)/asm/d/a/no/chg/d_a_no_chg_room.o    \
            $(BUILD_DIR)/asm/d/a/d_a_npc.o    \
            $(BUILD_DIR)/asm/d/a/npc/d_a_npc_cd.o    \
            $(BUILD_DIR)/asm/d/a/npc/d_a_npc_cd2.o    \
            $(BUILD_DIR)/asm/d/a/obj/d_a_obj_item.o    \
            $(BUILD_DIR)/asm/d/d_insect.o    \
            $(BUILD_DIR)/asm/d/a/obj/ss/d_a_obj_ss_base.o    \
            $(BUILD_DIR)/asm/d/a/d_a_player.o    \
            $(BUILD_DIR)/asm/d/d_camera.o    \
            $(BUILD_DIR)/asm/d/d_envse.o    \
            $(BUILD_DIR)/asm/d/file/d_file_select.o    \
            $(BUILD_DIR)/asm/d/file/sel/d_file_sel_warning.o    \
            $(BUILD_DIR)/src/d/d_file/d_file_sel_info.o    \
            $(BUILD_DIR)/asm/d/bright/d_bright_check.o    \
            $(BUILD_DIR)/asm/d/d_scope.o    \
            $(BUILD_DIR)/asm/d/select/d_select_cursor.o    \
            $(BUILD_DIR)/asm/d/select/d_select_icon.o    \
            $(BUILD_DIR)/asm/d/shop/d_shop_camera.o    \
            $(BUILD_DIR)/asm/d/shop/item/d_shop_item_ctrl.o    \
            $(BUILD_DIR)/asm/d/shop/d_shop_system.o    \
            $(BUILD_DIR)/asm/d/d_gameover.o    \
            $(BUILD_DIR)/asm/d/d_kankyo.o    \
            $(BUILD_DIR)/asm/d/d_kyeff.o    \
            $(BUILD_DIR)/asm/d/d_kyeff2.o    \
            $(BUILD_DIR)/asm/d/ky/d_ky_thunder.o    \
            $(BUILD_DIR)/asm/d/kantera/icon/d_kantera_icon_meter.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_calibration.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_collect.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_dmap.o    \
            $(BUILD_DIR)/asm/d/menu/dmap/d_menu_dmap_map.o    \
            $(BUILD_DIR)/asm/d/menu/map/d_menu_map_common.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_fishing.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_fmap.o    \
            $(BUILD_DIR)/asm/d/menu/fmap/d_menu_fmap_map.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_fmap2D.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_insect.o    \
            $(BUILD_DIR)/asm/d/menu/item/d_menu_item_explain.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_letter.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_option.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_ring.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_save.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_skill.o    \
            $(BUILD_DIR)/asm/d/menu/window/d_menu_window_HIO.o    \
            $(BUILD_DIR)/asm/d/menu/d_menu_window.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_HIO.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_button.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_haihai.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_hakusha.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_map.o    \
            $(BUILD_DIR)/asm/d/meter/d_meter_string.o    \
            $(BUILD_DIR)/asm/d/meter2/d_meter2_draw.o    \
            $(BUILD_DIR)/asm/d/meter2/d_meter2_info.o    \
            $(BUILD_DIR)/asm/d/d_meter2.o    \
            $(BUILD_DIR)/asm/d/msg/out/d_msg_out_font.o    \
            $(BUILD_DIR)/asm/d/msg/d_msg_class.o    \
            $(BUILD_DIR)/asm/d/msg/d_msg_object.o    \
            $(BUILD_DIR)/asm/d/msg/d_msg_unit.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_3select.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_arrow.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_base.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_boss.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_explain.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_item.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_howl.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_jimaku.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_kanban.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_light.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_place.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_staff.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_talk.o    \
            $(BUILD_DIR)/asm/d/msg/scrn/d_msg_scrn_tree.o    \
            $(BUILD_DIR)/asm/d/msg/string/d_msg_string_base.o    \
            $(BUILD_DIR)/asm/d/msg/d_msg_string.o    \
            $(BUILD_DIR)/asm/d/msg/d_msg_flow.o    \
            $(BUILD_DIR)/asm/d/d_name.o    \
            $(BUILD_DIR)/asm/d/npc/d_npc_lib.o    \
            $(BUILD_DIR)/asm/d/ovlp/d_ovlp_fade.o    \
            $(BUILD_DIR)/asm/d/ovlp/d_ovlp_fade2.o    \
            $(BUILD_DIR)/asm/d/ovlp/d_ovlp_fade3.o    \
            $(BUILD_DIR)/asm/d/pane/d_pane_class.o    \
            $(BUILD_DIR)/asm/d/pane/class/d_pane_class_alpha.o    \
            $(BUILD_DIR)/asm/d/pane/class/d_pane_class_ex.o    \
            $(BUILD_DIR)/asm/d/s/d_s_logo.o    \
            $(BUILD_DIR)/asm/d/s/d_s_name.o    \
            $(BUILD_DIR)/asm/d/s/d_s_play.o    \
            $(BUILD_DIR)/asm/d/s/d_s_room.o    \
            $(BUILD_DIR)/src/d/d_save/d_save_HIO.o    \
            $(BUILD_DIR)/asm/d/save/d_save_HIO.o    \
            $(BUILD_DIR)/asm/d/d_timer.o    \
            $(BUILD_DIR)/asm/d/k/d_k_wmark.o    \
            $(BUILD_DIR)/asm/d/k/d_k_wpillar.o    \
            $(BUILD_DIR)/asm/DynamicLink.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_malloc.o    \
            $(BUILD_DIR)/asm/SComponent/c/API/controller/c_API_controller_pad.o    \
            $(BUILD_DIR)/asm/SComponent/c/API/c_API_graphic.o    \
            $(BUILD_DIR)/asm/SComponent/c/cc/c_cc_d.o    \
            $(BUILD_DIR)/asm/SComponent/c/cc/c_cc_s.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_counter.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_list.o    \
            $(BUILD_DIR)/asm/SComponent/c/list/c_list_iter.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_node.o    \
            $(BUILD_DIR)/asm/SComponent/c/node/c_node_iter.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_tree.o    \
            $(BUILD_DIR)/asm/SComponent/c/tree/c_tree_iter.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_phase.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_request.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_tag.o    \
            $(BUILD_DIR)/asm/SComponent/c/tag/c_tag_iter.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_xyz.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_sxyz.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_math.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/s/c_bg_s_chk.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/s/gnd/c_bg_s_gnd_chk.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/s/lin/c_bg_s_lin_chk.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/s/shdw/c_bg_s_shdw_draw.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/s/poly/c_bg_s_poly_info.o    \
            $(BUILD_DIR)/asm/SComponent/c/bg/c_bg_w.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_m2d.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_m3d.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_aab.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_cir.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_cps.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_cyl.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_lin.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_pla.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_sph.o    \
            $(BUILD_DIR)/asm/SComponent/c/m3d/g/c_m3d_g_tri.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_lib.o    \
            $(BUILD_DIR)/asm/SComponent/c/c_angle.o    \
            $(BUILD_DIR)/asm/SStandard/s/s_basic.o    \
            $(BUILD_DIR)/asm/JFramework/JFWSystem.o    \
            $(BUILD_DIR)/asm/JFramework/JFWDisplay.o    \
            $(BUILD_DIR)/asm/J3DU/J3DUClipper.o    \
            $(BUILD_DIR)/asm/J3DU/J3DUDL.o    \
            $(BUILD_DIR)/asm/JParticle/JPAResourceManager.o    \
            $(BUILD_DIR)/asm/JParticle/JPAResource.o    \
            $(BUILD_DIR)/asm/JParticle/JPABaseShape.o    \
            $(BUILD_DIR)/asm/JParticle/JPAExtraShape.o    \
            $(BUILD_DIR)/asm/JParticle/JPAChildShape.o    \
            $(BUILD_DIR)/asm/JParticle/JPAExTexShape.o    \
            $(BUILD_DIR)/asm/JParticle/JPADynamicsBlock.o    \
            $(BUILD_DIR)/asm/JParticle/JPAFieldBlock.o    \
            $(BUILD_DIR)/asm/JParticle/JPAKeyBlock.o    \
            $(BUILD_DIR)/asm/JParticle/JPATexture.o    \
            $(BUILD_DIR)/asm/JParticle/JPAResourceLoader.o    \
            $(BUILD_DIR)/asm/JParticle/JPAEmitterManager.o    \
            $(BUILD_DIR)/asm/JParticle/JPAEmitter.o    \
            $(BUILD_DIR)/asm/JParticle/JPAParticle.o    \
            $(BUILD_DIR)/asm/JParticle/JPAMath.o    \
            $(BUILD_DIR)/asm/JStage/JSGActor.o    \
            $(BUILD_DIR)/asm/JStage/JSGAmbientLight.o    \
            $(BUILD_DIR)/asm/JStage/JSGCamera.o    \
            $(BUILD_DIR)/asm/JStage/JSGFog.o    \
            $(BUILD_DIR)/asm/JStage/JSGLight.o    \
            $(BUILD_DIR)/asm/JStage/JSGObject.o    \
            $(BUILD_DIR)/asm/JStage/JSGSystem.o    \
            $(BUILD_DIR)/asm/JStudio/ctb.o    \
            $(BUILD_DIR)/asm/JStudio/functionvalue.o    \
            $(BUILD_DIR)/asm/JStudio/fvb.o    \
            $(BUILD_DIR)/asm/JStudio/fvb-data-parse.o    \
            $(BUILD_DIR)/asm/JStudio/jstudio-control.o    \
            $(BUILD_DIR)/asm/JStudio/jstudio-math.o    \
            $(BUILD_DIR)/asm/JStudio/jstudio-object.o    \
            $(BUILD_DIR)/asm/JStudio/object-id.o    \
            $(BUILD_DIR)/asm/JStudio/stb.o    \
            $(BUILD_DIR)/asm/JStudio/stb-data-parse.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/control.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object-actor.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object-ambientlight.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object-camera.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object-fog.o    \
            $(BUILD_DIR)/asm/JStudio_JStage/object-light.o    \
            $(BUILD_DIR)/asm/JStudio_JAudio2/control.o    \
            $(BUILD_DIR)/asm/JStudio_JAudio2/object-sound.o    \
            $(BUILD_DIR)/asm/JStudio_JParticle/control.o    \
            $(BUILD_DIR)/asm/JStudio_JParticle/object-particle.o    \
            $(BUILD_DIR)/asm/JAudio2/JASCalc.o    \
            $(BUILD_DIR)/asm/JAudio2/JASTaskThread.o    \
            $(BUILD_DIR)/asm/JAudio2/JASDvdThread.o    \
            $(BUILD_DIR)/asm/JAudio2/JASCallback.o    \
            $(BUILD_DIR)/asm/JAudio2/JASHeapCtrl.o    \
            $(BUILD_DIR)/asm/JAudio2/JASResArcLoader.o    \
            $(BUILD_DIR)/asm/JAudio2/JASProbe.o    \
            $(BUILD_DIR)/asm/JAudio2/JASReport.o    \
            $(BUILD_DIR)/asm/JAudio2/JASCmdStack.o    \
            $(BUILD_DIR)/asm/JAudio2/JASTrack.o    \
            $(BUILD_DIR)/asm/JAudio2/JASTrackPort.o    \
            $(BUILD_DIR)/asm/JAudio2/JASRegisterParam.o    \
            $(BUILD_DIR)/asm/JAudio2/JASSeqCtrl.o    \
            $(BUILD_DIR)/asm/JAudio2/JASSeqParser.o    \
            $(BUILD_DIR)/asm/JAudio2/JASSeqReader.o    \
            $(BUILD_DIR)/asm/JAudio2/JASAramStream.o    \
            $(BUILD_DIR)/asm/JAudio2/JASBank.o    \
            $(BUILD_DIR)/asm/JAudio2/JASBasicBank.o    \
            $(BUILD_DIR)/asm/JAudio2/JASVoiceBank.o    \
            $(BUILD_DIR)/asm/JAudio2/JASBasicInst.o    \
            $(BUILD_DIR)/asm/JAudio2/JASDrumSet.o    \
            $(BUILD_DIR)/asm/JAudio2/JASBasicWaveBank.o    \
            $(BUILD_DIR)/asm/JAudio2/JASSimpleWaveBank.o    \
            $(BUILD_DIR)/asm/JAudio2/JASWSParser.o    \
            $(BUILD_DIR)/asm/JAudio2/JASBNKParser.o    \
            $(BUILD_DIR)/asm/JAudio2/JASWaveArcLoader.o    \
            $(BUILD_DIR)/asm/JAudio2/JASChannel.o    \
            $(BUILD_DIR)/asm/JAudio2/JASLfo.o    \
            $(BUILD_DIR)/asm/JAudio2/JASOscillator.o    \
            $(BUILD_DIR)/asm/JAudio2/JASAiCtrl.o    \
            $(BUILD_DIR)/asm/JAudio2/JASAudioThread.o    \
            $(BUILD_DIR)/asm/JAudio2/JASAudioReseter.o    \
            $(BUILD_DIR)/asm/JAudio2/JASDSPChannel.o    \
            $(BUILD_DIR)/asm/JAudio2/JASDSPInterface.o    \
            $(BUILD_DIR)/asm/JAudio2/JASDriverIF.o    \
            $(BUILD_DIR)/asm/JAudio2/JASSoundParams.o    \
            $(BUILD_DIR)/asm/JAudio2/dspproc.o    \
            $(BUILD_DIR)/asm/JAudio2/dsptask.o    \
            $(BUILD_DIR)/asm/JAudio2/osdsp.o    \
            $(BUILD_DIR)/asm/JAudio2/osdsp/osdsp_task.o    \
            $(BUILD_DIR)/asm/JAudio2/JAIAudible.o    \
            $(BUILD_DIR)/asm/JAudio2/JAIAudience.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISe.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISeMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISeq.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISeqDataMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISeqMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISound.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISoundChild.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISoundHandles.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISoundInfo.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISoundParams.o    \
            $(BUILD_DIR)/asm/JAudio2/JAISoundStarter.o    \
            $(BUILD_DIR)/asm/JAudio2/JAIStream.o    \
            $(BUILD_DIR)/asm/JAudio2/JAIStreamDataMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAIStreamMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUAudioArcInterpreter.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUAudioArcLoader.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUAudioMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUBankTable.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUClusterSound.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUInitializer.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUSectionHeap.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUSeqCollection.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUSeqDataBlockMgr.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUSoundAnimator.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUSoundTable.o    \
            $(BUILD_DIR)/asm/JAudio2/JAUStreamFileTable.o    \
            $(BUILD_DIR)/asm/JMessage/control.o    \
            $(BUILD_DIR)/asm/JMessage/processor.o    \
            $(BUILD_DIR)/asm/JMessage/resource.o    \
            $(BUILD_DIR)/asm/JMessage/locale.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2Calc.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2AudioArcLoader.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundStarter.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundHandles.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SeMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SeqMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2StatusMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SceneMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2FxLineMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundInfo.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2Audience.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundObject.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SoundObjMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2Creature.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2LinkMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2EnvSeMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2WolfHowlMgr.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2SpeechMgr2.o    \
            $(BUILD_DIR)/asm/Z2AudioLib/Z2AudioMgr.o    \
            $(BUILD_DIR)/asm/gf/GFGeometry.o    \
            $(BUILD_DIR)/asm/gf/GFLight.o    \
            $(BUILD_DIR)/asm/gf/GFPixel.o    \
            $(BUILD_DIR)/asm/gf/GFTev.o    \
            $(BUILD_DIR)/libs/JSystem/JKernel/JKRHeap.o    \
            $(BUILD_DIR)/asm/JKernel/JKRHeap.o    \
            $(BUILD_DIR)/asm/JKernel/JKRExpHeap.o    \
            $(BUILD_DIR)/asm/JKernel/JKRSolidHeap.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAssertHeap.o    \
            $(BUILD_DIR)/libs/JSystem/JKernel/JKRDisposer.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDisposer.o    \
            $(BUILD_DIR)/asm/JKernel/JKRThread.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAram.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAramHeap.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAramBlock.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAramPiece.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAramStream.o    \
            $(BUILD_DIR)/asm/JKernel/JKRFileLoader.o    \
            $(BUILD_DIR)/asm/JKernel/JKRFileFinder.o    \
            $(BUILD_DIR)/asm/JKernel/JKRFileCache.o    \
            $(BUILD_DIR)/asm/JKernel/JKRArchivePub.o    \
            $(BUILD_DIR)/asm/JKernel/JKRArchivePri.o    \
            $(BUILD_DIR)/asm/JKernel/JKRMemArchive.o    \
            $(BUILD_DIR)/asm/JKernel/JKRAramArchive.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDvdArchive.o    \
            $(BUILD_DIR)/asm/JKernel/JKRCompArchive.o    \
            $(BUILD_DIR)/asm/JKernel/JKRFile.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDvdFile.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDvdRipper.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDvdAramRipper.o    \
            $(BUILD_DIR)/asm/JKernel/JKRDecomp.o    \
            $(BUILD_DIR)/asm/JSupport/JSUList.o    \
            $(BUILD_DIR)/libs/JSystem/JSupport/JSUList.o    \
            $(BUILD_DIR)/asm/JSupport/JSUInputStream.o    \
            $(BUILD_DIR)/asm/JSupport/JSUMemoryStream.o    \
            $(BUILD_DIR)/asm/JSupport/JSUFileStream.o    \
            $(BUILD_DIR)/asm/JGadget/binary.o    \
            $(BUILD_DIR)/asm/JGadget/linklist.o    \
            $(BUILD_DIR)/asm/JGadget/std-vector.o    \
            $(BUILD_DIR)/asm/JUtility/JUTCacheFont.o    \
            $(BUILD_DIR)/asm/JUtility/JUTResource.o    \
            $(BUILD_DIR)/asm/JUtility/JUTTexture.o    \
            $(BUILD_DIR)/asm/JUtility/JUTPalette.o    \
            $(BUILD_DIR)/asm/JUtility/JUTNameTab.o    \
            $(BUILD_DIR)/asm/JUtility/JUTGraphFifo.o    \
            $(BUILD_DIR)/asm/JUtility/JUTFont.o    \
            $(BUILD_DIR)/asm/JUtility/JUTResFont.o    \
            $(BUILD_DIR)/asm/JUtility/JUTDbPrint.o    \
            $(BUILD_DIR)/asm/JUtility/JUTGamePad.o    \
            $(BUILD_DIR)/asm/JUtility/JUTException.o    \
            $(BUILD_DIR)/asm/JUtility/JUTDirectPrint.o    \
            $(BUILD_DIR)/asm/JUtility/JUTAssert.o    \
            $(BUILD_DIR)/asm/JUtility/JUTVideo.o    \
            $(BUILD_DIR)/asm/JUtility/JUTXfb.o    \
            $(BUILD_DIR)/asm/JUtility/JUTFader.o    \
            $(BUILD_DIR)/asm/JUtility/JUTProcBar.o    \
            $(BUILD_DIR)/asm/JUtility/JUTConsole.o    \
            $(BUILD_DIR)/asm/JUtility/JUTDirectFile.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DGrafContext.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DOrthoGraph.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DTevs.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DMaterial.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DMatBlock.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DMaterialFactory.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DPrint.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DPane.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DScreen.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DWindow.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DPicture.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DTextBox.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DWindowEx.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DPictureEx.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DTextBoxEx.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DAnmLoader.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DAnimation.o    \
            $(BUILD_DIR)/asm/J2DGraph/J2DManage.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DGD.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DSys.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DVertex.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DTransform.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DTexture.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DPacket.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DShapeMtx.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DShapeDraw.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DShape.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DMaterial.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DMatBlock.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DTevs.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DDrawBuffer.o    \
            $(BUILD_DIR)/asm/J3DGraphBase/J3DStruct.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DShapeTable.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DJointTree.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DModelData.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DMtxBuffer.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DModel.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DAnimation.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DMaterialAnm.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DSkinDeform.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DCluster.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DJoint.o    \
            $(BUILD_DIR)/asm/J3DGraphAnimator/J3DMaterialAttach.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DMaterialFactory.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DMaterialFactory/J3DMaterialFactory_v21.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DClusterLoader.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DModelLoader.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DModelLoaderCalcSize.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DJointFactory.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DShapeFactory.o    \
            $(BUILD_DIR)/asm/J3DGraphLoader/J3DAnmLoader.o    \
            $(BUILD_DIR)/asm/JMath/JMath.o    \
            $(BUILD_DIR)/asm/JMath/random.o    \
            $(BUILD_DIR)/asm/JMath/JMATrigonometric.o    \
            $(BUILD_DIR)/asm/base/PPCArch.o    \
            $(BUILD_DIR)/asm/os/OS.o    \
            $(BUILD_DIR)/asm/os/OSAlarm.o    \
            $(BUILD_DIR)/asm/os/OSAlloc.o    \
            $(BUILD_DIR)/asm/os/OSArena.o    \
            $(BUILD_DIR)/asm/os/OSAudioSystem.o    \
            $(BUILD_DIR)/asm/os/OSCache.o    \
            $(BUILD_DIR)/asm/os/OSContext.o    \
            $(BUILD_DIR)/asm/os/OSError.o    \
            $(BUILD_DIR)/asm/os/OSExec.o    \
            $(BUILD_DIR)/asm/os/OSFont.o    \
            $(BUILD_DIR)/asm/os/OSInterrupt.o    \
            $(BUILD_DIR)/asm/os/OSLink.o    \
            $(BUILD_DIR)/asm/os/OSMessage.o    \
            $(BUILD_DIR)/asm/os/OSMemory.o    \
            $(BUILD_DIR)/asm/os/OSMutex.o    \
            $(BUILD_DIR)/asm/os/OSReboot.o    \
            $(BUILD_DIR)/asm/os/OSReset.o    \
            $(BUILD_DIR)/asm/os/OSResetSW.o    \
            $(BUILD_DIR)/asm/os/OSRtc.o    \
            $(BUILD_DIR)/asm/os/OSSync.o    \
            $(BUILD_DIR)/asm/os/OSThread.o    \
            $(BUILD_DIR)/asm/os/OSTime.o    \
            $(BUILD_DIR)/asm/os///ppc/eabi/__ppc_eabi_init.o    \
            $(BUILD_DIR)/asm/exi/EXIBios.o    \
            $(BUILD_DIR)/asm/exi/EXIUart.o    \
            $(BUILD_DIR)/asm/si/SIBios.o    \
            $(BUILD_DIR)/asm/si/SISamplingRate.o    \
            $(BUILD_DIR)/asm/db/db.o    \
            $(BUILD_DIR)/asm/mtx/mtx.o    \
            $(BUILD_DIR)/asm/mtx/mtxvec.o    \
            $(BUILD_DIR)/asm/mtx/mtx44.o    \
            $(BUILD_DIR)/asm/mtx/vec.o    \
            $(BUILD_DIR)/asm/mtx/quat.o    \
            $(BUILD_DIR)/asm/dvd/dvdlow.o    \
            $(BUILD_DIR)/asm/dvd/dvdfs.o    \
            $(BUILD_DIR)/asm/dvd/dvd.o    \
            $(BUILD_DIR)/asm/dvd/dvdqueue.o    \
            $(BUILD_DIR)/asm/dvd/dvderror.o    \
            $(BUILD_DIR)/asm/dvd/dvdidutils.o    \
            $(BUILD_DIR)/asm/dvd/dvdFatal.o    \
            $(BUILD_DIR)/asm/dvd/fstload.o    \
            $(BUILD_DIR)/asm/vi/vi.o    \
            $(BUILD_DIR)/asm/pad/Padclamp.o    \
            $(BUILD_DIR)/asm/pad/Pad.o    \
            $(BUILD_DIR)/asm/ai/ai.o    \
            $(BUILD_DIR)/asm/ar/ar.o    \
            $(BUILD_DIR)/asm/ar/arq.o    \
            $(BUILD_DIR)/asm/dsp/dsp.o    \
            $(BUILD_DIR)/asm/dsp/dsp/dsp_debug.o    \
            $(BUILD_DIR)/asm/dsp/dsp/dsp_task.o    \
            $(BUILD_DIR)/asm/card/CARDBios.o    \
            $(BUILD_DIR)/asm/card/CARDUnlock.o    \
            $(BUILD_DIR)/asm/card/CARDRdwr.o    \
            $(BUILD_DIR)/asm/card/CARDBlock.o    \
            $(BUILD_DIR)/asm/card/CARDDir.o    \
            $(BUILD_DIR)/asm/card/CARDCheck.o    \
            $(BUILD_DIR)/asm/card/CARDMount.o    \
            $(BUILD_DIR)/asm/card/CARDFormat.o    \
            $(BUILD_DIR)/asm/card/CARDOpen.o    \
            $(BUILD_DIR)/asm/card/CARDCreate.o    \
            $(BUILD_DIR)/asm/card/CARDRead.o    \
            $(BUILD_DIR)/asm/card/CARDWrite.o    \
            $(BUILD_DIR)/asm/card/CARDStat.o    \
            $(BUILD_DIR)/asm/card/CARDNet.o    \
            $(BUILD_DIR)/asm/gx/GXInit.o    \
            $(BUILD_DIR)/asm/gx/GXFifo.o    \
            $(BUILD_DIR)/asm/gx/GXAttr.o    \
            $(BUILD_DIR)/asm/gx/GXMisc.o    \
            $(BUILD_DIR)/asm/gx/GXGeometry.o    \
            $(BUILD_DIR)/asm/gx/GXFrameBuf.o    \
            $(BUILD_DIR)/asm/gx/GXLight.o    \
            $(BUILD_DIR)/asm/gx/GXTexture.o    \
            $(BUILD_DIR)/asm/gx/GXBump.o    \
            $(BUILD_DIR)/asm/gx/GXTev.o    \
            $(BUILD_DIR)/asm/gx/GXPixel.o    \
            $(BUILD_DIR)/asm/gx/GXDisplayList.o    \
            $(BUILD_DIR)/asm/gx/GXTransform.o    \
            $(BUILD_DIR)/asm/gx/GXPerf.o    \
            $(BUILD_DIR)/asm/gd/GDBase.o    \
            $(BUILD_DIR)/asm/gd/GDGeometry.o    \
            $(BUILD_DIR)/asm/clib.o             

CTORS_O_FILES :=                                    \
    $(BUILD_DIR)/asm/ctors.o

DTORS_O_FILES :=                                    \
    $(BUILD_DIR)/asm/dtors.o

RODATA_O_FILES :=                                   \
    $(BUILD_DIR)/asm/rodata.o

DATA_O_FILES :=                                     \
    $(BUILD_DIR)/asm/data.o                         \

BSS_O_FILES :=                                      \
    $(BUILD_DIR)/asm/bss.o

SDATA_O_FILES :=                                      \
    $(BUILD_DIR)/asm/sdata.o

SBSS_O_FILES :=                                     \
    $(BUILD_DIR)/asm/sbss.o

SDATA2_O_FILES :=                                      \
    $(BUILD_DIR)/asm/sdata2.o

SBSS2_O_FILES :=                                    \
    $(BUILD_DIR)/asm/sbss2.o