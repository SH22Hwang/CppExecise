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
		cout << "����: ";

		switch (pos)
		{
		case 1:
			cout << "���" << endl;
			break;
		case 2:
			cout << "�븮" << endl;
			break;
		case 3:
			cout << "����" << endl;
			break;
		case 4:
			cout << "����" << endl;
			break;
		default:
			cout << "�������� ��� ��!!" << endl << endl;
			break;
		}
	}

	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
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
	// �� ������ �����?
	// const char[] ---- char*
	// const char[]�� �ѱ�� const char*�� �޾ƾ��Ѵ�.

	return 0;
}