#ifndef CALCULATE_H
#define CALCULATE_H
#include "intco.h"
class calculate : public virtual intco
{
	public :
		calculate();
		calculate(int);
		~calculate();
		calculate operator+(calculate);
		calculate operator-(calculate);
		calculate operator*(calculate);
		calculate operator/(calculate);


};
#endif
