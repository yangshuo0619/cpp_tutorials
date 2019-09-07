#include<iostream>

using namespace std;

class Box
{
  double width;
public:
  friend void printWidth(Box box);
  void setWidth(double wid);
};

void Box::setWidth(double wid)
{
  width=wid;
}

void printWidth(Box box)
{
  cout<<"width of box:"<<box.width<<endl;
}

int main()
{
  Box box;
  box.setWidth(10);
  printWidth(box);

  return 0;
}

