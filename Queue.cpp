#include "Queue.h"

MyList list_object;

int MyQueue::size_list()
{
	return list_object.size();
}

element* MyQueue::see_all(int j)
{
	return list_object.item(j);
}

int MyQueue::enqueue(element *list)
{
	return list_object.add(list);
}

element* MyQueue::dequeue()
{
	return list_object.output_list();
}