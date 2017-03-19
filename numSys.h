#ifndef NUMSYS_H
#define NUMSYS_H
#include <string>
using namespace std;
#include "intco1.h"
#include "calculate.h"

class numSys:public intco1, public calculate
{
    public:
        string s;
        numSys();
        numSys(string);
        numSys(int);
        ~numSys();
        void input();
        int output();


};

#endif // NUMSYS_H
