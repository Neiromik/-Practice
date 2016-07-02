#include "List.h"

void MyList::first_element()
{
	system("cls");
	n = 1;
	first = new element;
	first->number = n;
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
}

void MyList::output_list()
{
	system("cls");
	cout << "+-----------------------------------------------------------------------------+\n";
	cout << "|   Number   |     Name    |      Fam      |     Age      |       Gender      |\n";
	cout << "+-----------------------------------------------------------------------------+\n";
	list = first;
	while (list)
	{
		printf("|   %7d  |   %8s  |   %10s  |  %10d  | %17s |\n", list->number, list->name, list->fam, list->age, list->gender);
		list = list->next;
		cout << "+-----------------------------------------------------------------------------+\n";

	}
	_getch();
}

void MyList::add()
{
		system("cls"); 
		n++;
		last = first;
		while (last->next) last = last->next;
		list = new element;
		list->number = n;
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

void MyList::del()
{
	system("cls");
	if (first != NULL)
	{
		list = first;
		first = first->next;
		cout << "+-----------------------------------------------------------------------------+\n";
		cout << "|   Number   |     Name    |      Fam      |     Age      |       Gender      |\n";
		cout << "+-----------------------------------------------------------------------------+\n";
		printf("|   %7d  |   %8s  |   %10s  |  %10d  | %17s |\n", list->number, list->name, list->fam, list->age, list->gender);
		cout << "+-----------------------------------------------------------------------------+\n";
		cout << "The item is removed.\n";
		delete list;
		_getch();
	}
}