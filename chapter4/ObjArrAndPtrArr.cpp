#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge) // 상수 넘어옴? 
		: age(myAge)
	{
		name = new char[strlen(myName) + 1];
		strcpy(name, myName);
	}

	Person() : name(NULL), age(0)
	{
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* myName, int myAge) { // 상수 아닌가?
		name = myName;
		age = myAge;
	}

	void ShowPersonInfo() const {
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
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
//	//	cout << "이름: ";
//	//	cin >> nameStr;
//	//	cout << "나이: ";
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
//	Person* parr[3]; //객체 포인터 객체의 주소 저장
//	char nameStr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "이름: ";
//		cin >> nameStr;
//		cout << "나이: ";
//		cin >> age;
//		parr[i] = new Person(nameStr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo(); // 객체 포인터는 다르게 표현한다.
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2]; // new 연산 3번 했으니 delete 3번
//	
//	return 0;
//}