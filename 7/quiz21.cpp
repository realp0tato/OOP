#include <iostream>
using namespace std;

//정적 멤버 함수 getClassName() 을 포함하는 Car 클래스를 작성하고, "Car"라는 문자열을 반환하도록 구현하라.
class Car
{
public:
    static string getClassName()
    {
        return "Car";
    }
};

int main()
{
    cout << Car::getClassName() << endl;
    return 0;
}