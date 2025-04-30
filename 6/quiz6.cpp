//mypow함수의 위치를 main함수보다 밑으로 옮겼을 때
//1. 컴파일 단계에서 오류 발생
//2. 정상 수행되려면 함수원형(함수 프로토타입) 한 줄 코딩이 필요하다. main함수보다 위에 long long mypow(int a, int b); 삽입

#include <iostream>

using namespace std;

long long mypow(int a, int b); //함수 원형, 함수 프로토타입 (중괄호 X, 코딩 X, 세미콜론 O)
                               //함수 원형에서만 parameter(매개변수)이름 생략가능 (타입은 생략 불가)
                               //즉, long long mypow(int, int); 가능
                               //함수원형 필요한 이유는, 함수 정의보다 함수 호출이 먼저 나올 때
                               //컴파일러한테 이러한 함수가 있다는 걸 알려주기 위해

int main()
{
    int a, b;
    cout << "a와 b를 입력하세요: ";
    cin >> a >> b;
    cout << a << "의 " << b << "승은 " << mypow(a, b) << endl; 
    return 0;
}

long long mypow(int a, int b) //함수 정의부분
{
    long long result = 1;
    for(int i = 0; i < b; ++i)
    {
        result *= a;
    }
    return result; 
}