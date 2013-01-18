//Tacuma Solomon
//Student Class Header file

#include<string>
using namespace std;


class student{
public:
	student();
	student(string,string,string,float,student*);
	void setstd_name(string);
	void setstd_major(string);
	void setstd_ID(string);
	void setstd_GPA(float);
	void set_next(student*);

	string getstd_name();
	string getstd_major();
	string getstd_ID();
	float getstd_GPA();
	student* get_next();

private:
	string std_name;
	string std_major;
	string std_ID;
	float std_GPA;
	student* next;
};