#include "ClockAndDate.h"
#include <iostream>
using namespace std;

int Date::days(int year, int month)
{
    switch (month)
    {
    case 1:
        return 31;
    case 3:
        return 31;
    case 4:
        return 30;
    case 5:
        return 31;
    case 6:
        return 30;
    case 7:
        return 31;
    case 8:
        return 31;
    case 9:
        return 30;
    case 10:
        return 31;
    case 11:
        return 30;
    case 12:
        return 31;
    case 2:
        return year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? 29 : 28) : 29) : 28;
    }
}

void Date::NewDay()
{
    day++;
    if (day > this->days(year, month))
    {
        month++;
        day = 1;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}
