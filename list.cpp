#include "list.h"



struct element
{
	int id;
	char name[20];
	char  fam[20];
	int age;
	char gender[20];
	element *next;

};
element *first, *last, *list;
int n;

void MyList:: create_list()
{
	system("cls");
	first = new element;
	(*first).id = n;
	printf("\nEnter name->");
	cin >> first->name;
	printf("\nEnter fam->");
	cin >> first->fam;
	printf("\nEnter age-> ");
	cin >> first->age;
	printf("\nEnter gender-> ");
	cin >> first->gender;
	first->next = NULL;

	last = first;
	system("cls");
	int flag = 1;
	while (flag)
	{
		printf("\nWould you like to continue? 1 - Yes, 0 - No\t");
		cin >> flag;
		system("cls");
		if (flag)
		{
			n++;
			list = new element;
			(*first).id = n;
			printf("\nEnter name->");
			cin >> list->name;
			printf("\nEnter fam->");
			cin >> list->fam;
			printf("\nEnter age-> ");
			cin >> list->age;
			printf("\nEnter gender-> ");
			cin >> list->gender;
			list->next = NULL;

			last->next = list;
			last = list;
			system("cls");
		}
		system("pause");
		system("cls");

	}
}


void MyList:: output_list()
{

	system("cls");
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|     ID    |      Name   |      Fam      |     Age      |       Gender       |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	list = first;	
					//адреса начала списка
	while (list)			//÷икл дл€ вывода данных списка
	{
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		list = list->next;		//ѕрисвоение текущему указателю адреса следующей переменной списка
		printf("+-----------------------------------------------------------------------------+\n");

	}
	_getch();
	system("cls");

}

void MyList:: add()
{
	system("cls");
	n++;
	{
		last = first;
		while (last->next) last = last->next;
		list = new element;
		(*first).id = n;
		printf("\nEnter name->");
		cin >> list->name;
		printf("\nEnter fam->");
		cin >> list->fam;
		printf("\nEnter age-> ");
		cin >> list->age;
		printf("\nEnter gender-> ");
		cin >> list->gender;
		list->next = NULL;
		last->next = list;
	}
}


void MyList:: del()
{
	if (first != NULL) //≈сли first не равен NULL, то истина.
	{
		list = first;
		first = first->next;
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		delete list;
	}
}