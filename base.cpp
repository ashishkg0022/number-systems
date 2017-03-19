#include <iostream>
#include "base.h"

using namespace  std;

base::base()
{

}

base::~base()
{

}

void base::startMenu()
{ int c;
	enum choice
{
	calc =1 , hist  , eras , exit
};
 do
 {
  cout<< "enter \n 1 for calculations \n 2 for history of operations \n 3 to erase history \n 4 for exit(IF YOU EXIT HISTORY WILL BE LOST) \n";
  cin >> c;
  switch(c)
  {
  	case calc:
  	calculations();
  	break;
  	case hist :
  	history();
  	break;
  	case eras:
  	 eraseHist();
  	case exit:
  	break;
  	default :
  	cout << "\n invalid choice \n";
  }
 }while(c !=4);

}
void base::calculations()
{  int c;
    count++;
    vec.resize(count);
  enum choice { in=1 , add , sub, mul , div , back };
  do
  {
  	cout << "\n enter \n 1---- interconversion \n 2---- addition \n 3---- subtraction \n 4---- product \n 5----division \n 6---- back \n";
    cin >> c;
    switch (c)
    {
    	case in : intcv();
            vec[count-1].op="conversion to";
    		break;
    	case add : addt();
             vec[count-1].op="added to";
    		break;
    	case sub : subt();
             vec[count-1].op="subtracted by";
    		break;
    	case mul : prod();
             vec[count-1].op="multiplied by";
    		break;
    	case div : divide();
             vec[count-1].op="divided by";
    		break;
    	case back :
    		break;
    	default :
    		cout << "\nwrong choice \n";
    }
  }while(c!=6);

}
void base::history()
{
int ch;
cout << "total number of history recorded == \n"<<count<<endl;
if(count >0){
cout << "which history you want to review enter the number \n";
cin >> ch ;
cout << vec[ch-1].op1 <<  vec[ch-1].op  <<  vec[ch-1].op2 <<" == "<< vec[ch-1].res <<endl;
}
}
void base :: eraseHist()
{
int ch;
cout << "total number of history recorded == \n"<<count<<endl;
if(count >0){
for(int i=0;i< count ;i++)
cout << vec[i].op1 <<  vec[i].op  <<  vec[i].op2 <<" == "<< vec[i].res <<endl;
cout << "which number of history you want to erase ??\n";
cin>> ch;
vec.erase(vec.begin()+(ch-1));
count--;
cout << "HISTORY REMOVED \n";
}
}
void base ::intcv()
{ numSys a;
int x;
enum choice {bin =1 ,oct , hex , dec};
int c;
a.input();
vec[count-1].op1=to_string(a.num1);
x=a.output();
vec[count-1].op2="converted to";
if(x==1)
vec[count-1].res="binary";
if(x==2)
vec[count-1].res="octadecimal";
if(x==3)
vec[count-1].res="hexadecimal";
if(x==4)
vec[count-1].res="decimal";


}


void base::addt()
{
 numSys a,b;
 a.input();
 vec[count-1].op1=to_string(a.num1);
 b.input();
 vec[count-1].op2=to_string(b.num1);
 calculate c1;
 c1=a+b;
 numSys c(c1.num1);
 vec[count-1].res=to_string(c.num1);
 c.output();

}
void base::subt()
{
numSys a,b;
 a.input();
  vec[count-1].op1=to_string(a.num1);
 b.input();
 vec[count-1].op2=to_string(b.num1);
 calculate c1;
 c1=a-b;
 numSys c(c1.num1);
 vec[count-1].res=to_string(c.num1);
 c.output();
}
void base::prod()
{
numSys a,b;
 a.input();
  vec[count-1].op1=to_string(a.num1);
 b.input();
 vec[count-1].op2=to_string(b.num1);
 calculate c1;
 c1=a*b;
 numSys c(c1.num1);
 vec[count-1].res=to_string(c.num1);
 c.output();
}
void base::divide()
{
numSys a,b;
 a.input();
  vec[count-1].op1=to_string(a.num1);
 b.input();
  vec[count-1].op2=to_string(b.num1);
 calculate c1;
 c1=a/b;
 numSys c(c1.num1);
 vec[count-1].res=to_string(c.num1);
 c.output();
}






