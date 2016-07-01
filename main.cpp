#include "list.h"
#include "queue.h"

MyQueue queue_object;
int main()
{
	system("cls");
	do
	{
		printf("\n\t\t  Menu\n");
		printf("\n\t F1 Create Queue \n");
		printf("\n\t F2 Enqueue\n");
		printf("\n\t F3 Dequeue\n");
		printf("\n\t F4 Output Queue\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n ->");
		int m;
		m = _getch();
		switch (m)	//оператор выбора
		{
		case 59: queue_object.create_queue(); break;	 //вызов функции ввода данных
		case 60: queue_object.enqueue(); break; //вызов функции вывода данных
		case 61: queue_object.dequeue(); break;
		case 62: queue_object.output_queue(); break;  //вызов функции удаления элемента списка 
		case 63:   break;
		}
		if (m == 64) break;		//выход из цикла при вводе номера пункта=5
	} while (1);
	return 0;
}