#include "Queue.h"
MyQueue queue_object;
int main()
{
	system("cls");
	do
	{
		cout << "\n\t\t  Menu\n";
		cout << "\n\t F1 Enqueue\n";
		cout << "\n\t F2 Dequeue\n";
		cout << "\n\t F3 Output Queue\n";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ->";
		int m;
		m = _getch();
		switch (m)
		{
		case 59: queue_object.enqueue(); break;
		case 60: queue_object.dequeue(); break;
		case 61: queue_object.output_queue(); break;
		case 62:   break;
		}
		if (m == 63) break;
	} while (1);
	return 0;
}