#include "list.h"
#include "Queue.h"


int main()
{
	setlocale(LC_ALL, "RUS");
	system("cls");
	do
	{
		printf("\n\t\t  ����\n");
		printf("\n\t F1 �������� ������� \n");
		printf("\n\t F2 ���������� ������\n");
		printf("\n\t F3 ����� ��������\n");
		printf("\n\t F4 ����� ���� �������\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n ->");
		int m;
		m = _getch();
		switch (m)	//�������� ������
		{
		case 59: create_queue(); break;	 //����� ������� ����� ������
		case 60: enqueue(); break; //����� ������� ������ ������
		case 61: dequeue(); break;
		case 62: output_queue(); break;  //����� ������� �������� �������� ������ 
		case 63:   break;
		}
		if (m == 64) break;		//����� �� ����� ��� ����� ������ ������=5
	} while (1);
	return 0;
}