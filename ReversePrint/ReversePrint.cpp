//Tacuma Solomon
//Data Structures 
//This Program Reads information from a text file from a group of students. The 
//Information for each student is stored in a struct, which is then put into a linked list.
//The program then prints the contents of the list in reverse, recursively.

#include "SYCS.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
void Footer();

int main(){
	ifstream in;
	in.open("infile.txt");
	string name;
	string major;
	string ID;
	float GPA;
	student* next;

	student* temp;
	SYCS class_roster;

	while(!in.eof()){
		getline(in,name);
		getline(in,major);
		getline(in,ID);
		in >> GPA;
		in.ignore(1);
		next = NULL;
		class_roster.InsertItem(name,major,ID,GPA,next);
	}
	class_roster.print_class_roster();
	Footer();
	system("pause");

	return 0;
}

void Footer()
{
	cout << endl << endl;
	cout << "() Code by Tacuma Solomon " << endl;
	cout << "() Not for Redistribution or Reuse." << endl << endl;
}

/*
Fred Cook
Computer Science
@1324354
3.4

Betty Davis
Electrical Engineering
@8099000
1.8

Jim Rockville
Mathematics
@1155000
4

Kevin Smith
English
@2230090
3.1



() Code by Tacuma Solomon
() Not for Redistribution or Reuse.

Press any key to continue . . 
*/