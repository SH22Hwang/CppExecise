#include <iostream>
using namespace std;

class SoSimple {
private:
	static int SimObjCnt; // 이전에는 전역변수로 표현
						  // 어디서든 접근 가능해서 문제됨
						  // static 멤버변수 선언으로 객체만 공유함.
public:
	SoSimple() {
		SimObjCnt++;
		cout << SimObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::SimObjCnt = 0; // static 멤버 변수 초기화

class PublicStaticMember {
public:
	static int simObjCnt; // static 멤버 변수에 접근하려면 public
public:
	PublicStaticMember() { simObjCnt++; } // 접근 방법 1
};

int PublicStaticMember::simObjCnt = 0;

int main(void) {
	/*SoSimple sim1;
	SoSimple sim2;
	SoSimple sim3;*/

	cout << PublicStaticMember::simObjCnt << "번째 SoSimple 객체" << endl;
	PublicStaticMember func1;
	PublicStaticMember func2;

	cout << PublicStaticMember::simObjCnt << "번째 SoSimple 객체" << endl; // 접근방법 2
	cout << func1.simObjCnt << "번째 SoSimple 객체" << endl; // 접근방법 3
	cout << func2.simObjCnt << "번째 SoSimple 객체" << endl;

}