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
	printf("\n������� ���->");
	cin >> first->name;
	printf("\n������� �������->");
	cin >> first->fam;
	printf("\n������� �������-> ");
	cin >> first->age;
	printf("\n������� ���-> ");
	cin >> first->gender;
	first->next = NULL;

	last = first;
	system("cls");
	int flag = 1;
	while (flag)
	{
		printf("\n������� ����������? 1 - ��, 0 - ���\t");
		cin >> flag;
		system("cls");
		if (flag)
		{
			n++;
			list = new element;
			(*first).id = n;
			printf("\n������� ���->");
			cin >> list->name;
			printf("\n������� �������->");
			cin >> list->fam;
			printf("\n������� �������-> ");
			cin >> list->age;
			printf("\n������� ���-> ");
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
	printf("|     ID    |      ������   |      ����    |    ��������     |       ������   |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	list = first;	//���������� �������� ���������
					//������ ������ ������
	while (list)			//���� ��� ������ ������ ������
	{
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		list = list->next;		//���������� �������� ��������� ������ ��������� ���������� ������
		printf("+-----------------------------------------------------------------------------+\n");

	}
	_getch();
	system("cls");

}

void add()
{
	system("cls");
	n++;
	printf("���������� �������� � ������");

	{
		last = first;
		while (last->next) last = last->next;
		list = new element;
		(*first).id = n;
		printf("\n������� ���->");
		cin >> list->name;
		printf("\n������� �������->");
		cin >> list->fam;
		printf("\n������� �������-> ");
		cin >> list->age;
		printf("\n������� ���-> ");
		cin >> list->gender;
		list->next = NULL;
		last->next = list;
	}
}


void del()
{
	if (first != NULL) //���� first �� ����� NULL, �� ������.
	{
		list = first;
		first = first->next;
		printf("|  %8d |   %10s  |   %9s  |  %13d  | %14s |\n", list->id, list->name, list->fam, list->age, list->gender);
		delete list;
		printf("������� ������� ������.\n");
	}
}