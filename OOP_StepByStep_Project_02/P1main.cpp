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
		<< "1. ���°���\n"
		<< "2. �Ա�\n"
		<< "3. ���\n"
		<< "4. ��ü �� ��ȸ"
		<< std::endl;
}
void open() {
	int id = 0;
	char name[20];
	int money;

	std::cout << "[���� ����]\n";
	std::cout << "id: ";
	std::cin >> id;
	acc[id].id = id;

	std::cout << "�̸�: ";
	std::cin >> name;
	strcpy_s(acc[id].name, name);

	std::cout << "�Աݾ�: ";
	std::cin >> money;
	acc[id].money = money;
	
	accNum++;
}

void deposit() {
	int id, money;
	std::cout << "[�Ա�]\n";
	std::cout << "id: ";
	std::cin >> id;
	std::cout << "�Ա��� �ݾ�: ";
	std::cin >> money;
	
	acc[id].money += money;

}

void withdrawal() {
	int id, money;
	std::cout << "[���]\n";
	std::cout << "id: ";
	std::cin >> id;
	std::cout << "����� �ݾ�: ";
	std::cin >> money;

	acc[id].money -= money;

}

void checkAll() {
	std::cout << "[��ü �� ��ȸ]\n";
	for (int i = 0; i < ACCOUNT_LENTH; i++) {
		if (acc[i].id >= 0) {
			std::cout
				<< "����� id: " << acc[i].id
				<< "\n����� �̸�: " << acc[i].name
				<< "\n�ܾ�: " << acc[i].money
				<< std::endl;
		}
	}
}


int main(void) {
	
	int choice;

	while (true) {

		menu();

		std::cout << "����: ";
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