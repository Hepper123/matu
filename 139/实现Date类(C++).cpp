#include <iostream>
#include "CDate.h"
using namespace std;

bool run(int year)
{
    return year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? true : false) : true) : false;
}

Date::Date(int y, int m, int d)
{
    year = y;
    if (m < 13 && m > 0)
    {
        month = m;
    }
    else
    {
        month = 1;
        cout << "Invalid month!" << endl;
    }
    switch (month)
    {
    case 1:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 3:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 4:
    {
        if (d > 30 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 5:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 6:
    {
        if (d > 30 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 7:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 8:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 9:
    {
        if (d > 30 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 10:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 11:
    {
        if (d > 30 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 12:
    {
        if (d > 31 || d < 1)
        {
            day = 1;
            cout << "Invalid day!" << endl;
        }
        else
        {
            day = d;
        }
        break;
    }
    case 2:
    {
        if (run(year))
        {
            if (d > 29 || d < 1)
            {
                day = 1;
                cout << "Invalid day!" << endl;
            }
            else
            {
                day = d;
            }
            break;
        }
        else
        {
            if (d > 28 || d < 1)
            {
                day = 1;
                cout << "Invalid day!" << endl;
            }
            else
            {
                day = d;
            }
            break;
        }
    }
    }
}

void Date::NewDay()
{
    day++;
    switch (month)
    {
    case 1:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 3:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 4:
    {
        if (day > 30)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 5:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 6:
    {
        if (day > 30)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 7:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 8:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 9:
    {
        if (day > 30)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 10:
    {
        if (day > 31)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 11:
    {
        if (day > 30)
        {
            day = 1;
            month++;
        }
        break;
    }
    case 12:
    {
        if (day > 31)
        {
            day = 1;
            month = 1;
            year++;
        }
        break;
    }
    case 2:
    {
        if (run(year))
        {
            if (day > 29)
            {
                day = 1;
                month++;
            }
        }
        else
        {
            if (day > 28)
            {
                day = 1;
                month++;
            }
        }
        break;
    }
    }
}

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
    {
        if (run(year))
        {
            return 29;
        }
        else
            return 28;
    }
    }
}
