#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge) // ��� �Ѿ��? 
		: age(myAge)
	{
		name = new char[strlen(myName) + 1];
		strcpy(name, myName);
	}

	Person() : name(NULL), age(0)
	{
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* myName, int myAge) { // ��� �ƴѰ�?
		name = myName;
		age = myAge;
	}

	void ShowPersonInfo() const {
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructer!" << endl;
	}
};

//int main(void) {
//	//Person parr[3];
//	//char nameStr[100];
//	//char* strptr;
//	//int age;
//
//	//for (int i = 0; i < 3; i++) {
//	//	cout << "�̸�: ";
//	//	cin >> nameStr;
//	//	cout << "����: ";
//	//	cin >> age;
//	//	
//	//	strptr = new char[strlen(nameStr) + 1];
//	//	strcpy(strptr, nameStr);
//
//	//	parr[i].SetPersonInfo(strptr, age);
//	//}
//
//	//parr[0].ShowPersonInfo();
//	//parr[1].ShowPersonInfo();
//	//parr[2].ShowPersonInfo();
//
//	Person* parr[3]; //��ü ������ ��ü�� �ּ� ����
//	char nameStr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "�̸�: ";
//		cin >> nameStr;
//		cout << "����: ";
//		cin >> age;
//		parr[i] = new Person(nameStr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo(); // ��ü �����ʹ� �ٸ��� ǥ���Ѵ�.
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2]; // new ���� 3�� ������ delete 3��
//	
//	return 0;
//}