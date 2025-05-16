#include <iostream>
using namespace std;
#include "Circle.h"
#include <cassert>
int main()
{
    Circle circle1(5.2);
    cout << "반지름" << circle1.getRadius() << endl;
    cout << "넓이" << circle1.getArea() << endl;
    cout << "둘레" << circle1.getPerimeter() << endl;

    Circle circle2(circle1);
    cout << "반지름" << circle2.getRadius() << endl;
    cout << "넓이" << circle2.getArea() << endl;
    cout << "둘레" << circle2.getPerimeter() << endl;

    Circle circle3;
    cout << "반지름" << circle3.getRadius() << endl;
    cout << "넓이" << circle3.getArea() << endl;
    cout << "둘레" << circle3.getPerimeter() << endl;

    return 0;
}