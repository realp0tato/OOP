#include <iostream>

using namespace std;

void greet(string name);

int main()
{
    string name;
    cout << "이름 입력: ";
    cin >> name;
    greet(name);
    return 0;
}

void greet(string name)
{
    cout << name << "님, 환영합니다!" << endl;
}