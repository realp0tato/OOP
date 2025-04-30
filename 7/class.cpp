#include <iostream>

using namespace std;

class Circle
{
    private:
        double radius;
    public:
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);
};

double Circle::getRadius() const
{
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.141592;
    return PI * radius * radius;
}
double Circle::getPerimeter() const
{
    const double PI = 3.141592;
    return 2 * PI * radius;
}
void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름 : " << circle2.getRadius() << endl;
    cout << "넓이 : " << circle2.getArea() << endl;
    cout << "둘레 : " << circle2.getPerimeter() << endl;

    return 0;
}