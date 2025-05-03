import fitz  # PyMuPDF
import os

def remove_watermark(pdf_path):
    doc = fitz.open(pdf_path)
    modified = False

    for page in doc:
        # Remove image watermarks
        for img in page.get_images(full=True):
            xref = img[0]
            doc.delete_image(xref)
            modified = True

        # Remove text-based watermarks (Update with actual watermark text)
        watermark_texts = ["CONFIDENTIAL", "DRAFT", "SAMPLE", "WATERMARK_TEXT"]  # Modify based on your PDF
        for wm_text in watermark_texts:
            text_instances = page.search_for(wm_text)
            for inst in text_instances:
                page.erase_text(inst)  
                modified = True

    if modified:
        temp_pdf = pdf_path + ".temp.pdf"  # Temporary file
        doc.save(temp_pdf)
        doc.close()
        
        os.replace(temp_pdf, pdf_path)  # Replace original file with processed file
        print(f"✅ Watermark removed! Updated file: {pdf_path}")
    else:
        doc.close()
        print("❌ No watermark found or nothing removed.")

# Get user input for PDF file
pdf_file = input("Enter the path of the PDF file: ").strip()
if os.path.exists(pdf_file) and pdf_file.lower().endswith(".pdf"):
    remove_watermark(pdf_file)
else:
    print("❌ Invalid file path. Please provide a valid PDF file.")
