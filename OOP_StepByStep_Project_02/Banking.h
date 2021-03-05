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
	// 책 참고
	Account(int ID, int money, char* name) : accId(ID), balance(money) { // 이게 무슨 문법이지? 디폴트인듯
																		 // 생성자다.
		cusName = new char[strlen(name) + 1]; // 동적할당
	}

	int GetId();
	char* GetName();
	int GetBalance();
	void DepositAcc(int money);
	void WithdrawalAcc(int money);

	~Account() {
		delete[] cusName;
		cout << "delete memory!" << endl;
	}
};