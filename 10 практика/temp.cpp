#include "temp.h"
Class::Class(double A, double B)
{
	a = A;
	b = B;
}

Class Class::operator=(Class& T)
{
	a = T.a;
	b = T.b;
	return *this;
}
void Class::Out()
{
	std::cout << "(" << a << ";" << b << ")\n";
}