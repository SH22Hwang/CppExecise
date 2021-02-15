#include <iostream>
#include <string.h>

using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2) { // const Point &p1, const Point &p2 �� ����:
													// const�� ��� ������ �����ν� p1, p2�� �����͸� �������� ����.
													// p1, p2�� ����� �� �ְ� �Ѵ�.
	Point* temp = new Point; // Point* �� ����:
							 // �Լ� ������ ���� �� ����(����ü temp)�� ��ȯ�ϱ� ����. ������ ?????????
							 // �������� ������ main �Լ��� result�� �̿��Ͽ� �Լ��� ����� ����ϱ� �����̴�.

	temp->xpos = p1.xpos + p2.xpos;
	temp->ypos = p1.ypos + p2.ypos;
	return *temp;
}

int main(void) {
	Point* p1 = new Point;
	cout << "p1�� xpos, ypos �Է�" << endl;
	cin >> p1->xpos >> p1->ypos;

	Point* p2 = new Point;
	cout << "p2�� xpos, ypos �Է�" << endl;
	cin >> p2->xpos >> p2->ypos;

	Point& result = PntAdder(*p1, *p2); // ������ result ����. PntAdder������ ���� �޸� ������ ����ų�� �ְ� �Ѵ�. 
										// *p1, *p2�� ����:
										// �����Ҵ��� ����(����ü)�� �Ű������� PntAdder�� �����ϱ� ����. �����͸� ���

	cout << "[" << result.xpos << ", " << result.ypos << "]" << endl;

	delete p1;
	delete p2;
	delete& result;

	return 0;
}