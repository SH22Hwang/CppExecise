#include "Banking.h"
#include <cstring>

#define ACCOUNT_LENTH 999

BankingSystem acc[ACCOUNT_LENTH];
int accNum = 0;

void BankingSystem::Init() {
	id = -1;
	money = -1;
}

void BankingSystem::ShowMenu() {
	cout << "-----Menu-----\n"
		<< "1. ���°���\n"
		<< "2. �Ա�\n"
		<< "3. ���\n"
		<< "4. ��ü �� ��ȸ"
		<< endl;
}

void BankingSystem::OpenAcc() {
	int id = 0;
	char name[20];
	int money;

	cout << "[���� ����]\n";
	cout << "id: ";
	cin >> id;
	acc[id].id = id;

	cout << "�̸�: ";
	cin >> name;
	strcpy_s(acc[id].name, name);

	cout << "�Աݾ�: ";
	cin >> money;
	acc[id].money = money;

	accNum++;
}

void BankingSystem::DepositAcc() {
	int id, money;
	cout << "[�Ա�]\n";
	cout << "id: ";
	cin >> id;
	cout << "�Ա��� �ݾ�: ";
	cin >> money;

	acc[id].money += money;
}

void BankingSystem::WithdrawalAcc() {
	int id, money;
	cout << "[���]\n";
	cout << "id: ";
	cin >> id;
	cout << "����� �ݾ�: ";
	cin >> money;

	acc[id].money -= money;
}

void BankingSystem::ShowAllAcc() {
	cout << "[��ü �� ��ȸ]\n";
	for (int i = 0; i < ACCOUNT_LENTH; i++) {
		if (acc[i].id > 0) {
			cout
				<< "����� id: " << acc[i].id
				<< "\n����� �̸�: " << acc[i].name
				<< "\n�ܾ�: " << acc[i].money
				<< endl;
		}
	}
}