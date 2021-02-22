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
		<< "1. 계좌개설\n"
		<< "2. 입급\n"
		<< "3. 출금\n"
		<< "4. 전체 고객 조회"
		<< endl;
}

void BankingSystem::OpenAcc() {
	int id = 0;
	char name[20];
	int money;

	cout << "[계좌 개설]\n";
	cout << "id: ";
	cin >> id;
	acc[id].id = id;

	cout << "이름: ";
	cin >> name;
	strcpy_s(acc[id].name, name);

	cout << "입금액: ";
	cin >> money;
	acc[id].money = money;

	accNum++;
}

void BankingSystem::DepositAcc() {
	int id, money;
	cout << "[입금]\n";
	cout << "id: ";
	cin >> id;
	cout << "입금할 금액: ";
	cin >> money;

	acc[id].money += money;
}

void BankingSystem::WithdrawalAcc() {
	int id, money;
	cout << "[출금]\n";
	cout << "id: ";
	cin >> id;
	cout << "출금할 금액: ";
	cin >> money;

	acc[id].money -= money;
}

void BankingSystem::ShowAllAcc() {
	cout << "[전체 고객 조회]\n";
	for (int i = 0; i < ACCOUNT_LENTH; i++) {
		if (acc[i].id > 0) {
			cout
				<< "사용자 id: " << acc[i].id
				<< "\n사용자 이름: " << acc[i].name
				<< "\n잔액: " << acc[i].money
				<< endl;
		}
	}
}