#include <iostream>
using namespace std;
class Shape
{
public:
	Shape() {}
	~Shape() {}
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
	static Shape *createRectangle(double length, double width);
	static Shape *createCircle(double radius);
};
