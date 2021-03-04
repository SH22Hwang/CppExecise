//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//typedef struct __point {
//	int xpos;
//	int ypos;
//} point;
//
//point& pntadder(const point& p1, const point& p2) { // const point &p1, const point &p2 인 이유:
//													// const로 상수 선언을 함으로써 p1, p2의 데이터를 변경하지 않음.
//													// p1, p2를 사용할 수 있게 한다.
//	point* temp = new point; // point* 인 이유:
//							 // 함수 내에서 선언 된 변수(구조체 temp)룰 반환하기 위함. 포인터 ?????????
//							 // 포인터인 이유는 main 함수의 result를 이용하여 함수의 결과를 사용하기 위함이다.
//
//	temp->xpos = p1.xpos + p2.xpos;
//	temp->ypos = p1.ypos + p2.ypos;
//	return *temp;
//}
//
//int main(void) {
//	point* p1 = new point;
//	cout << "p1의 xpos, ypos 입력" << endl;
//	cin >> p1->xpos >> p1->ypos;
//
//	point* p2 = new point;
//	cout << "p2의 xpos, ypos 입력" << endl;
//	cin >> p2->xpos >> p2->ypos;
//
//	point& result = pntadder(*p1, *p2); // 참조자 result 선언. pntadder에서도 같은 메모리 공간을 가리킬수 있게 한다. 
//										// *p1, *p2인 이유:
//										// 동적할당한 변수(구조체)를 매개변수로 pntadder에 전달하기 위함. 포인터를 사용
//
//	cout << "[" << result.xpos << ", " << result.ypos << "]" << endl;
//
//	delete p1;
//	delete p2;
//	delete& result;
//
//	return 0;
//}