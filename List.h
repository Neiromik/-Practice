#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

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
	int size();
	int add(element *new_item);
	element* item(int kol);
	element* output_list();
};
