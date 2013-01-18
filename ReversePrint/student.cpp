//Tacuma Solomon
//Student Class Implementation File

#include "student.h"

student::student(){
}

student::student(string name,string major,string ID, float GPA,student* nextptr){
	std_name = name;
	std_major = major;
	std_ID = ID;
	std_GPA = GPA;
	next = nextptr;
}


void student::setstd_name(string name){
	std_name = name;
}

void student::setstd_major(string major){
	std_major = major;
}

void student::setstd_ID(string ID){
	std_ID = ID;
}

void student::setstd_GPA(float GPA){
	std_GPA = GPA;
}

void student::set_next(student* nextptr){
	next = nextptr;
}

string student::getstd_name(){
	return std_name;
}

string student::getstd_major(){
	return std_major;
}

string student::getstd_ID(){
	return std_ID;
}

float student::getstd_GPA(){
	return std_GPA;
}

student* student::get_next(){
	return next;
}