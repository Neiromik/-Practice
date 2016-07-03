#include "Queue.h"

MyQueue Queue_object;

void input();
void output();
void enqueue_main();
void dequeue_main();
void output_main();

int k=1;

int main()
{
	do
	{
		system("cls");
		cout << "\n\t\t TERMINAL ORDER PIZZA\n";
		cout << "\n\t F1 Add order (Enqueue)\n";
		cout << "\n\t F2 To fulfill the order (Dequeue) \n";
		cout << "\n\t F3 Show all orders (Output Queue)\n";
		cout << "\n\t F4 Exit\n";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n ->";
		int m;
		m = _getch();
		switch (m)
		{
		case 59: enqueue_main(); break;
		case 60: dequeue_main(); break;
		case 61: output_main(); break;
		case 62:   break;
		}
		if (m == 63) break;
	} while (1);
	return 0;
}

void input()
{
	system("cls");
	element *list;
	list = new element;
	list->number = k;
	cout << "\nEnter type of pizza->";
	cin >> list->type;
	cout << "\nEnter weight of pizza->";
	cin >> list->weight;
	cout << "\nEnter the price of a pizza-> ";
	cin >> list->price;
	cout << "\nEnter Delivery time-> ";
	cin >> list->time;
	if (Queue_object.enqueue(list)) cout << "ERROR!";
	else cout << "\n\nElement successfully added\n\nYou wish to continue? Yes-1, No-0\n";
}

void output()
{
	cout << "+-----------------------------------------------------------------------------+\n";
	cout << "|   Number   |     Type   |      Weight    |     Price     |       Time       |\n";
	cout << "+-----------------------------------------------------------------------------+\n";
}

void enqueue_main()
{
	input();
	bool flag;
	cin >> flag;
	while (flag)
	{
		k++;
		input();
		cin >> flag;
	}
}

void dequeue_main()
{
	system("cls");
	element *list;
	list = Queue_object.dequeue();
	if (list != NULL)
	{
		output();
		printf("|   %7d  |   %8s  |   %10d  |  %10d  | %17d |\n", list->number, list->type, list->weight, list->price, list->time);
		cout << "+-----------------------------------------------------------------------------+\n";
		cout << "\nThe item is removed.\n";
		delete list;
	}
	else cout << "list";
	system("pause");
}

void output_main()
{
	system("cls");
	int kol = 1;
	element *list;
	output();
	while (kol <= Queue_object.size_list())
	{
		list = Queue_object.see_all(kol);
		printf("|   %7d  |   %8s  |   %10d  |  %10d  | %17d |\n", list->number, list->type, list->weight, list->price, list->time);
		cout << "+-----------------------------------------------------------------------------+\n";
		kol++;
	}
	system("pause");
}
