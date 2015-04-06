from django.db import models

# Create your models here.
# Anirudh Agnihotry

class CRequest(models.Model):
	status_choice=(('0','Waiting'),('1','Pending'),('2','Completed'))
	name = models.CharField(max_length = 140)
	##########Rohan#############
	reg_no = models.ForeignKey('Registration',null= True,blank=True)
	problem= models.CharField(max_length = 140)
	request_date = models.DateTimeField()
	appoint_date = models.DateTimeField()
	appoint_no = models.IntegerField(unique = True)
	doctor = models.ForeignKey('Doctor')
	done = models.BooleanField(default = False)
	outsider = models.BooleanField(default= False)
	status =  models.CharField(max_length=1 ,choices=status_choice)
	def __unicode__(self):
		return self.name


class Medicine(models.Model):
	name = models.CharField(max_length=140)
	salt = models.TextField(blank=True) 
	mg = models.IntegerField()
	price = models.FloatField()
	disease = models.TextField(blank=True)
	misc = models.TextField(blank=True)
	prsc_required = models.BooleanField()
	def __unicode__(self):
		return self.name

class FollowUp(models.Model):
	rating=(('1','poor'),('2','Average'),('3','good'),('4','very good'),('5','excellent'))
	#########Rohan#############
	patient = models.ForeignKey("Registration")
	doctor = models.ForeignKey("Doctor")
	
	title = models.CharField(max_length=200)
	description = models.TextField(blank=True)
	rating = models.CharField(max_length=1,choices=rating)

	def __str__(self):
		return self.title

class Complaint(models.Model):
	category=(('1','poor'),('2','Average'),('3','good'),('4','very good'),('5','excellent'))
	username = models.CharField(max_length=140)
	category = models.CharField(max_length=10,choices=category)
	subject = models.CharField(max_length=140)
	complaint = models.TextField(blank=True)
	complaint_date = models.DateTimeField()
	doc_pat = models.BooleanField(default=0)

	def __str__(self):
		return self.subject
###########Rohan#####################
class Prescription(models.Model):
	patient = models.ForeignKey("Registration")
	doctor = models.ForeignKey("Doctor")
	disease = models.CharField(max_length = 256)
	medicine = models.ManyToManyField('Medicine')
	symptoms = models.TextField(blank = True)
	prescription_time = models.DateTimeField(blank=True)
	next_visit = models.IntegerField(unique = False)
	def __str__(self):
		return self.patient

##Varun
class Registration(models.Model):      
	username = models.CharField(max_length=20, primary_key=True)
	password = models.CharField(max_length=100)
	name = models.CharField(max_length=20)
	category=models.IntegerField()
	def __str__(self):
		return self.username+"*"+self.password+"*"+self.name

#########add doctor image will look into this later-Varun
class Doctor(models.Model):
	name = models.CharField(max_length = 20)
	speciality = models.CharField(max_length = 100)
	qualification = models.CharField(max_length = 100)
	patients_visited=models.TextField()
	schedule = models.TextField()
	#timing


class Patient(models.Model):
	username = models.CharField(max_length=20)
	password = models.CharField(max_length=100)
	patient_history = models.TextField(blank=True)
	patient_test = models.TextField(blank=True)
	outsider = models.BooleanField(default= False)

########################################



