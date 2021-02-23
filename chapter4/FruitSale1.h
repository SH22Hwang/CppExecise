#pragma once
// FruitSaleSim1.cpp Massage Passing
//

#include <iostream>
using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    bool InitMembers(int price, int num, int money);
    int GetPrice() const;
    int GetAplles() const;
    int GetMoney() const;
    int SaleApples(int money);
    void ShowSalesResult();
};

class FruitBuyer {
    int myMoney;
    int numOfApples; // private

public:
    bool InitMembers(int money);
    int GetAplles() const;
    int GetMoney() const;
    bool BuyApples(FruitSeller& seller, int money);
    void ShowBuyResult();
};
