 //q04_1.cpp fruitsalesim1�� ��������


#include <iostream>
#include "fruitsale1.h"
using namespace std;

int main(void)
{
    fruitseller seller;
    seller.initmembers(1000, 20, 0);
    fruitbuyer buyer;
    buyer.initmembers(5000);
    buyer.buyapples(seller, 2000); // massage passing

    cout << "���� �Ǹ����� ��Ȳ: " << endl;
    seller.showsalesresult();
    cout << "���� �������� ��Ȳ: " << endl;
    buyer.showbuyresult();

    return 0;
}
