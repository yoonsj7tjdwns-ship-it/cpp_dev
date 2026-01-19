#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cassert>
#include <string> // string 사용을 위해 추가

using namespace std;

// Class Definition (인터페이스)
class Circle
{
private:
    double radius;
    string color; // 1) 데이터 멤버 color 추가

public:
    Circle(double radius, string color); // 1) 매개변수에 string color 추가
    Circle();                            // Default constructor
    Circle(const Circle& circle);        // Copy constructor
    ~Circle();                           // Destructor

    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    string getColor() const;             // color 값을 읽어오기 위한 접근자 함수 추가
};
#endif

// Implementation (구현)

// 2) 매개변수가 있는 생성자: radius와 color를 초기화
Circle::Circle(double rds, string c)
    : radius(rds), color(c)
{
    if (radius < 0.0)
    {
        assert(false);
    }
}

// 2) 기본 생성자: radius는 0.0, color는 "none"으로 초기화
Circle::Circle()
    : radius(0.0), color("none")
{
}

// 2) 복사 생성자: radius와 color 모두 복사
Circle::Circle(const Circle& circle)
    : radius(circle.radius), color(circle.color)
{
}

Circle::~Circle()
{
}

void Circle::setRadius(double value)
{
    radius = value;
    if (radius < 0.0)
    {
        assert(false);
    }
}

double Circle::getRadius() const
{
    return radius;
}

// color 접근자 구현
string Circle::getColor() const
{
    return color;
}

double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}

// Main Function (앱 테스트)
int main()
{
    // 3) 첫 번째 객체: 매개변수가 있는 생성자 (반지름 5.2, 색상 "Red")
    Circle circle1(5.2, "Red");
    cout << "--- Circle 1 (Parameterized) ---" << endl;
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Color: " << circle1.getColor() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl;
    cout << endl;

    // 3) 두 번째 객체: 복사 생성자 (Circle 1을 복사 -> Red여야 함)
    Circle circle2(circle1);
    cout << "--- Circle 2 (Copy of Circle 1) ---" << endl;
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Color: " << circle2.getColor() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    cout << endl;

    // 3) 세 번째 객체: 기본 생성자 (반지름 0, 색상 "none"이어야 함)
    Circle circle3;
    cout << "--- Circle 3 (Default) ---" << endl;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Color: " << circle3.getColor() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl;
    cout << endl;

    return 0;
}