#include <iostream>
using namespace std;

struct student
{
	char name[10];
	int num;
};

void get_record(student * );
void display(student * );

int main()
{
	student * person ;
	person = new student[3];
	get_record(person);
	display(person);
}

void get_record(student * a_student)
{
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

void display(student * a_student)
{
	int i;
	for (i=0;i<3;i++)	
		cout << a_student[i].name << " " << a_student[i].num << endl;

}
