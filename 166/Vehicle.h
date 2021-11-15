#include <iostream>
using namespace std;

class Location
{
public:
    Location(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
    Location &operator+(Location &offset);
    Location &operator-(Location &offset);

    int getX() { return x; }
    int getY() { return y; }

private:
    int x;
    int y;
};
