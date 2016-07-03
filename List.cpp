#include "List.h"

element * first, *last, *list;

 element* MyList::output_list()
 {
	 if (first != NULL)
	 {
		 list = first;
		 first = first->next;
		 return list;
	 }
	 else return NULL;
 }

 int MyList::size()
 {
	 int i = 0;
	 list = first;
	 while (list != NULL)
	 {
		 list = list->next;
		 i++;
	 }
	 return i;
 }

 element * MyList::item(int kol)
 {
	 int items = 1;
	 list = first;
	 while (items<kol)
	 {
		 list = list->next;
		 items++;
	 }
	 return list;
 }

 int MyList::add(element *new_item)
{
		if (first != NULL)
		{
			list = new_item;
			last->next = list;
			list->next = NULL;
			last = list;
		}
		else
		{
			first = new_item;
			first->next = NULL;
			last = first;
		}
		return 0;
}


