#pragma once

#include <iostream>
using namespace std;

void ShowMenu();
void OpenAccount();
void Deposit();
void Withdrawal();
void ShowAllAcc();

class Account {
private:
	int accId;
	char* cusName;
	int balance;

public:
	Account(int ID, int money, char* name)
		: accId(ID), balance(money)
	{
		cusName = new char[strlen(name) + 1];
	}

	Account(const Account& copy) // 복사 생성자
		: accId(copy.accId), balance(copy.balance)
	{
		cusName = new char[strlen(copy.cusName) + 1];
		strcpy(cusName, copy.cusName);
	}

	int GetId() const;
	char* GetName() const;
	int GetBalance() const;
	void DepositAcc(int money);
	void WithdrawalAcc(int money);

	~Account() {
		delete[] cusName;
		cout << "delete memory!" << endl;
	}
};