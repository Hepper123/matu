引入头文件ClockAndDate.h，它的内容如下：
#include <iostream>
using namespace std;
class Clock{
public:
	Clock(int h,int m,int s){
	 hour =(h>23? 0:h);
	 minute = (m>59?0:m);
	 second = (s>59?0:m);
	}
	virtual void run(){
		second = second+1;
		if (second>59)
		{
			second =0;
			minute+=1;
		}
		if (minute>59)
		{
			minute =0;
			hour+=1;
		}
		if (hour>23)
		{
			hour =0;
		}
	}
	virtual void showTime(){
		cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
	}
	int getHour(){return hour;}
	int getMinute(){return minute;}
	int getSecond(){return second;}
	
Clock * createClockWithDate(int h,int m,int s,int year,int month,int day);
protected:
	int hour;
	int minute;
	int second;
};

class Date{
public:
	Date(int y=1996,int m=1,int d=1){
		day =d;
		year =y;
		month =m;
		if (m>12||m<1)
		{
			m=1;
		}
		if(d>days(y,m)){
			day = 1;
		}
	};
	int days(int year,int month);
	void NewDay();
	void display(){
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
protected:
	int year;
	int month;
	int day;
};

需要实现Date类的days方法，根据年和月，返回该年该月对应的天数
实现Date类的NewDay方法，该方法将Date代表的日期增加一天。

实现ClockWithDate类，它继承至Clock类和Date类，记录时间和日期
重新实现ClockWithDate类的showTime方法和run方法。
showTime方法输出当的时间和日期，先输出时间再输出日期。
run方法每次将现在的时间增加一秒，并且当时间超过23：59：59时，更新日期。

必须实现Clock类的createClockWithDate方法，它的实现必须在ClockWithDate类的定义之后，它的内容如下：
Clock* Clock::createClockWithDate(int h,int m,int s,int year,int month,int day){
	return new ClockWithDate(h,m,s,year,month,day);
}