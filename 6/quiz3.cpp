//아래 코드에서 함수 정의부분 및 함수 호출 부분을 찾으세요. 그리고 parameter와 argument를 구분해서 설명하세요.
#include <iostream>

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
//함수 정의 부분은 mypow(int a, int b) { ... } 부분입니다.
//함수 호출 부분은 main() 함수에서 mypow(a, b)로 호출하는 부분입니다.
//parameter는 mypow 함수의 매개변수인 a와 b입니다. 변수 자체를 보내는 것이 아닌 값만 보낸다.
//argument는 main() 함수에서 mypow(a, b)로 전달되는 a와 b의 값입니다.