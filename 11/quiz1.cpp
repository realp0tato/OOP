#include <iostream>

using namespace std;

template <typename T>
T  sum(T a, T b, T c = 0) //매개변수에 초기값 코딩하는 경유를 디폴트 매개변수라고 한다.
{                         //a, b는 초기값 코딩 안되어 있으므로 함수 호출할 때 무조건 argument넣어야한다.
    return a + b + c;
}

int main()
{
    cout << "두 정수의 합은 " << sum(10, 20) << endl; //이 한줄만 봐도 sum함수가 할 일 다 하고 없어지면
                                                   //문법 오류가 나므로 sum함수의 리턴타입은 절대 void가 아님
    cout << "세 실수의 합은 " << sum(1.1, 2.2, 4.4) << endl;
    return 0;
}
