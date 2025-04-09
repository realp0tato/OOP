//mypow 함수 실행 도중 프로그램이 강제종료 되도록 코드를 수정하세요. 어떤 라이브러리 함수를 사용하면 될까요? 별도의 헤더파일이 필요할까요? 그리고 프로그램을 실행시키면 콘솔에는 어떤 내용이 출력될까요?
#include <iostream>
#include <cstdlib> // exit() 함수를 사용하기 위한 헤더파일, exit(0)은 프로그램을 정상 종료, exit(1)은 비정상 종료

using namespace std;

long long mypow(int a, int b) //mypow(parameter, parameter)
{
    long long result = 1;
    for(int i = 0; i < b; ++i)
    {
        result *= a;
    }
    return result; //함수 호출을 끝내고 값의 반환
}

int main()
{
    int a, b;
    cout << "a와 b를 입력하세요: ";
    cin >> a >> b;
    cout << a << "의 " << b << "승은 " << mypow(a, b) << endl; //mypow(argument, argument)
    return 0;
}