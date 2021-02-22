// FruitSaleSim1.cpp Massage Passing
//

#include <iostream>
#include "FruitSale1.h"
using namespace std;

bool FruitSeller::InitMembers(int price, int num, int money) {
    if (price <= 0 || num <= 0 || money <= 0) {
        cout << "범위에서 벗어난 값 전달!" << endl;
        return false;
    }

    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
    return true;
}
int FruitSeller::GetPrice() {
    return APPLE_PRICE;
}

int FruitSeller::GetAplles() {
    return numOfApples;
}

int FruitSeller::GetMoney() {
    return myMoney;
}

bool SetApples(int num) {
    if()
}

bool SetMoney(int money) {

}



int FruitSeller::SaleApples(int money) {
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSalesResult() {
    cout << "남은 사과: " << numOfApples << endl;
    cout << "판매 수익: " << myMoney << endl << endl;
}


bool FruitBuyer::InitMembers(int money) {
    myMoney = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money) {
    numOfApples += seller.SaleApples(money); // massage passing
    myMoney = money;
}

void FruitBuyer::ShowBuyResult() {
    cout << "현재 잔액: " << myMoney << endl;
    cout << "사과 개수: " << numOfApples << endl << endl;
}