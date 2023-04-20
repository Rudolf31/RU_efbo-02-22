#pragma once
#include <iostream>
#include <string>

class Class {
private:
	double a;
	double b;
public:
	Class(double A, double B);
	void Out();
	Class operator=(Class& T);
};