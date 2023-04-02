#pragma once
#include <iostream>

class list
{
private:
	int n;
	int* nums;
public:
	list();
	list(int N, int* Nums);
	friend std::ostream& operator<<(std::ostream& stream, list& l);
};