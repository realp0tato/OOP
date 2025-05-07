#include <iostream>

using namespace std;

// 오버로딩 사용
int sum(int a, int b, int c)
{
    return a + b+ c;
}
int sum(int a, int b)
{
    return a + b;
}
string sum(string a, string b)
{
    return a + " " + b;
}

// 오버로딩 사용 x
// int sum(int a, int b, int c = 0) // 기본값 사용
// {
//     return a + b + c;
// }

int main()
{
    cout << sum(2,3) << endl;
    cout << sum(2, 3, 7) << endl;
    cout << sum("apple", "banana") << endl;
}