from django.conf.urls import url

from . import views

urlpatterns = [
	url(r'authenticate',views.authenticate),
    url(r'^$', views.index, name='index'),
    ]