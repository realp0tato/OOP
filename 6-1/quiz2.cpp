#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, pan;
    cout << "[ax\u00B2 + bx + c = 0 의 근 찾기]" << endl;
    cout << "계수 a, b, c 입력: ";
    cin >> a >> b >> c;
    pan = b * b - 4 * a * c;
    if (pan > 0)
    {
        cout << "실근이 2개입니다." << endl;
        cout << "x\u2081 = " << (-b + sqrt(pan)) / (2 * a) << endl;
        cout << "x\u2082 = " << (-b - sqrt(pan)) / (2 * a) << endl;
    }
    else if (pan == 0)
    {
        cout << "실근이 1개입니다." << endl;
        cout << "x\u2081 =  x\u2082" << -b / (2 * a) << endl;
    }
    else
    {
        cout << "허근이 2개입니다." << endl;
        cout << "x\u2081 = " << -b / (2 * a) << "+" << sqrt(-pan) / (2 * a) << "i" << endl;
        cout << "x\u2082 = " << -b / (2 * a) << "-" << sqrt(-pan) / (2 * a) << "i" << endl;
    }
}