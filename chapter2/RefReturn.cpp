///**
//* ��ȯ���� �������̸� int& RefRetFuncOne(int& ref)
//* int, int& �� ���� ���·� ������ �� ����
//* int num2 = RefRetFuncOne(num1)
//* int& num2 = RefRetFuncOne(num1)
//
//* ��ȯ���� �⺻ �ڷ����̸� int RefRetFuncTwo(int& ref)
//* ��ȯ���� �ݵ�� ������ ���� int
//* int num2 = RefRetFuncTwo(num1)
//
//*/
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int& RefRetFuncOne(int& ref) { // int&
//	ref++; // ref -> num1, num1 == 2
//	return ref; // �Լ� ��ȯ �� ref �����ڴ� �Ҹ�
//}
//
//void RefReturn1(void) {
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1); // ������num2 -> num1
//
//	num1++; // num1 == 3
//	num2++; // num1 == 4
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//}
//
//void RefReturn2(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1); // ���ο� ���� num2
//
//	num1 += 1; // num1 == 3
//	num2 += 100; // num2 == 102
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//}
//
//int RefRetFuncTwo(int& ref) { // ��ȯ���� �⺻ �ڷ��� int
//	ref++; // ref -> num1, num1 == 2
//	return ref; // �����ڸ� ��ȯ������ ��ȯ���� �⺻�ڷ��� int�̱� ������
//				// �����ϴ� ������ ���� ��ȯ
//}
//
//void RefReturn3(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncTwo(num1); // ���ο� ���� num2
//
//	num1 += 1; // num1 == 3
//	num2 += 100; // num2 == 102
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//}
//
//int main(void) {
//
//	// RefReturn1();
//	// RefReturn2();
//	RefReturn3();
//
//	return 0;
//}