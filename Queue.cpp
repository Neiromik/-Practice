#include "list.h"
#include "queue.h"

MyList list_object;

void MyQueue:: create_queue()
{
	list_object.create_list();
}

void MyQueue::  enqueue()
{
	list_object.add();
}

void MyQueue:: dequeue()
{
	list_object.del();

}

void MyQueue:: output_queue()
{
	list_object.output_list();
}