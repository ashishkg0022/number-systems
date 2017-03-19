#include "intco.h"

intco :: intco(){}
intco::intco(std ::string st)
{
 s1=st;
}

intco::~intco()
{
    //dtor
}
void intco::BinDec()
{
 num1 = std::stoi(s1, nullptr, 2);
}
void intco::HexDec()
{
std::string bin(s1);
num1 = std::stoi(bin, nullptr, 16);
}
void intco::OctDec()
{
std::string bin(s1);
num1 = std::stoi(bin, nullptr, 8);
}
