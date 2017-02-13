#include <iostream>
using namespace std;

struct student
{
	char name[10];
	int num;
};

int main()
{
	student * a_student;
	a_student = new student[3];
	
	int i;
	for (i=0;i<3;i++)
	{
		cout << "Enter name" << endl;
		cin.get(a_student[i].name,10,'\n');
		cin.ignore(100,'\n');


		cout << "enter student ID" << endl;
		cin >> a_student[i].num;
		cin.ignore();
	}
}
/*
void get_record(student * a_student)
{
	cout <<"Please enter student name " << endl;
	cin.get(a_student->name,10,'\n');
	cin.ignore(100,'\n');
	cout <<"Enter Student ID" << endl;
	cin >> a_student->id;
}
*/
