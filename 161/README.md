下列程序的输出结果为2，请将程序补充完整（提交时需要提交一个完整的源文件，不能只提交填空部分）
#include <iostream>
using namespace std;
class Base{
public:
	___①___void fun(){cout<<1<<endl;}
};
class Derived:public Base{
public:
	void fun(){cout<<2<<endl;}
};
int main(){
	Base *p = new Derived;
	p->fun();
	delete p;
	return 0;
}
