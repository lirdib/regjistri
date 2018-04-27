#pragma once
#include "student.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


/*
* Deklarimi i Nyjes
*/
struct node
{
	student info;
	struct node *next;
}*start;


class listeStudent {
public: 
public:
	node * create_node(student);
	void insert_begin();
	listeStudent()
	{
		start = NULL;
	}
};


node *listeStudent::create_node(student t)
{
	struct node *temp, *s;
	temp = new(struct node);
	if (temp == NULL)
	{
		cout << "Memorja nuk u alokua " << endl;
		return 0;
	}
	else
	{
		temp->info = t ;
		temp->next = NULL;
		return temp;
	}
}

/*
* Inserting element in beginning
*/
void listeStudent::insert_begin()
{
	int value;
	cout << "Jep vleren qe do shtohet: ";
	cin >> value;
	struct node *temp, *p;
	temp = create_node(value);
	if (start == NULL)
	{
		start = temp;
		start->next = NULL;
	}
	else
	{
		p = start;
		start = temp;
		start->next = p;
	}
	cout << "Elementi u shtua ne fillim" << endl;
}


