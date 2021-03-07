#include <iostream>
#include <cstring>
#pragma warning(disable: 4996)

using namespace std;

namespace COMP_POS {
	enum {
		CLERK = 1,
		SENIOR = 2,
		ASSIST = 3,
		MANAGER = 4
	};
}

class NameCard {
private:
	char* name;
	char* company;
	char* phone;
	int position;
public:
	NameCard(const char* myName, const char* myCompany, const char* myPhone, int myPos)
		: position(myPos)
	{
		name = new char[strlen(myName) + 1];
		company = new char[strlen(myCompany) + 1];
		phone = new char[strlen(myPhone) + 1];
		strcpy(name, myName);
		strcpy(company, myCompany);
		strcpy(phone, myPhone);
	}

	NameCard(const NameCard& copy) : position(copy.position) { // 복사생성자 Deep Copy
		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		phone = new char[strlen(copy.phone) + 1];
		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(phone, copy.phone);
	}

	void ShowPositionInfo(int pos) {
		cout << "직급: ";

		switch (pos)
		{
		case 1:
			cout << "사원" << endl;
			break;
		case 2:
			cout << "대리" << endl;
			break;
		case 3:
			cout << "주임" << endl;
			break;
		case 4:
			cout << "사장" << endl;
			break;
		default:
			cout << "범위에서 벗어난 값!!" << endl << endl;
			break;
		}
	}

	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << phone << endl;
		ShowPositionInfo(position);
	}

	~NameCard()
	{
		delete[] name;
		delete[] company;
		delete[] phone;
		cout << "called destructer!" << endl;

	}
};


int main(void) {
	NameCard manClerk("Lee", "abcEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSenior("Kim", "112Eng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;
	//NameCard manAssist("Hwang", "gooEng", "010-5555-6666", COMP_POS::ASSIST);

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	//manAssist.ShowNameCardInfo();

	return 0;
}