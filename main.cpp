#include "list.h"
#include "Queue.h"


int main()
{
	setlocale(LC_ALL, "RUS");
	system("cls");
	do
	{
		printf("\n\t\t  Меню\n");
		printf("\n\t F1 Создание очереди \n");
		printf("\n\t F2 Добавление данных\n");
		printf("\n\t F3 Вывод элемента\n");
		printf("\n\t F4 Вывод всей очереди\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n ->");
		int m;
		m = _getch();
		switch (m)	//оператор выбора
		{
		case 59: create_queue(); break;	 //вызов функции ввода данных
		case 60: enqueue(); break; //вызов функции вывода данных
		case 61: dequeue(); break;
		case 62: output_queue(); break;  //вызов функции удаления элемента списка 
		case 63:   break;
		}
		if (m == 64) break;		//выход из цикла при вводе номера пункта=5
	} while (1);
	return 0;
}