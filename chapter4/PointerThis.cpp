#include <iostream>
#include <cstring>
using namespace std;

class TwoNumber {
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2) {
		this->num1 = num1; // this->num1은 멤버변수 num1은 매개변수
		this->num2 = num2;
	}

	// 위의 생성자는 아래로 대체 가능하다
	//TwoNumber(int num1, int num2) 
	//	: num1(num1), num2(num2) {}

	void ShowTwoNumber() {
		cout << this->num1 << endl; // this-> 생략가능
		cout << this->num2 << endl;
	}
};

//int main(void) {
//	TwoNumber two(2, 4);
//	two.ShowTwoNumber();
//	return 0;
//}