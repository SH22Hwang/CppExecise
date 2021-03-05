#include "Banking.h"
#include <cstring>

#define ACCOUNT_LENTH 999

Account* accArr[ACCOUNT_LENTH];
int accNum = 0;

int Account::GetId() {
	return accId;
}
char* Account::GetName() {
	return cusName;
}

int Account::GetBalance() {
	return balance;
}

void Account::DepositAcc(int money) {
	balance += money;
}

void Account::WithdrawalAcc(int money) {
	balance -= money;
}

void ShowMenu() {
	cout << "-----Menu-----\n"
		<< "1. ���°���\n"
		<< "2. �Ա�\n"
		<< "3. ���\n"
		<< "4. ��ü �� ��ȸ"
		<< endl;
}

void OpenAccount() {
	int id = 0;
	char name[20];
	int balance;

	cout << "[���� ����]\n";
	cout << "id: ";
	cin >> id;

	cout << "�̸�: ";
	cin >> name;

	cout << "�Աݾ�: ";
	cin >> balance;

	accArr[accNum++] = new Account(id, balance, name);
}

void Deposit() {
	int id, money;
	cout << "[�Ա�]\n";
	cout << "id: ";
	cin >> id;
	cout << "�Ա��� �ݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetId() == id) { // �������ε�
			accArr[i]->DepositAcc(money);
			cout << "�Ա� �Ϸ�" << endl;
			return;
		}
	}
	cout << "���� ID" << endl;
}

void Withdrawal() {
	int id, money;
	cout << "[���]\n";
	cout << "id: ";
	cin >> id;
	cout << "����� �ݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetId() == id) { // �������ε�
			accArr[i]->WithdrawalAcc(money);
			cout << "��� �Ϸ�" << endl;
			return;
		}
	}
	cout << "���� ID" << endl;
}

void ShowAllAcc() {
	cout << "[��ü �� ��ȸ]\n";
	for (int i = 0; i < accNum; i++) {
		cout
			<< "����� id: " << accArr[i]->GetId()
			<< "\n����� �̸�: " << accArr[i]->GetName()
			<< "\n�ܾ�: " << accArr[i]->GetBalance()
			<< endl << endl;
	}
}