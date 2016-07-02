#include "Queue.h"


MyList list_object;

void MyQueue::enqueue()
{
	if (list_object.first!=NULL)
	{
		list_object.add();
	}
	else
	{
		list_object.first_element();
	}
}


void MyQueue::dequeue()
{
	list_object.del();

}

void MyQueue::output_queue()
{
	list_object.output_list();
}