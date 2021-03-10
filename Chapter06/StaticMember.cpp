#include <iostream>
using namespace std;

class SoSimple {
private:
	static int SimObjCnt; // �������� ���������� ǥ��
						  // ��𼭵� ���� �����ؼ� ������
						  // static ������� �������� ��ü�� ������.
public:
	SoSimple() {
		SimObjCnt++;
		cout << SimObjCnt << "��° SoSimple ��ü" << endl;
	}
};

int SoSimple::SimObjCnt = 0; // static ��� ���� �ʱ�ȭ

class PublicStaticMember {
public:
	static int simObjCnt; // static ��� ������ �����Ϸ��� public
public:
	PublicStaticMember() { simObjCnt++; } // ���� ��� 1
};

int PublicStaticMember::simObjCnt = 0;

int main(void) {
	/*SoSimple sim1;
	SoSimple sim2;
	SoSimple sim3;*/

	cout << PublicStaticMember::simObjCnt << "��° SoSimple ��ü" << endl;
	PublicStaticMember func1;
	PublicStaticMember func2;

	cout << PublicStaticMember::simObjCnt << "��° SoSimple ��ü" << endl; // ���ٹ�� 2
	cout << func1.simObjCnt << "��° SoSimple ��ü" << endl; // ���ٹ�� 3
	cout << func2.simObjCnt << "��° SoSimple ��ü" << endl;

}