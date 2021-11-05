已知基类定义在头文件ShapeFactory.h中，类定义如下：
#pragma once

class ShapeFactory
{
public:
	 ShapeFactory(){};
	 virtual ~ShapeFactory(){};

	 virtual float Circumstance(){return 0;};
	 ShapeFactory *Create(float a,float b,float c);
	 ShapeFactory *Create(float a,float b,float c,float d);
	 ShapeFactory *Create(float r);
};
请写出三角形、四边形、圆形三个派生类，构造函数分别传入三边/四边/半径的长度（不用检查是否符合三角形、矩形、圆的条件，没有异常输出），重写出求周长的函数（Circumstance函数）。
然后实现基类的Create函数，这里重载的三个Create函数，分别生成三角形、四边形、圆形的对象。
比如三角形类为Triangle：
ShapeFactory * ShapeFactory::Create(float a,float b,float c)
{
	
	ShapeFactory *p=new Triangle(a,b,c);
	return p;
}

所有代码写在一个cpp文件中，文件名称为"学号(姓名).cpp"