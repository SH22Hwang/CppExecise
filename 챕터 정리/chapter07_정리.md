# chapter 07 정리

## 상속

- ‘기존에 정의해 놓은 클래스의 재활용을 목적으로 만들어짂 문법적 요소’
- 하지만 그 이상의 더 중요한 의미가 있다.
- 요구사항 변경 기능 추가 용이하게 함.

## 문법적 이해

- 유도 클래스는 기초 클래스의 생성자를 명시적으로 호출
- 기초 클래스를 생성하기 위한 인자까지 함께 전달해야함.

## 객체 생성과정

### 유도 클래스의 생성자가 명시됨
1. 메모리 공간 할당
2. 유도 클래스의 생성자 호출
3. 기초 클래스의 생성자 호출 및 실행
4. 유도 클래스의 생성자 실행

### 유도 클래스의 생성자가 명시되지 않늠
1. 메모리 공간의 할당
2. void 생성자 호출 (생성자가 명시되지 않았으므로...)
3. 이니셜라이저를 통한 기초 클래스의 생성자 호출이 명시적으로 정의되어 있지 않으므로 void 생성자 호출
4. 유도 클래스의 실행

- 클래스의 멤버는 해당 클래스의 생성자를 통해서 초기화해야한다.
- 객체의 소멸과정은 생성순서와 반대

## protected 선언, 세 가지 형태의 상속

- protected는 private과 달리 상속관계에서의 접근을 허용한다
- 접근할수 있는 범위
-- private < protected < public

- public 상속
-- 접근 제어 권한을 그대로 상속한다! 단, private은 접근불가로 상속한다!

- protected 상속
-- protected보다 접근의 범위가 넓은 멤버는 protected로 상속한다. 단, private은 접근불가로 상속한다!

- private 상속
-- private보다 접근의 범위가 넓은 멤버는 protected로 상속한다. 단, private은 접근불가로 상속한다!

## 상속을 위한 조건

-  IS-A 관계의 성립
-- 노트북 is a 컴퓨터
-- 무선 전화기 is a 전화기

```c++
#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];
public:	
	Computer(char * name)
	{
		strcpy(owner, name);
	}
	void Calculate() 
	{ 
		cout<<"요청 내용을 계산합니다."<<endl; 
	}
};

class NotebookComp : public Computer
{
private:
	int battary;
public:	
	NotebookComp(char * name, int initChag)
		: Computer(name), battary(initChag)
	{  }	
	void Charging() { battary+=5; }
	void UseBattary() { battary-=1; }
	void MovingCal()
	{
		if(GetBattaryInfo()<1)
		{
			cout<<"충전이 필요합니다."<<endl;
			return;
		}
	
		cout<<"이동하면서 ";
		Calculate();
		UseBattary();
	}
	int GetBattaryInfo() { return battary; }
};
	
class TabletNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
public:		
	TabletNotebook(char * name, int initChag, char * pen)
		: NotebookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(char * penInfo)
	{
		if(GetBattaryInfo()<1)
		{
			cout<<"충전이 필요합니다."<<endl;
			return;
		}
		if(strcmp(regstPenModel, penInfo)!=0)
		{
			cout<<"등록된 펜이 아닙니다.";
			return;
		}
		cout<<"필기 내용을 처리합니다."<<endl;
		UseBattary();
	}
};

int main(void)
{
	NotebookComp nc("이수종", 5);
	TabletNotebook tn("정수영", 5, "ISE-241-242");	
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}

```