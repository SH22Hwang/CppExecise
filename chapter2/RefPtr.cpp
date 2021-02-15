//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	int num = 12;
//	int* ptr = &num; // 변수 num을 가리키는 포인터
//	int** dptr = &ptr; // 포인터 ptr을 가리키는 이중 포인터
//
//	int& ref = num; // 변수 num의 참조자
//	int* (&pref) = ptr; // 포인터 ptr을 가리키는 참조자 
//	int** (&dpref) = dptr; // 이중 포인터 dptr을 가리키는 참조자
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//
//	return 0;
//}