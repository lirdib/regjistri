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
	string getEmer() {
		return emer;
	}
	string getMbiemer() {
		return mbiemer;
	}
	//Printon emrin. Per testim
	string printo() {
		return emer;

	}

	int getID() {
		return id;
	}

	//mbaro funksionet. Notat do ruhen ne nje liste te re. Do krijosh te gjithe klasen dhe implementimin e listes. Ka kater fusha :
	//Nota, id_student, id_lendes, data
	//dhe do beje lidhjen mes studenteve dhe lendeve.
	student(string newEmer, string newMbiemer, int newViti_fillimit, string newDega, int newId) {
		id = newId;
		emer = newEmer; mbiemer = newMbiemer; viti_fillimit = newViti_fillimit; dega = newDega;
	}
	void modifiko(int ID) {
		string tempEmri, tempMbiemri;

		cout << "Emri : (" << emer << ") ";
		cin >> tempEmri;

		cout << "Mbiemri : (" << mbiemer << ") ";
		cin >> tempMbiemri;

		emer = tempEmri; mbiemer = tempMbiemri;
		//cout << "Emri : (" << emer << ") ";
		return;
	}
	void statistika(int ID) {
		//gjej studentin ne liste
	}
};




class NodeStudent

{

public:

	NodeStudent * next;

	student data;

};


class StudentList

{

public:

	int length;

	NodeStudent * head;



	StudentList();

	~StudentList();

	void add(student data);

	void print();
	void deleteNode(int ID);

	NodeStudent* search(int ID);

	void modifiko(int ID) {
		//gjej studentin ne liste
		NodeStudent *s;
		s = search(ID);
		if (s == NULL) return;
		else {
			//bej getter dhe setter per modifikim
		}
	}

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

	while (head) { // while (head != NULL)

		cout << i << " : " << head->data.printo() << endl;

		head = head->next;

		i++;

	}

}

NodeStudent* StudentList::search(int ID)
{
	int pos = 0;
	bool flag = false;
	if (head == NULL)
	{
		cout << "Lista eshte bosh" << endl;
		return nullptr;
	}

	NodeStudent *s;
	s = head;
	while (s)
	{
		pos++;
		if (s->data.getID() == ID)
		{
			flag = true;
			//cout << "Elementi " << ID << " u gjet ne pozicionin " << pos << endl;
			return s;
		}
		s = s->next;
	}
	if (!flag) {
		cout << "Elementi " << ID << " nuk u gjet ne liste" << endl;
		return nullptr;
	}
}

void StudentList::deleteNode(int ID) {

	if (head->data.getID() == ID)
		head = head->next;
	NodeStudent *s;
	s = head; 
	while (s->next) {
		if (s->next->data.getID() == ID) {
			s->next = s->next->next;
		}

	}

}