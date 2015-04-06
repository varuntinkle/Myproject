#from django.shortcuts import render
from django.template import RequestContext
from django.shortcuts import render_to_response
from django.http import HttpResponse
from database.models import Registration
import django.contrib.auth.hashers 
# Create your views here.

def index(request):
    return render_to_response('login/login.html')


def authenticate (request):
    if request.method == 'POST':
        username = request.POST['username']
        password = request.POST['password']
        message = 'You searched for: %s %s' %(username, password)
        Object_Searched = Registration.objects.filter(username = username)
        if Object_Searched:
            Object_Searched = Object_Searched[0]
            if  django.contrib.auth.hashers.check_password(password, Object_Searched.password):
                Category=Object_Searched.Category
                message=Category
                return HttpResponse(message)
            else:
                message = "Wrong Password"
                return HttpResponse(message)  
        else:
            message="Wrong Username"
            return HttpResponse(message)

