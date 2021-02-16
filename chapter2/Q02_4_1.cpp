//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//char* MakeStr(int len) {
//	char* str = new char[len]; // []넣어야함!!!
//	return str;
//}
//
//int main(void) {
//	char* str1 = MakeStr(20);
//	char* str2 = MakeStr(30);
//	char* str3 = MakeStr(30);
//
//	strcpy(str1, "C++ is hard...");
//	str2 = str1;
//	strcpy(str3, str1);
//
//	strcat(str2, "T.T");
//	
//	int cmp = strcmp(str1, str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int len3 = strlen(str3);
//	
//	if (cmp == 0) {
//		cout << "str1 == str2" << endl
//			<< str1 << endl << str2 << endl << str3 << endl
//			<< "length of str1: " << len1 << endl
//			<< "length of str2: " << len2 << endl
//			<< "length of str3: " << len3;
//
//	}
//	else
//		cout << "ERROR!";
//
//	delete str1, str2;
//
//	return 0;
//}