#include <iostream>
#include <conio.h>

using namespace std;

struct element
{
	char type[20];
	int price;
	int time;
	int number;
	int weight;
	element *next;
};

class MyList
{
	public:
	void first_element();
	void add();
	void del();
	void output_list();
	element *first, *last, *list;
	int n;
};
