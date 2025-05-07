#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

// class Circle
// {
//     private:
//         double radius;
//     public:
//         double getRadius() const;
//         double getArea() const;
//         double getPerimeter() const;
//         void setRadius(double value);
// };

// double Circle::getRadius() const
// {
//     return radius;
// }
// double Circle::getArea() const
// {
//     const double PI = 3.141592;
//     return PI * radius * radius;
// }
// double Circle::getPerimeter() const
// {
//     const double PI = 3.141592;
//     return 2 * PI * radius;
// }
// void Circle::setRadius(double value)
// {
//     radius = value;
// }

// int main()
// {
//     cout << "Circle 1" << endl;
//     Circle circle1;
//     circle1.setRadius(10.0);
//     cout << "반지름: " << circle1.getRadius() << endl;
//     cout << "넓이: " << circle1.getArea() << endl;
//     cout << "둘레: " << circle1.getPerimeter() << endl << endl;

//     cout << "Circle 2" << endl;
//     Circle circle2;
//     circle2.setRadius(20.0);
//     cout << "반지름 : " << circle2.getRadius() << endl;
//     cout << "넓이 : " << circle2.getArea() << endl;
//     cout << "둘레 : " << circle2.getPerimeter() << endl;

//     return 0;
// }

// class Circle
// {
//     private:
//         double radius;
//     public:
//         Circle(double radius);
//         Circle();
//         Circle(const Circle &circle);
//         ~Circle();
//         void setRadius(double radius);
//         double getRadius() const;
//         double getArea() const;
//         double getPerimeter() const;
// };

// Circle::Circle(double rds) : radius(rds)
// {
//     cout << "파라미터 생성자가 호출되었습니다" << endl;
//     assert(rds >= 0);
// }

// Circle::Circle() : radius(0.0)
// {
//     cout << "기본 생성자가 호출되었습니다" << endl;
// }
// Circle::Circle(const Circle &circle) : radius(circle.radius)
// {
//     cout << "복사 생성자가 호출되었습니다" << endl;
// }
// Circle::~Circle()
// {
//     cout << "소멸자가 호출되었습니다" << radius <<endl;
// }

// void Circle::setRadius(double value)
// {
//     radius = value;
// }

// double Circle::getRadius() const
// {
//     return radius;
// }
// double Circle::getArea() const
// {
//     const double PI = 3.141592;
//     return PI * radius * radius;
// }
// double Circle::getPerimeter() const
// {
//     const double PI = 3.141592;
//     return 2 * PI * radius;
// }

// int main()
// {
//     Circle circle1(5.2);
//     cout << "반지름" << circle1.getRadius() << endl;
//     cout << "넓이" << circle1.getArea() << endl;
//     cout << "둘레" << circle1.getPerimeter() << endl;

//     Circle circle2(circle1);
//     cout << "반지름" << circle2.getRadius() << endl;
//     cout << "넓이" << circle2.getArea() << endl;
//     cout << "둘레" << circle2.getPerimeter() << endl;

//     Circle circle3;
//     cout << "반지름" << circle3.getRadius() << endl;
//     cout << "넓이" << circle3.getArea() << endl;
//     cout << "둘레" << circle3.getPerimeter() << endl;

//     return 0;
// }

class RandomInteger
{
    private:
        int low;
        int high;
        int value;
    public:
        RandomInteger(int low, int high);
        RandomInteger(const RandomInteger &random) = delete;
        ~RandomInteger();
        void print() const;
};

RandomInteger::RandomInteger(int lw, int hh) : low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp %(high - low +1) + low;
}

RandomInteger::~RandomInteger()
{
    cout << "소멸자 호출" << endl;
}
void RandomInteger::print() const
{
    cout << value << endl;
}

int main()
{
    RandomInteger r1(100, 200);
    cout << "100~200 사이의 랜덤 정수: ";
    r1.print();

    RandomInteger r2(400, 600);
    cout << "400~600 사이의 랜덤 정수: ";
    r2.print();

    RandomInteger r3(1500, 2000);
    cout << "1500~2000 사이의 랜덤 정수: ";
    r3.print();

    return 0;


}