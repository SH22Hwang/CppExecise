//#include <iostream>
//using namespace std;
//
//class SelfRef {
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "��ü����" << endl;
//	}
//
//	SelfRef& Adder(int n) {
//		num += n;
//		return *this; // ��ü �ڽ��� �����Ҽ� �ִ� ���� ��ȯ
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
//	// Adder�� ��ü �ڽ��� ������ �� �ִ� ������ ��ȯ�Ѵ�.
//	// �� &ref�� obj�� ����Ų��.
//	//
//
//	obj.ShowNumber();
//	ref.ShowNumber();
//
//	ref.Adder(1).ShowNumber().Adder(2).ShowNumber();
//	//�������� �̿��Ͽ� �Լ� ȣ�� ����
//
//	return 0;
//}
