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
//point& pntadder(const point& p1, const point& p2) { // const point &p1, const point &p2 �� ����:
//													// const�� ��� ������ �����ν� p1, p2�� �����͸� �������� ����.
//													// p1, p2�� ����� �� �ְ� �Ѵ�.
//	point* temp = new point; // point* �� ����:
//							 // �Լ� ������ ���� �� ����(����ü temp)�� ��ȯ�ϱ� ����. ������ ?????????
//							 // �������� ������ main �Լ��� result�� �̿��Ͽ� �Լ��� ����� ����ϱ� �����̴�.
//
//	temp->xpos = p1.xpos + p2.xpos;
//	temp->ypos = p1.ypos + p2.ypos;
//	return *temp;
//}
//
//int main(void) {
//	point* p1 = new point;
//	cout << "p1�� xpos, ypos �Է�" << endl;
//	cin >> p1->xpos >> p1->ypos;
//
//	point* p2 = new point;
//	cout << "p2�� xpos, ypos �Է�" << endl;
//	cin >> p2->xpos >> p2->ypos;
//
//	point& result = pntadder(*p1, *p2); // ������ result ����. pntadder������ ���� �޸� ������ ����ų�� �ְ� �Ѵ�. 
//										// *p1, *p2�� ����:
//										// �����Ҵ��� ����(����ü)�� �Ű������� pntadder�� �����ϱ� ����. �����͸� ���
//
//	cout << "[" << result.xpos << ", " << result.ypos << "]" << endl;
//
//	delete p1;
//	delete p2;
//	delete& result;
//
//	return 0;
//}