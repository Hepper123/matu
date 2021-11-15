#include "Location.h"

Location &Location::operator+(Location &offset){
    this->x = this->x+offset.x;
    this->y = this->y+offset.y;
    return *this;
}

Location &Location::operator-(Location &offset){
    this->x = this->x-offset.x;
    this->y = this->y-offset.y;
    return *this;
}

int main(){
    Location a(1, 2), b(2, 3);
    a = a-b;
    cout<<a.getX()<<" "<<a.getY()<<endl;
    system("pause");
    return 0;
}