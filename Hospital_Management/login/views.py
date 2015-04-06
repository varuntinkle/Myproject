#from django.shortcuts import render
from django.template import RequestContext
from django.shortcuts import render_to_response
from django.http import HttpResponse
from database.models import Registration
import django.contrib.auth.hashers 
# Create your views here.

def index(request):
    # Request the context of the request.
    # The context contains information such as the client's machine details, for example.
    context = RequestContext(request)

    # Construct a dictionary to pass to the template engine as its context.
    # Note the key boldmessage is the same as {{ boldmessage }} in the template!
    context_dict = {'boldmessage': "I am bold font from the context"}
    
    # Return a rendered response to send to the client.
    # We make use of the shortcut function to make our lives easier.
    # Note that the first parameter is the template we wish to use.
    return render_to_response('login/login.html', context_dict, context)


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
                message=Cate
                return HttpResponse(message)
            else:
                message = "Wrong Password"
                return HttpResponse(message)  
        else:
            message="Wrong Username"
            return HttpResponse(message)

