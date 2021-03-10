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
//    SoSimple(const SoSimple& copy) : num(copy.num) // 복사 생성자
//    {
//        cout << "called SoSimple(const So)" << endl;
//    }
//
//    SoSimple& AddNum(int n) {
//        num += n;
//        return *this; // 객체를 인자로 전달
//    }
//
//    void ShowData() const {
//         // const 객체는 const 함수만 실행 가능하다.
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
////     cout <<"return 이전" << endl;
////     return ob
//// }
//
//void YourFunc(const SoSimple& obj) {
//    obj.SimpleFunc();
//}
//
//int main(void) {
//    // const SoSimple obj(7); // const 데이터 변경 허용안함.
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