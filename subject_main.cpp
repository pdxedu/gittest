#include "subject_list.h"

int main()
{
	Subject_List list ;
	subject * a_sub;
	a_sub = new subject[list.set_num()];
	list.read(a_sub);
//	list.display(a_sub);	
//	if(list.search(a_sub))
//		list.load(a_sub);
	list.remove(a_sub);
	list.display(a_sub);
	return 0;
}
