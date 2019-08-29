#include<iostream>

using namespace std;

class Box
{
  public:
    double length;
    void setWidth(double wid);
    double getWidth(void);
  private:
    double width;
};

void Box::setWidth(double wid)

{
  width=wid;
}

double Box::getWidth(void)
{
  return width;
}

int main()
{
  Box box;
 // box.width=4;
 // cout<<"box.width "<<box.width<<endl;

  box.setWidth(9);
 // cout<<"box.width "<<box.width<<endl
  cout<<"box.getWidth "<<box.getWidth()<<endl;

  return 0;
}

