#ifndef INTCO_H
#define INTCO_H
#include<string>
#include <iostream>
using namespace std;

class intco
{
    public:
        int num1;std ::string s1;
        intco();
        intco(std ::string);
        ~intco();
        void BinDec();
        void HexDec();
        void OctDec();

};

#endif // INTCO_H
