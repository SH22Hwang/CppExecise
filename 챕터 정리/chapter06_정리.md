# chapter 06 정리

## const

객체도 const 선언 가능

~~~c++
#include <iostream>
using namespace std;

class SoSimple {

private:
    int num;
public:
    SoSimple(int n) : num(n)
    {}
    
    SoSimple(const SoSimple& copy) : num(copy.num) // 복사 생성자
    {
        cout << "called SoSimple(const So)" << endl;
    }
    
    SoSimple& AddNum(int n){
        num += n;
        return *this; // 객체를 인자로 전달
    }

    void ShowData() const {  // const 객체는 const 함수만 실행 가능하다.
        cout << "num: " << num << endl;
    }

    void SimpleFunc() {
        cout << "simpleFunc: " << num << endl;
    }

    void SimpleFunc() const {
        cout << "const SimpleFunc: " << num << endl;
    }
};

// SoSimple SimpleFuncObj(SoSimple ob) {
//     cout <<"return 이전" << endl;
//     return ob
// }

void YourFunc(const SoSimple &obj){
    obj.SimpleFunc();
}

int main(void){
    // const SoSimple obj(7); // const 데이터 변경 허용안함.
    // obj.ShowData();

    SoSimple obj1(2);
    const SoSimple obj2(7);
    obj1.SimpleFunc();
    obj2.SimpleFunc();
    YourFunc(obj1);
    YourFunc(obj2);
    return 0;
}
~~~

## friend
friend 선언을 하면 prvate 멤버 접근을 허용한다.
정보은닉 위험. 제한적으로 선언되어야한다.

## static

```c++
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
```

stactic 멤버 함수도 특징 일치
- 선언된 모든 객체가 공유
- public으로 선언이 되면 클래스의 이름을 이용하여 호출
- 객체의 멤버 아님. 멤버변수, 멤버함수 접근 불가.
- static변수 함수만 가능

const static 멤버 변수 초기화 가능
mutable로 선언된 멤버변수는 const 함수에서 값의 변경 가능