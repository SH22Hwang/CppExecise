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
	// å ����
	Account(int ID, int money, char* name) : accId(ID), balance(money) { // �̰� ���� ��������? ����Ʈ�ε�
																		 // �����ڴ�.
		cusName = new char[strlen(name) + 1]; // �����Ҵ�
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