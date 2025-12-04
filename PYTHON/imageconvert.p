from PIL import Image
from fpdf import FPDF

# Path to your image file (make sure file is in same folder or give full path)
image_path = "IMG20250903160920.jpg"

# Load the image
image = Image.open(image_path)

# Convert image to RGB if not already
if image.mode != 'RGB':
    image = image.convert('RGB')

# Create a PDF
pdf = FPDF()
pdf.add_page()
pdf.image(image_path, x=10, y=10, w=190)  # Adjust size if needed

# Save the PDF
output_pdf_path = "Bonafide_Certificate_Sonu_Kumar.pdf"
pdf.output(output_pdf_path)

print(f"✅ PDF saved successfully as: {output_pdf_path}")