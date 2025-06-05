#include <iostream>

using namespace std;

class MyClass{
    public:
        MyClass() {std:: cout<< "C"; }
        ~MyClass() {std:: cout<< "D"; }
};

int main()
{
    MyClass a;
    MyClass b;
    return 0;
}