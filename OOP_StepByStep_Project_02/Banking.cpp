#include "Banking.h"
#include <cstring>

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

void BankingSystem::OpenAcc(int newId, char newName[], int newMoney) {

}
