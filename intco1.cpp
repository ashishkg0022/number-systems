#include "intco1.h"
#include <iostream>
#include <iomanip>
# include <bitset>
intco1::intco1(int n )
{
    //ctor
}
intco1 :: intco1(){}

intco1::~intco1()
{
    //dtor
}
void intco1::decBin()
{

  std::cout << std::bitset<8>(num1)<< std::endl;
}
void intco1::decHex()
{
  std::cout << std::setbase(16);
  std::cout << num1 <<std::endl;
}
void intco1::decOct()
{
  std::cout << std::setbase(8);
  std::cout << num1<< std::endl;
}
