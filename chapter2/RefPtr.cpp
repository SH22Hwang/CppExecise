//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	int num = 12;
//	int* ptr = &num; // ���� num�� ����Ű�� ������
//	int** dptr = &ptr; // ������ ptr�� ����Ű�� ���� ������
//
//	int& ref = num; // ���� num�� ������
//	int* (&pref) = ptr; // ������ ptr�� ����Ű�� ������ 
//	int** (&dpref) = dptr; // ���� ������ dptr�� ����Ű�� ������
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//
//	return 0;
//}