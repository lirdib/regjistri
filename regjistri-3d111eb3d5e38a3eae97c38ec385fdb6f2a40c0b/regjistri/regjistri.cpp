// regjistri.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "lende.h"
#include "student.h"
using namespace std;

int main()
{

	student test;

	StudentList* list = new StudentList();
	list->add(test);
	test.printo();

	list->print();
    return 0;
}

