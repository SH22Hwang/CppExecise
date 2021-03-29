# chaptor 13 정리

## 템플릿

- 함수 템플릿은 함수를 만드는 도구
- 함수의 모양은 정해져있지만, 내용은 정해지지않음

```c++
// 일반 함수
int Add(int num1, int num2)
{
    return num1 + num2;
}
```

- 함수의 기능: 덧셈
- 함수의 자료형: int

```c++
T Add(T num1, T num2)
{
    return num1 + num2;
}
```

- 템플릿화의 중간단계
- 자료형 정하지 않고, 그 대신 T를 씀.
- 함수의 기능: 덧셈
- 함수의 자료형: T

```c++
template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    cout Add<int>(15, 20) << endl;
    cout Add(2.9, 3.7) << endl; // 컴파일러가 알아서 해석해줌
    return 0;
}

// 템플릿 함수 생성
int Add<int>(int num1, int num2)
{
    return num1 + num2;
}
```

### 둘 이상의 형에 대해 템플릿 선언하기

```c++
template <class T1, class T2>
void ShowData(double num)
{
    cout << (T1)num << ", " << (T2)num << endl;
    cout << T1(num) << ", " << T2(num) << endl; // 위 문장과 일치
}

int main(void)
{
    ShowData<char, int>(65);
    // ASCII 코드의 65는 A
    return 0;
}
```

### 함수 탬플릿의 특수화

- 컴파일러는 탬플릿 함수를 만든다.
- 특수한 자료형에 대해서는 탬플릿함수를 만들지 말고 특수하게 만들어진 함수를 사용하도록 한다.
- 자료형의 정보를 명시하든 말든 상관 없으나, 가급적 명시해라

## 클래스 템플릿

- 함수 템플릿과 거의 같음
- 클래스 템플릿은 자료형 정보 생략 불가
  - 아마 함수 오버라이딩 때문이 아닐까 한다?
  - 왜 그런지 모르겠음
- 선언과 정의 분리하면 정의마다 템플릿 선언해야함

### 파일 분리했을때

- 컴파일은 파일단위로 한다.
- 동시에 컴파일 되지만, 메인함수와 소스파일이 서로 참조하지 않는다.
  - 클래스 템플릿의 정보 부족
  - 컴파일 에러
- 해결책 1: 헤더파일에 생성자와 정의 모두 넣음
- 해결책 2: 메인함수에 #include 소스파일(생성자와 정의)

### 배열 클래스의 템플릿화 

- 직접 만들어보자.