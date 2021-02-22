#include <iostream>

#define ACCOUNT_LENTH 999

typedef struct _customer {
	int id = -1;
	char name[20];
	int money = -1;
}customer;

customer acc[ACCOUNT_LENTH];
int accNum = 0;

void menu() {
	std::cout << "---Menu---\n"
		<< "1. 계좌개설\n"
		<< "2. 입급\n"
		<< "3. 출금\n"
		<< "4. 전체 고객 조회"
		<< std::endl;
}
void open() {
	int id = 0;
	char name[20];
	int money;

	std::cout << "[계좌 개설]\n";
	std::cout << "id: ";
	std::cin >> id;
	acc[id].id = id;

	std::cout << "이름: ";
	std::cin >> name;
	strcpy_s(acc[id].name, name);

	std::cout << "입금액: ";
	std::cin >> money;
	acc[id].money = money;
	
	accNum++;
}

void deposit() {
	int id, money;
	std::cout << "[입금]\n";
	std::cout << "id: ";
	std::cin >> id;
	std::cout << "입금할 금액: ";
	std::cin >> money;
	
	acc[id].money += money;

}

void withdrawal() {
	int id, money;
	std::cout << "[출금]\n";
	std::cout << "id: ";
	std::cin >> id;
	std::cout << "출금할 금액: ";
	std::cin >> money;

	acc[id].money -= money;

}

void checkAll() {
	std::cout << "[전체 고객 조회]\n";
	for (int i = 0; i < ACCOUNT_LENTH; i++) {
		if (acc[i].id >= 0) {
			std::cout
				<< "사용자 id: " << acc[i].id
				<< "\n사용자 이름: " << acc[i].name
				<< "\n잔액: " << acc[i].money
				<< std::endl;
		}
	}
}


int main(void) {
	
	int choice;

	while (true) {

		menu();

		std::cout << "선택: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			open();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdrawal();
			break;
		case 4:
			checkAll();
			break;
		default:
			return 0;
		}
	}
}