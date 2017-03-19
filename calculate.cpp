#include <iostream>
#include "calculate.h"

using namespace  std;
calculate ::calculate()
{
}

calculate :: calculate(int a)
{
  num1=a;
}
calculate :: ~calculate()
{

}

calculate calculate::operator+(calculate b)
{
	calculate res;
	res.num1=num1+b.num1;
	return (res);
}
calculate calculate::operator-(calculate b)
{
	calculate res;
	res.num1=num1-b.num1;
	return (res);
}
calculate calculate::operator*(calculate b)
{
	calculate res;
	res.num1=num1*b.num1;
	return (res);
}
calculate calculate::operator/(calculate b)
{
	calculate res;
	res.num1=num1/b.num1;
	return (res);
}
