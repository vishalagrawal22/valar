from django.shortcuts import render
from django.conf import settings
from django.shortcuts import render
from django.core.files.storage import FileSystemStorage
from django.contrib import messages
import os

def index(request):
    context = {}
    if request.method == 'POST':
        try:
            uploaded_file = request.FILES['document']
        except:
            messages.error(request, 'no file found')
        if not uploaded_file.name.endswith(".cpp"):
            messages.error(request, 'file should be cpp')
        else:
            code_path = os.path.join(settings.MEDIA_ROOT, "user-runner/usercode.cpp")
            runner_path = os.path.join(settings.MEDIA_ROOT, "user-runner/")
            os.remove(code_path)
            time.sleep(1)
            fs = FileSystemStorage()
            fs.save("user-runner/usercode.cpp", uploaded_file)
            os.chdir(runner_path)
            os.system("./run.sh")
    return render(request, "OJ/index.html")

