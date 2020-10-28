#include<iostream>

using namespace std;

class Box
{
public:
  friend void printWidth(Box box);
  void setWidth(double wid);
private:
  double width;
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
  //cout << box.width << endl;
  printWidth(box);

  return 0;
}

