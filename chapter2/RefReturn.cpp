///**
//* 반환형이 참조형이면 int& RefRetFuncOne(int& ref)
//* int, int& 두 가지 형태로 저장할 수 있음
//* int num2 = RefRetFuncOne(num1)
//* int& num2 = RefRetFuncOne(num1)
//
//* 반환형이 기본 자료형이면 int RefRetFuncTwo(int& ref)
//* 반환값은 반드시 변수에 저장 int
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
//	return ref; // 함수 반환 후 ref 참조자는 소멸
//}
//
//void RefReturn1(void) {
//	int num1 = 1;
//	int& num2 = RefRetFuncOne(num1); // 참조자num2 -> num1
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
//	int num2 = RefRetFuncOne(num1); // 새로운 변수 num2
//
//	num1 += 1; // num1 == 3
//	num2 += 100; // num2 == 102
//
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//}
//
//int RefRetFuncTwo(int& ref) { // 반환형이 기본 자료형 int
//	ref++; // ref -> num1, num1 == 2
//	return ref; // 참조자를 반환하지만 반환형이 기본자료형 int이기 때문에
//				// 참조하는 변수의 값이 반환
//}
//
//void RefReturn3(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncTwo(num1); // 새로운 변수 num2
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