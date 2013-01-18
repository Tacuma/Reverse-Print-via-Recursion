//Tacuma Solomon
//SYCS Implementation file

#include "SYCS.h"
#include <iostream>

SYCS::SYCS() //Class Constructor
{
	length=0;
	listData = NULL;
}


void SYCS::InsertItem(string name,string major,string ID, float GPA,student* nextptr)
{
	student* location;			// Declare a pointer to a node	
	location = new student(name,major,ID,GPA,nextptr);  // Store the item in the node
	location->set_next(listData); // Store address of first node
									// Store address of first node
									// in next field of new node
	listData = location;		// Store address of new node into external pointer
	length++;
}


void SYCS::ResetList()
// Post: Current position has been initialized
{
	currentPos = NULL;
}


void SYCS::printreverse(student* listptr) 
{

	if (listptr!=NULL)
	{
		printreverse(listptr->get_next());
		cout << listptr->getstd_name() << endl;
		cout << listptr->getstd_major() << endl;
		cout << listptr->getstd_ID() << endl;
		cout << listptr->getstd_GPA() << endl << endl;
	}	
}


void SYCS::print_class_roster(){
	printreverse(listData);
}

