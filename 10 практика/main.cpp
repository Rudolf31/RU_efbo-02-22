#include "temp.h"
template <class haha, class hehe> void Swap(haha& x, hehe& y)
{
	haha z = x;
	x = y;
	y = z;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	string a = "Первый";
	string b = "Второй";
	string c = "Третий";

	int fr_win, sc_win, th_win;
	cout << "Каким приехал Коля?" << " 2" << endl;
	fr_win = 2;
	cout << "Каким приехал Дима?" << " 3" << endl;
	sc_win = 3;
	cout << "Каким приехал Толя?" << " 1" << endl;
	th_win = 1;
	cout << "Коля начал " << a << " ";
	Swap(a, b);
	cout << "Но приехал " << a << " " << endl;
	cout << "Толя начал " << c << " ";
	Swap(b, a);
	cout << "Но приехал " << c << " " << endl;
	cout << "Дима начал " << b << " ";
	Swap(c, b);
	cout << "Но приехал " << a << " ";
	return 0;
}