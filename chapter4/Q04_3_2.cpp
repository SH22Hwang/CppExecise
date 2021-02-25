#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_DEPRECATE
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
		/*MakeDynamicAlloc(name, myName);
		MakeDynamicAlloc(company, myCompany);
		MakeDynamicAlloc(phone, myPhone);*/

		name = new char[strlen(myName) + 1];
		company = new char[strlen(myCompany) + 1];
		phone = new char[strlen(myPhone) + 1];
		strcpy(name, myName);
		strcpy(company, myCompany);
		strcpy(phone, myPhone);
	}

	//void MakeDynamicAlloc(char* var, char* myVar) {
	//	int len = strlen(myVar) + 1;
	//	var = new char[len];
	//	strcpy(var, myVar);
	//}

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
	NameCard manSenior("Kim", "112Eng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Hwang", "gooEng", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	// 왜 오류가 생길까?
	// const char[] ---- char*
	// const char[]을 넘기니 const char*로 받아야한다.

	return 0;
}