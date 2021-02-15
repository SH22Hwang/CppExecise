////#include <iostream>
////#include <string.h>
////#include <stdlib.h>
////
////using namespace std;
////
////char* MakeStrAdr(int len) {
////	char* str = (char*)malloc(sizeof(char) * len); // 문자열 저장을 위한 힙 영역
////	return str;
////}
////
////int main(void) {
////	char* str = MakeStrAdr(20);
////	strcpy(str, "I am so happy!");
////	cout << str << endl;
////	free(str); // 힙에 할당된 메모리 공간 소멸
////	return 0;
////}
////
//
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//char* MakeStrAdr(int len) {
//	//char* str = (char*)malloc(sizeof(char) * len); // 문자열 저장을 위한 힙 영역
//	char* str = new char(len);
//	return str;
//}
//
//int main(void) {
//	char* str = MakeStrAdr(20);
//	strcpy(str, "I am so happy!");
//	cout << str << endl;
//	//free(str); // 힙에 할당된 메모리 공간 소멸
//	delete[] str;
//	return 0;
//}