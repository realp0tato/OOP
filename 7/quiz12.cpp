#include <iostream>

using namespace std;

class Calculator
{
    public:
        int add(int a, int b) { return a + b; }  // 1번 방식
};

//inline int Calculator::add(int a, int b) { return a + b; } // 2번 방식

int main()
{
    Calculator c;
    cout << c.add(3, 4) << endl;
    return 0;
}