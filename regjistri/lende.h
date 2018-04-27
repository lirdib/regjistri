#pragma once

#include <string>
using namespace std;

class lende {

private:
	int kod;
	string emer, profesor;
	int kredite;
public:
	lende(int kod, string emer, string profesor, int kredite);
	void modifiko(int kod, string emer, string profesor, int kredite);
	void statistika(int kodi);

};