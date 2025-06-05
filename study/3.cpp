#include <iostream>

using namespace std;

class Calculator{
    public:
        int add(int a, int b); //{return a+b;}
};

inline int Calculator::add(int a, int b) {
    return a +b;
}

int main()
{
    Calculator c;
    cout << c.add(3, 4) << endl;
    return 0;
}