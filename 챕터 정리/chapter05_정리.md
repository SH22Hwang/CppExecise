# chapter 05 정리

## 복사 생성자의 호출시점

* case 1 기존에 생성된 객체를 이용하여 새로운 객체 초기화
* case 2 Call-by-value 형식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
* case 3 객체를 반환하되 참조형으로 반환하지 않는 경우

### case 1
앞에서 설명 했음 ㅎ

### case 2, 3
객체를 인자로 전달, 객체 반환

~~~c++
#include <iostream>
using namespace std;

class SoSimple{

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
        return *this // 객체를 인자로 전달
    }

    void ShowData(){
        cout << "num: " << num << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob){
    cout <<"return 이전" << endl;
    return ob
}

int main(void){
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    return 0;
}
~~~