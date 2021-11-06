#include "Clock.h"

class NewClock:public Clock{
    public:
    NewClock(int h, int m, int s):Clock(h, m, s){
    }
    virtual void showTime()
	{
		cout << "Now:" << getHour()%12 << ":" << getMinute() << ":" << getSecond();
        if(getHour()>11){
            cout<<"PM"<<endl;
        }
        else{
            cout<<"AM"<<endl;
        }
	}
};

Clock *Clock::createNewClock(int h, int m, int s){
    return new NewClock(h, m, s);
}
