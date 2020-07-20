#include<iostream>

using namespace std;

class Line
{
  public:
    void setLength(double len);
    double getLength(void);
    Line();

  private:
    double length;
};

Line::Line(void)
{
  cout<<"object is being created"<<endl;
}

void Line::setLength(double len)
{
  length=len;
}

double Line::getLength(void)
{
  return length;
}

int main()
{
  Line line;
 
  line.setLength(50.0);
  
  cout<<"length of line:"<< line.getLength()<<endl;
 
  return 0;

}

//构造函数可以被重载，因为构造函数可以有多个，且可以带参数。
//析构函数不可以被重载，因为析构函数只能有一个，且不能带参数。


