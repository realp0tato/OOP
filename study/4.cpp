#include <iostream>

using namespace std;

class Car{
    public:
        static string getClassName() { return "Car"; }
};

int main()
{
    cout << Car::getClassName() << endl;
}

