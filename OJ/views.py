from django.shortcuts import render
from django.conf import settings
from django.shortcuts import render
from django.core.files.storage import FileSystemStorage
from django.contrib import messages
import os

def index(request):
    context = {}
    if request.method == 'POST':
        pdf_path = os.path.join(settings.MEDIA_ROOT, "user-codes/usercode.cpp")
        os.remove(pdf_path)
        try:
            uploaded_file = request.FILES['document']
        except:
            messages.error(request, 'no file found')
        if not uploaded_file.name.endswith(".cpp"):
            messages.error(request, 'file should be cpp')
        else:
            fs = FileSystemStorage()
            fs.save("user-codes/usercode.cpp", uploaded_file)
    return render(request, "OJ/index.html")

