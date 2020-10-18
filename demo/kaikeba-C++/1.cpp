#include <iostream>

//using namespace std;
using std::cout;
using std::endl;
using std::ostream;

class Point{
public:
    Point(int x, int y);
    friend ostream &operator << (ostream &out, const Point &p);
private:
    int x, y;
};

Point::Point(int x, int y):x(x), y(y){}

ostream &operator << (ostream &out, const Point &p){
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
int main(){
    Point a(3,4);
    cout << "hello world" << endl;
    cout << a << endl;
    return 0;
}


//g++ 1.cpp
//