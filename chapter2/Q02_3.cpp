#include <iostream>
#include <string.h>

using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2) { // const Point &p1, const Point &p2 인 이유:
													// const로 상수 선언을 함으로써 p1, p2의 데이터를 변경하지 않음.
													// p1, p2를 사용할 수 있게 한다.
	Point* temp = new Point; // Point* 인 이유:
							 // 함수 내에서 선언 된 변수(구조체 temp)룰 반환하기 위함. 포인터 ?????????
							 // 포인터인 이유는 main 함수의 result를 이용하여 함수의 결과를 사용하기 위함이다.

	temp->xpos = p1.xpos + p2.xpos;
	temp->ypos = p1.ypos + p2.ypos;
	return *temp;
}

int main(void) {
	Point* p1 = new Point;
	cout << "p1의 xpos, ypos 입력" << endl;
	cin >> p1->xpos >> p1->ypos;

	Point* p2 = new Point;
	cout << "p2의 xpos, ypos 입력" << endl;
	cin >> p2->xpos >> p2->ypos;

	Point& result = PntAdder(*p1, *p2); // 참조자 result 선언. PntAdder에서도 같은 메모리 공간을 가리킬수 있게 한다. 
										// *p1, *p2인 이유:
										// 동적할당한 변수(구조체)를 매개변수로 PntAdder에 전달하기 위함. 포인터를 사용

	cout << "[" << result.xpos << ", " << result.ypos << "]" << endl;

	delete p1;
	delete p2;
	delete& result;

	return 0;
}