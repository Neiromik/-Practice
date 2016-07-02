#include "List.h"



void MyList::first_element()
{
	system("cls");
	first = new element;
	cout << "\nEnter name->";
	cin >> first->name;
	cout << "\nEnter fam->";
	cin >> first->fam;
	cout << "\nEnter age-> ";
	cin >> first->age;
	cout << "\nEnter gender-> ";
	cin >> first->gender;
	first->next = NULL;
	system("pause");
	system("cls");
}


void MyList::output_list()
{

	system("cls");
	cout << "+-----------------------------------------------------------------------------+\n";
	cout << "|     ¹     |      Name   |      Fam      |     Age      |       Gender       |\n";
	cout << "+-----------------------------------------------------------------------------+\n";
	list = first;

	while (list)
	{
		printf("|   |   %10s  |   %9s  |  %13d  | %14s |\n", list->name, list->fam, list->age, list->gender);
		list = list->next;
		cout << "+-----------------------------------------------------------------------------+\n";

	}
	_getch();
	system("cls");

}

void MyList::add()
{
	system("cls");
	{
		last = first;
		while (last->next) last = last->next;
		list = new element;
		cout << "\nEnter name->";
		cin >> list->name;
		cout << "\nEnter fam->";
		cin >> list->fam;
		cout << "\nEnter age-> ";
		cin >> list->age;
		cout << "\nEnter gender-> ";
		cin >> list->gender;
		list->next = NULL;
		last->next = list;
	}
}


void MyList::del()
{
	if (first != NULL)
	{
		list = first;
		first = first->next;
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->name, list->fam, list->age, list->gender);
		delete list;
	}
}