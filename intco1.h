#ifndef INTCO1_H
#define INTCO1_H
#include<string>

#include"intco.h"
using namespace std;

class intco1 : public virtual intco
{
    public:
        intco1();
        intco1(int);
        ~intco1();
        void decBin();
        void decHex();
        void decOct();
};

#endif // INTCO1_H
