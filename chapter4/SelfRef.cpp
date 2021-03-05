//#include <iostream>
//using namespace std;
//
//class SelfRef {
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "객체생성" << endl;
//	}
//
//	SelfRef& Adder(int n) {
//		num += n;
//		return *this; // 객체 자신을 참조할수 있는 정보 반환
//	}
//
//	SelfRef& ShowNumber() {
//		cout << num << endl;
//		return *this;
//	}
//};
//int main(void) {
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//	// Adder는 객체 자신을 참조할 수 있는 정보를 반환한다.
//	// 즉 &ref는 obj를 가리킨다.
//	//
//
//	obj.ShowNumber();
//	ref.ShowNumber();
//
//	ref.Adder(1).ShowNumber().Adder(2).ShowNumber();
//	//참조값을 이용하여 함수 호출 ㅋㅋ
//
//	return 0;
//}
