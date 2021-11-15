#include "Shape.h"

class Rectangle : public Shape
{
private:
    double a, b;

public:
    Rectangle(double a, double b) : Shape()
    {
        this->a = a;
        this->b = b;
    }
    virtual double GetArea()
    {
        return a * b;
    }
    virtual double GetPerimeter()
    {
        return 2 * (a + b);
    }
};

class Circle : public Shape
{
private:
    double r;

public:
    Circle(double r) : Shape()
    {
        this->r = r;
    }
    virtual double GetArea()
    {
        return 3.14 * r * r;
    }
    virtual double GetPerimeter()
    {
        return 2 * 3.14 * r;
    };
};

Shape *Shape::createRectangle(double length, double width)
{
    return new Rectangle(length, width);
}
Shape *Shape::createCircle(double radius)
{
    return new Circle(radius);
}
