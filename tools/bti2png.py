from io import BytesIO
from gclib.bti import BTI
import logging

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

# Input and output paths
input_bti_path = "mod_assets/gz/test.bti"  # Path to your BTI file
output_image_path = "test_output2.png"  # Output path for the PNG

try:
    # Load the BTI
    bti = BTI(input_bti_path)
    
    # Render the image
    image = bti.render()
    
    # Save as JPG
    image.save(output_image_path)
    
    logging.info(f"Successfully converted BTI to PNG at {output_image_path}")
except Exception as e:
    logging.error(f"Failed to convert BTI: {e}")
