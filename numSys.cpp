#include "numSys.h"

numSys::numSys(string s1)
{
   s=s1; //ctor
}
numSys::numSys(int a)
{
    num1=a;//ctor
}

numSys:: numSys(){}
numSys::~numSys()
{
    //dtor
}
void numSys::input()
{
enum choice {bin =1 ,oct , hex , dec};
 int c;
 cout << "\n which type of input you want to give ? \n 1-- binary\n 2--octadecimal \n 3-- hexadecimal \n 4-- decimal\n";
 cin>>c;
 switch (c)
{
case bin:
    cout << "enter the binary number \n";
    cin >> s;
    s1=s;
    BinDec();
    break;
case oct:
    cout << "enter the octa number \n";
    cin >> s;
    s1=s;
    OctDec();
    break;
case hex:
    cout << "enter the hexa number \n";
    cin >> s;
    s1=s;
    HexDec();
    break;
 case dec :
    cout << "enter the decimal number \n";
    cin >>num1;
    break;
 default:
    cout<<"wrong choice\n";
}

}
int numSys ::output()
{
enum choice {bin =1 ,oct , hex , dec};
 int c;
cout << "\n which type of output you want to give ? \n 1-- binary\n 2--octadecimal \n 3-- hexadecimal \n 4--decimal\n";
cin >> c;
switch (c)
{
case bin :
    decBin();
    break;
case oct :
    decOct();
    break;
case hex :
    decHex();
    break;
case dec :
    cout << num1 <<endl;
    break;
default :
    cout <<"\n wrong choice \n";
}
return c;
}
