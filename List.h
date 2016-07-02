#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

struct element
{
	char name[20];
	char fam[20];
	char gender[20];
	int age;
	int number;
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
