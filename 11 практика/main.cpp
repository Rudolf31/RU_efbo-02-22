#include "number_management.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    control man(2, 0, 1, 0);
    int num, val;
reti:
    std::cout << "������� �����?" << std::endl;
    std::cin >> val;
    std::cout << "1 - ����. 2 - �����. 3 - ������. 4 - �����." << std::endl;
    std::cin >> num;
    if (num == 1) {
        man.forward(val);
        man.map();
        goto reti;
    }
    if (num == 2) {
        man.back(val);
        man.map();
        goto reti;
    }
    if (num == 3) {
        man.left(val);
        man.map();
        goto reti;
    }
    if (num == 4) {
        man.right(val);
        man.map();
        goto reti;
    }
}
