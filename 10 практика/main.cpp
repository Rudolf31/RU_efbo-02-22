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
	string a = "������";
	string b = "������";
	string c = "������";

	int fr_win, sc_win, th_win;
	cout << "����� ������� ����?" << " 2" << endl;
	fr_win = 2;
	cout << "����� ������� ����?" << " 3" << endl;
	sc_win = 3;
	cout << "����� ������� ����?" << " 1" << endl;
	th_win = 1;
	cout << "���� ����� " << a << " ";
	Swap(a, b);
	cout << "�� ������� " << a << " " << endl;
	cout << "���� ����� " << c << " ";
	Swap(b, a);
	cout << "�� ������� " << c << " " << endl;
	cout << "���� ����� " << b << " ";
	Swap(c, b);
	cout << "�� ������� " << a << " ";
	return 0;
}