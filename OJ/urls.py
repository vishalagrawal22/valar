from django.urls import path

from . import views

app_name = 'OJ'
urlpatterns = [
    path('', views.index, name='index'),
]