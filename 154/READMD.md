引入头文件Clock.h，它的内容如下：
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
	
Clock * createNewClock(int h,int m,int s);
private:
	int hour;
	int minute;
	int second;
};
要求实现NewClock类，它继承至Clock类，NewClock类以12小时制显示时间。
实现NewClock类的showTime方法，在显示时间时需要显示当前是上午还是下午，上午(0-11)用“AM”表示,下午(12-23)用“PM”表示。

NewClock类构造函数输入的时间仍以24小时表示。
例如：
NewClock nc(23,4,5);
nc.showtime()
输出：
Now:11:4:5PM回车

另外，必须实现Clock类的Clock * createNewClock(int h,int m,int s)方法，它的实现如下：
Clock* Clock::createNewClock(int h,int m,int s){
	return new NewClock(h,m,s);
}
它的实现必须在NewClock类的定义之后。