#include<iostream>

using namespace std;

class Box
{
  public:
    //static memeber variables，静态变量
    static int objectCount;
    
    Box(double l = 2,double b = 2,double h = 2)
    {
      cout << "constructor called. " << endl;
      length = l;
      breadth = b;
      height = h;
    
      objectCount ++;
      cout << objectCount << endl;
    }

    double Volume()
    {
      return length * breadth * height;
    }

    //static member function，静态函数 
    //usage: ClassName::function()
    static int getCount()
    {
      return objectCount;
    }

  private:
    double length;
    double breadth;
    double height;
};


int Box::objectCount=0;

int main(void)
{
  cout << "inital stage count: " << Box::getCount() << endl;

  Box box1(3,4,2);
  Box box2(1,4,2);

  cout << "final stage count: " << Box::getCount() << endl;

  return 0;

}

