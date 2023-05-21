#include <iostream>
#include "zero_exceptions.h"

int main()
{
	double x, y;
	std::cin >> x >> y;
	Divisor::func_Divisor(x, y);
}