#include "list.h"

using namespace std;

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



void create_list()
{
	system("cls");
	first = new element;
	(*first).id = n;
	printf("\nВведите Имя->");
	cin >> first->name;
	printf("\nВведите Фамилию->");
	cin >> first->fam;
	printf("\nВведите Возраст-> ");
	cin >> first->age;
	printf("\nВведите Пол-> ");
	cin >> first->gender;
	first->next = NULL;

	last = first;
	system("cls");
	int flag = 1;
	while (flag)
	{
		printf("\nЖелаете продолжить? 1 - Да, 0 - Нет\t");
		cin >> flag;
		system("cls");
		if (flag)
		{
			n++;
			list = new element;
			(*first).id = n;
			printf("\nВведите Имя->");
			cin >> list->name;
			printf("\nВведите Фамилию->");
			cin >> list->fam;
			printf("\nВведите Возраст-> ");
			cin >> list->age;
			printf("\nВведите Пол-> ");
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


void output_list()
{

	system("cls");
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|     ID    |      Модель   |      Цена    |    Название     |       Страна   |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	list = first;	//Присвоение текущему указателю
					//адреса начала списка
	while (list)			//Цикл для вывода данных списка
	{
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		list = list->next;		//Присвоение текущему указателю адреса следующей переменной списка
		printf("+-----------------------------------------------------------------------------+\n");

	}
	_getch();
	system("cls");

}

void add()
{
	system("cls");
	n++;
	printf("ДОБАВЛЕНИЕ ЭЛЕМЕНТА В СПИСОК");

	{
		last = first;
		while (last->next) last = last->next;
		list = new element;
		(*first).id = n;
		printf("\nВведите Имя->");
		cin >> list->name;
		printf("\nВведите Фамилию->");
		cin >> list->fam;
		printf("\nВведите Возраст-> ");
		cin >> list->age;
		printf("\nВведите Пол-> ");
		cin >> list->gender;
		list->next = NULL;
		last->next = list;
	}
}


void del()
{
	if (first != NULL) //Если first не равен NULL, то истина.
	{
		list = first;
		first = first->next;
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		delete list;
		printf("Элемент успешно удален.\n");
	}
}