//#include <iostream>
//using namespace std;
//
//int* SimpleFunc1(int* ptr) {
//	return ptr + 1;
//}
//
//int* SimpleFunc2(int* ptr) {
//	if (ptr == NULL)
//		return NULL;
//
//	*ptr = 20;
//	return ptr;
//}
//
//int main(void) {
//	int num = 30;
//	int* ptr = &num;
//
//	int* temp1;
//	int* temp2;
//
//	temp1 = SimpleFunc1(ptr);
//	temp2 = SimpleFunc2(ptr);
//
//	cout << num << endl;
//	cout << ptr << endl;
//	cout << temp1 << endl;
//	cout << temp2 << endl;
//	cout << *temp1 << endl;
//	cout << *temp2 << endl;
//
//	return 0;
//}