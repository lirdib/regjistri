#include "stdafx.h"
#include "student.h"

student::student(string emer, string mbiemer, int viti_fillimit, string dega)
{
	//mora te dhenat per cdo student por mungon id
	cout << "Vendsoni emrin:";
	cin >> emer;
	cout << "Vendsoni mbiemrin;";
	cin >> mbiemer;
	cout << "Vendsoni vitin e fillimit te shkolles";
	cin >> viti_fillimit;
	cout << "Vendosni emrin e deges per te cilen po studioni";
	cin >> dega;
}

void student::modifiko(int ID)
{
	
}
