//#include <iostream>
//using namespace std;
//
//class SoSimple {
//
//private:
//    int num;
//public:
//    SoSimple(int n) : num(n)
//    {}
//
//    SoSimple(const SoSimple& copy) : num(copy.num) // ���� ������
//    {
//        cout << "called SoSimple(const So)" << endl;
//    }
//
//    SoSimple& AddNum(int n) {
//        num += n;
//        return *this; // ��ü�� ���ڷ� ����
//    }
//
//    void ShowData() const {
//         // const ��ü�� const �Լ��� ���� �����ϴ�.
//            cout << "num: " << num << endl;
//    }
//
//    void SimpleFunc() {
//        cout << "simpleFunc: " << num << endl;
//    }
//
//    void SimpleFunc() const {
//        cout << "const SimpleFunc: " << num << endl;
//    }
//};
//
//// SoSimple SimpleFuncObj(SoSimple ob) {
////     cout <<"return ����" << endl;
////     return ob
//// }
//
//void YourFunc(const SoSimple& obj) {
//    obj.SimpleFunc();
//}
//
//int main(void) {
//    // const SoSimple obj(7); // const ������ ���� ������.
//    // obj.ShowData();
//
//    SoSimple obj1(2);
//    const SoSimple obj2(7);
//    obj1.SimpleFunc();
//    obj2.SimpleFunc();
//    YourFunc(obj1);
//    YourFunc(obj2);
//    return 0;
//}