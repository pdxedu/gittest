#include "subject_list.h"
//
Subject_List::Subject_List()
{
	a_subject = NULL;
	cout << "How many subjects do you want to add " << endl;
	cin >> num;
	cin.ignore();
}
////
//
Subject_List::~Subject_List()
{
	delete[] a_subject;
}
//
void Subject_List::read(subject * a_subject)
{
	int i;
	for (i=0;i<num;i++)
	{
	cout << "Please enter a subject title " << endl;
	cin.get(a_subject[i].title,SIZE,'\n');
	cin.ignore(SIZE,'\n');
	cout << "Please enter a description " << endl;
	cin.get(a_subject[i].desc,SIZE,'\n');
	cin.ignore(SIZE,'\n');

	cout << "Please rate your ability in the subject 0-100 " << endl;
	cin >> a_subject[i].rate;
	cin.ignore();

	cout << "Please enter improvement suggestions " << endl;
	cin.get(a_subject[i].sug,SIZE,'\n');
	cin.ignore(SIZE,'\n');
	}
}
////
//
void Subject_List::display(subject * a_subject)
{
	int i;
	for (i=0;i<num;i++)
	{
		cout <<  a_subject[i].title << endl;
		cout <<  a_subject[i].desc << endl;
		cout <<  a_subject[i].rate << endl;
		cout <<  a_subject[i].sug << endl;
		cout << "-------------------" << endl;
	}
}
////
//
bool Subject_List::search(subject * a_subject)
{
	char tit[SIZE];
	cout << "Enter subject title to find " << endl;
	cin.get(tit,SIZE,'\n');
	cin.ignore(100,'\n');
	int i;
	for (i=0;i<num;i++)
	{
		if(strcmp(tit,a_subject[i].title)== 0)
			return true;
	}
	return false;
}
////
//
void Subject_List::remove(subject * a_subject)
{
    char tit[SIZE];
    cout << "Enter subject title to remove " << endl;
    cin.get(tit,SIZE,'\n');
    cin.ignore(100,'\n');
    int i;
    for (i=0;i<num;i++)
    {
        if(strcmp(tit,a_subject[i].title)== 0)
        {
			cout << a_subject[i].title  << " " << "removed" << endl;
			a_subject[i].title = '\0';
        }
    }
}
////
//
void Subject_List::load(subject * a_subject)
{
	char tit[SIZE];
    cout << "Enter subject title to find " << endl;
    cin.get(tit,SIZE,'\n');
    cin.ignore(100,'\n');
	
    int i;
    for (i=0;i<num;i++)
    {
        if(strcmp(tit,a_subject[i].title)== 0)
		{
        	cout <<  a_subject[i].title << endl;
        	cout <<  a_subject[i].desc << endl;
        	cout <<  a_subject[i].rate << endl;
        	cout <<  a_subject[i].sug << endl;
			cout << "=========================" << endl;
		}
	}
}
////
//
int Subject_List::set_num()
{
int	x = num;
	return x;
}
