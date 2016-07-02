#include "List.h"

void MyList::first_element()
{
	system("cls");
	n = 1;
	first = new element;
	first->number = n;
	cout << "\nEnter type->";
	cin >> first->type;
	cout << "\nEnter weight->";
	cin >> first->weight;
	cout << "\nEnter price-> ";
	cin >> first->price;
	cout << "\nEnter time-> ";
	cin >> first->time;
	first->next = NULL;
	system("pause");
}

void MyList::output_list()
{
	system("cls");
	cout << "+-----------------------------------------------------------------------------+\n";
	cout << "|   Number   |     Type   |      Weight    |     Price     |       Time       |\n";
	cout << "+-----------------------------------------------------------------------------+\n";
	list = first;
	while (list)
	{
		printf("|   %7d  |   %8s  |   %10d  |  %10d  | %17d |\n", list->number, list->type, list->weight, list->price, list->time);
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
		cout << "\nEnter type->";
		cin >> list->type;
		cout << "\nEnter weight->";
		cin >> list->weight;
		cout << "\nEnter price-> ";
		cin >> list->price;
		cout << "\nEnter time-> ";
		cin >> list->time;
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
		cout << "|   Number   |     Type   |      Weight    |     Price     |       Time       |\n";
		cout << "+-----------------------------------------------------------------------------+\n";
		printf("|   %7d  |   %8s  |   %10d  |  %10d  | %17d |\n", list->number, list->type, list->weight, list->price, list->time);
		cout << "+-----------------------------------------------------------------------------+\n";
		cout << "The item is removed.\n";
		delete list;
		_getch();
	}
}