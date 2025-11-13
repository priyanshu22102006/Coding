import cv2
import pytesseract
import numpy as np

def detect_text_regions(frame):
    """Detect text regions and extract text from them"""
    # Convert to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Create MSER detector
    mser = cv2.MSER_create()
    regions, _ = mser.detectRegions(gray)
    
    # Create mask for text regions
    mask = np.zeros((frame.shape[0], frame.shape[1]), dtype=np.uint8)
    
    for region in regions:
        # Get bounding rectangle for each region
        x, y, w, h = cv2.boundingRect(region.reshape(-1, 1, 2))
        
        # Filter regions by size (adjust these values based on your needs)
        if 20 < w < 500 and 20 < h < 200:
            cv2.rectangle(mask, (x, y), (x + w, y + h), 255, -1)
    
    # Extract text from the whole frame and from detected regions
    custom_config = r'--oem 3 --psm 6 -l eng'
    
    # Text from entire frame
    full_text = pytesseract.image_to_string(gray, config=custom_config)
    
    # Text from detected regions only
    masked_frame = cv2.bitwise_and(gray, gray, mask=mask)
    region_text = pytesseract.image_to_string(masked_frame, config=custom_config)
    
    return full_text.strip(), region_text.strip(), mask

def advanced_camera_ocr():
    """Advanced version with text region detection"""
    cap = cv2.VideoCapture(0)
    
    if not cap.isOpened():
        print("❌ Error: Could not open camera")
        return
    
    print("🚀 Advanced Camera OCR Started!")
    print("📷 Press 'q' to quit")
    print("📷 Press 'r' to toggle region detection")
    print("-" * 50)
    
    show_regions = False
    last_full_text = ""
    last_region_text = ""
    
    try:
        while True:
            ret, frame = cap.read()
            if not ret:
                break
            
            display_frame = frame.copy()
            
            if show_regions:
                # Detect text regions
                full_text, region_text, mask = detect_text_regions(frame)
                
                # Display mask
                display_frame = cv2.cvtColor(mask, cv2.COLOR_GRAY2BGR)
                
                # Print detected text
                if full_text and full_text != last_full_text:
                    print(f"\n📝 Full Frame Text: {full_text}")
                    last_full_text = full_text
                
                if region_text and region_text != last_region_text:
                    print(f"🎯 Region Text: {region_text}")
                    last_region_text = region_text
            else:
                # Simple OCR on entire frame
                gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                custom_config = r'--oem 3 --psm 6 -l eng'
                text = pytesseract.image_to_string(gray, config=custom_config).strip()
                
                if text and text != last_full_text:
                    print(f"\n📝 Detected Text: {text}")
                    last_full_text = text
            
            # Display instructions
            mode = "Region Detection" if show_regions else "Full Frame"
            cv2.putText(display_frame, f"Mode: {mode}", (10, 30), 
                       cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
            cv2.putText(display_frame, "Press 'q' to quit, 'r' to toggle mode", (10, 60), 
                       cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
            
            cv2.imshow('Advanced Camera OCR', display_frame)
            
            key = cv2.waitKey(1) & 0xFF
            if key == ord('q'):
                break
            elif key == ord('r'):
                show_regions = not show_regions
                print(f"🔄 Mode changed to: {'Region Detection' if show_regions else 'Full Frame'}")
                
    except KeyboardInterrupt:
        print("\n⏹️ Stopping camera OCR...")
    
    finally:
        cap.release()
        cv2.destroyAllWindows()
        print("✅ Camera released")

# Run the simple version by default
if __name__ == "__main__":
    # Uncomment the line below to run advanced version instead
    advanced_camera_ocr()
    # camera_ocr()