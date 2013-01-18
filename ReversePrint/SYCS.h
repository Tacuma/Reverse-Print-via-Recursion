//Tacuma Solomon
//SYCS roster class (just a linked list)

#include "student.h"

struct NodeType;

class SYCS
{
public:
	SYCS();
	void InsertItem(string,string,string,float,student*);
	void ResetList();
	void print_class_roster();
	void printreverse(student*);
private:
	student* listData;
	int length;
	student* currentPos;
};

