#include "CPoint.h"
#include <cmath>

Rectangle::Rectangle(float xx, float yy, float w, float h) : Point(xx, yy)
{
    width = w;
    high = h;
}

float Rectangle::Area()
{
    return width * high;
}

Circle::Circle(float xx, float yy, float r) : Point(xx, yy)
{
    radius = r;
}

float Circle::Area()
{
    float pi = 3.14;
    return pi * radius * radius;
}

int main()
{
    Rectangle rect(1, 2, 3, 4);
    cout<<rect.Area(); //12
    Circle c(5, 6, 7);
    cout<<c.Area(); //153.86
    system("pause");
}