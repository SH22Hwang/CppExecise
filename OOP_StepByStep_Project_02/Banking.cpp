#include "Banking.h"
#include <cstring>

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

void BankingSystem::OpenAcc(int newId, char newName[], int newMoney) {

}
