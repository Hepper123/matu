#include <iostream>
#include <cstring>
using namespace std;

class Table{
    private:
    float high;
    public:
    Table(float high){
        this->high = high;
    }
    float GetHigh(){
        return high;
    }
};

class Circle{
    private:
    float r;
    public:
    Circle(float r){
        this->r = r;
    }
    float GetArea(){
        return 3.14*r*r;
    }
};

class RoundTable:public Circle, public Table{
    private:
    char color[10];
    public:
    RoundTable(float r, float high, char* color):Circle(r), Table(high){
        strcpy(this->color, color);
    }
    char *GetColor(){
        return color;
    }
};

int main(){
    float radius,high;
	char color[20];
	cin>>radius>>high>>color;
	
	RoundTable RT(radius,high,color);
	cout<<"Area:"<<RT.GetArea()<<endl;
	cout<<"High:"<<RT.GetHigh()<<endl;
	cout<<"Color:"<<RT.GetColor()<<endl;
    system("pause");
	return 0;
}
