#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    string s = "Hello";

    cout << a << endl;
    cout << &a << endl; // a의 주소
    cout << p << endl; // p가 가리키는 주소
    cout << *p << endl; // p가 가리키는 주소의 값
    cout << s << endl; // 문자열 s의 내용
    cout << &s << endl; // s의 주소
    return 0;

}