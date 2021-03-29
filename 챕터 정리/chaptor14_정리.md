# chaptor 14 정리

## 템플릿 2

- 템플릿의 자료형은 별에 별걸 다 넣을 수 있다
- Point<int> 와 같은 템플릿 클래스의 자료형으로 일반 함수 정의 가능
  - 클래스 템플릿에서 friend 선언 가능
  - 예시 Point<int>를 인자로 전달 받는 연산자 오버로딩 함수 (일반 함수)

## 클래스 템플릿 특수화

- 객체의 자료형에 따라 다른 동작
- 함수 템플릿과 같음

## 템플릿 인자

- 템플릿 매개변수에는 변수의 선언이 올 수 있다.

```c++
    template <typename T, int len> // T 템플릿 매개변수 len 템플릿 인자
    class SimpleArray
    {
    private:
        T arr[len];
    public:
        T& operator[] (int idx)
        {
            return arr[idx];
        }
    }
```

- 정의에 따라 전혀 다른 (자료형이 다른) 객체 생성
- 생성자로 하지 않는 이유 속도 위함
- 디폴트값 지정가능

## 템플릿과 static

- static 변수: 한번 초기화 되면 그 값 계속 유지

- 함수 템플릿의 static 변수는 템플릿 함수별로 독립적이다.
- static int, static long 다 다른 static 변수

- 클래스도 마찬가지다. 클래스 별로 독립적이고, 각 클래스의 객체들 사이에서만 공유