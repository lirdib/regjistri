// regjistri.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "lende.h"
#include "student.h"
#include<stdlib.h>
#include "regjistri.h"
using namespace std;

int main()
{

	/*student test;

	StudentList* list = new StudentList();
	list->add(test);*/

	//list->print();


	StudentList* list = new StudentList();

	//Cikli per menu
	string tempEmri, tempMbiemri, tempDega;
	int i = -1; int id;
	while (i != 0) {
		system("CLS");

		if (i == 1) {
			cout << endl << "Emri : ";
			cin >> tempEmri;
			cout << endl << "Mbiemri : ";
			cin >> tempMbiemri;
			cout << endl << "Dega : ";
			cin >> tempDega;
			cout << "Jep ID e studentit : ";
			cin >> id;

			student test(tempEmri,tempMbiemri, 2018,tempDega, id);
			list->add(test);
		}

		else if (i == 2) {
			cout << "Jep ID e studentit : ";
			cin >> id;
			NodeStudent *s = list->search(id);
			if(s) 


			cout << "Emri : " << s->data.getEmer() << endl << "Mbiemri : " << s->data.getMbiemer();
			else
				cout <<"studenti nuk u gjet";
		}

		if (i == 3) {
			cout << "Jep ID e studentit : ";
			cin >> id;
			NodeStudent *s = list->search(id);
			if(s)
			s->data.modifiko(id);
		}

		if (i == 4) {
			cout << "Jep ID e studentit : ";
			cin >> id;
			list->deleteNode(id);
		}

		if (i == 5) {
			list->print();
		}

		if (i == 6) {
			
		}

		if (i == 7) {
			
		}

		if (i == 8) {
			
		}

		if (i == 9) {
			
		}

		//system("CLS");
		cout << endl << "\t\t\t MENU" << endl << "1. Shto Student" << endl << "2. Statistika Student" << endl << "3. Modifiko Student" << endl << "4. Fshi Student" << endl << "5. Printo Studentet" << endl
			<< "6. Shto Lende" << endl << "7. Fshi Lende" << endl << "8. Statistika per Lende" << endl << "9. Shto nota" << endl << "0. Dil" << endl;
		cin >> i;
		//getchar();
	}

	getchar();
    return 0;
}

