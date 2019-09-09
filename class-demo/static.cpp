#include<iostream>

using namespace std;

class Box
{
  public:
    static int objectCount;
    
    Box(double l=2,double b=2,double h=2)
    {
      cout<<"constructor called. "<<endl;
      length=l;
      breadth=b;
      height=h;
    
      objectCount++;
    }

  double Volume()
  {
    return length*breadth*height;
  }

  private:
    double length;
    double breadth;
    double height;
};

int Box::objectCount=0;

int main(void)
{
  Box box1(3,4,2);
  Box box2(1,4,2);

  cout<<"total objects: "<<Box::objectCount<<endl;

  return 0;

}

