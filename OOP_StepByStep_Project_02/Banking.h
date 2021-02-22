#pragma once

#include <iostream>
using namespace std;

class BankingSystem {
private:
	int id;
	char name[20];
	int money;
public:
	void Init();
	void ShowMenu();
	void OpenAcc(int newId, char newName[], int newMoney);
	void DepositAcc();
	void WithdrawalAcc();
	void ShowAllAcc();

};