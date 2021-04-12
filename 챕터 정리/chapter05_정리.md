# chapter 05 정리

## 깊은 복사와 얕은 복사

- 얕은 복사를 하면 생성은 잘 되지만 소멸자가 한번만 실행된다.
  - 왜?
  - man2에서 이미 소멸자가 실행됐으므로 문자열 동적할당은 풀림
  - man1에서는 이미 메모리공간이 없으므로 소멸자가 실행되지 않았다.
- 깊은 복사를 하면 해결된다
  - 소멸자가 정상적으로 두번 실행

```C++
Person(const Person& copy)
: age(copy.age)
{
    name=new char[strlen(copy.name)+1];
    strcpy(name, copy.name);
}
```

## 복사 생성자의 호출시점

* case 1 기존에 생성된 객체를 이용하여 새로운 객체 초기화
* case 2 Call-by-value 형식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
* case 3 객체를 반환하되 참조형으로 반환하지 않는 경우

### case 1
앞에서 설명 했음 ㅎ

### case 2, 3
객체를 인자로 전달, 객체 반환

~~~C++

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
        return *this 
    }

    void ShowData(){
        cout << "num: " << num << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob) {
    cout <<"return 이전" << endl;
    return ob; // 객체 반환하면서 복사생성
}

int main(void){
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData(); // 객체를 인자로 전달
    obj.ShowData();
    return 0;
}
~~~
