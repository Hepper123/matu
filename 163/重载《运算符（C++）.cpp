#include <iostream>
using namespace std;

class Date
{
public:
    Date(int y = 1996, int m = 1, int d = 1)
    {
        day = d;
        month = m;
        year = y;
        if (m > 12 || m < 1)
        {
            month = 1;
        }
        if (d > days(y, m))
        {
            cout << "Invalid day!" << endl;
            day = 1;
        }
    };
    int days(int y, int m);
    void display()
    {
        cout << year << "-" << month << "-" << day << endl;
    }
    friend void operator<<(ostream &os, const Date &t)
    {
        os << t.year << "-" << t.month << "-" << t.day << endl;
    }

private:
    int year;
    int month;
    int day;
};

int Date::days(int y, int m)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    if (month == 2)
    {
        return year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? 29 : 28) : 29) : 28;
    }
}

int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    Date dt(y, m, d);
    cout << dt;
    return 0;
}
