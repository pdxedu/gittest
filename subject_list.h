#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 100;

struct subject
{
	char title[SIZE];
	char desc[SIZE];
	int rate;
	char sug[SIZE];
};
	

class Subject_List
{
	public:
		Subject_List();
		~Subject_List();
		void read(subject * a_subject);
		void display(subject * a_subject);
		bool search(subject * a_subject);
		void remove(subject * a_subject);
		void load(subject * a_subject);
		int set_num();
		

	private:
		subject * a_subject;
		int num;
};
