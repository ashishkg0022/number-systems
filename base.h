#ifndef BASE_H
#define BASE_H
#include "intco1.h"
#include "numSys.h"
#include <vector>
#include <string>
#include <algorithm>
class base
{

	public :
	base();
	~base();
    struct data {
	string op1;
	string op2;
	string op;
	string res;
};
vector<data>vec;
int count=0;
void eraseHist();
	void startMenu();
	void calculations();
	void history();
	void intcv();
	void addt();
	void subt();
	void prod();
	void divide();

};

#endif
