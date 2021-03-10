# chapter 08 정리

## 객체 포인터 참고관계
- C++에서, AAA형 포인터 변수는 AAA 객체 또는 AAA를 직접 혹은 간접적으로 상속하는 모든 객체를 가리킬 수 있다(객체의 주소 값을 저장할 수 있다).

```c++
Person * ptr=new Student();
Person * ptr=new PartTimeStudent();
Student * ptr=new PartTimeStudent();
```

## 가상함수

“C++ 컴파일러는 포인터를 이용한 연산의 가능성 여부를 판단할 때, 포인터의 자료형을 기준으로 판단하지, 실제
가리키는 객체의 자료형을 기준으로 판단하지 않는다.” 따라서 포인터 형에 해당하는 클래스의 멤버에맊 접근이
가능하다.

- 포인터가 가리키는 객체의 마지막 오버라이딩 함수를 호출한다.

```c++
#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc()
	{
		cout<<"FirstFunc"<<endl;
	}
};

class Second: public First
{
public:
	void MyFunc()
	{
		cout<<"SecondFunc"<<endl;
	}
};

class Third: public Second
{
public:
	void MyFunc()
	{
		cout<<"ThirdFunc"<<endl;
	}
};

int main(void)
{
	Third * tptr=new Third();
	Second * sptr=tptr;
	First * fptr=sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}

```

- fptr은 First형 포인터이다. 이 포인터는 First 객체를 가리킨다. First 클래스에 정의된 MyFunc 함수가 호출

- sptr은 Second형 포인터이다. 이 포인터는 Second 객체를 가리키는데, First의 MyFunc 함수와 오버라이딩된다. 즉 Second의 MyFunc함수를 호출

- tptr은 Third형 포인터이다. 이 포인터는 Third 객체를 가리키는데, Second의 MyFunc함수와 오버라이딩된다. 즉 Third의 MyFunc함수를 호출

```c++
class Employee
{
private:
	char name[100];
public:
	Employee(char * name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout<<"name: "<<name<<endl;
	}
	virtual int GetPay() const = 0; // 순수 가상함수
	virtual void ShowSalaryInfo() const = 0;
};
// 추상 클래스
```

- 순수 가상함수
몸체가 정의되지 않은 함수
- 추상 클래스
순수 가상함수를 멤버로 둔 함수, 객체 생성 불가능

- 다형성
**가상함수**
문잔은 같지만 다른 기능 다른 결과

## 가상 소멸자와 참조자의 참조 가능성

- 기초 클래스의 소멸자를 virtual로 선언하면 이를 상속하는 유도 클래스의 소멸자도 virtual로 된다.

- 클래스 포인터 변수에서도 되니 클래스 참조자 변수에서도 가능하다.

- 마지막 문장이 잘 이해가 안됨. p.362
```c++
Void GoodFunction(const First &ref) { ... } 
```
> First 객체 또는 First를 직접 혹은 간접적으로 상속하는 클래스의 객체가 인자의 대상이 된다. 인자로 전달되는 객체의 실제 자료형에 상관없이 함수 내에서는 First 클래스에 정의된 함수만 호출 한다.
