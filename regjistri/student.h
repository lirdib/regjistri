#pragma once
#include<string>

#include <iostream>
#include <cstdlib>

using namespace std;
class student {

private:
	int id;
	string emer, mbiemer;
	int viti_fillimit;
	float mesatarja;
	string dega;
public:
	//Konstruktori default. Per testim. Nderto konstruktorin poshte dhe zevendesoje.
	student() {
		emer = "Sample Name";
	}

	//Printon emrin. Per testim
	string printo() {
		return emer;

	}

	//mbaro funksionet. Notat do ruhen ne nje liste te re. Do krijosh te gjithe klasen dhe implementimin e listes. Ka kater fusha :
	//Nota, id_student, id_lendes, data
	//dhe do beje lidhjen mes studenteve dhe lendeve.
	student(string emer, string mbiemer, int viti_fillimit, string dega);
	void modifiko(int ID);
	void statistika(int ID);
};




class NodeStudent

{

public:

	NodeStudent * next;

	student data;

};



using namespace std;



class StudentList

{

public:

	int length;

	NodeStudent * head;



	StudentList();

	~StudentList();

	void add(student data);

	void print();

};



StudentList::StudentList() {

	this->length = 0;

	this->head = NULL;

}



StudentList::~StudentList() {

	std::cout << "LIST DELETED";

}



void StudentList::add(student data) {

	NodeStudent* node = new NodeStudent();

	node->data = data;

	node->next = this->head;

	this->head = node;

	this->length++;

}



void StudentList::print() {

	NodeStudent* head = this->head;

	int i = 1;

	while (head) {

		cout << i << " : " << head->data.printo() << endl;

		head = head->next;

		i++;

	}

}
