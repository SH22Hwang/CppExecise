 //q04_1.cpp fruitsalesim1의 정보은닉


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

    cout << "과일 판매자의 현황: " << endl;
    seller.showsalesresult();
    cout << "과일 구매자의 현황: " << endl;
    buyer.showbuyresult();

    return 0;
}
