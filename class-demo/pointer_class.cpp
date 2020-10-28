#include<iostream>

using namespace std;

class Box 
{
  public:
    Box(double l=2.0, double b=2, double h=2)
  {
    cout<<"constructor called."<<endl;
    length=l;
    breadth=b;
    height=h;
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


int main()
{
  Box box1(3.3,2.3,1);
  Box box2(3,2,4);
  Box *ptrBox;

  ptrBox = &box1;
  
  cout<<"**********"<<endl;
 // cout<<"box1: "<<box1<<endl;
  cout<<"box1 address: "<<&box1<<endl;
  cout<<"**********"<<endl;
//  cout<<"*ptrBox: "<<*ptrBox<<endl;
  cout<<"ptrBox:"<<ptrBox<<endl;
  cout<<"ptrBox address:"<<&ptrBox<<endl; 

  cout<<"volume of box1: "<<ptrBox->Volume()<<endl;
 // cout<<"volume of box1: "<<*ptrBox.Volume()<<endl;

  return 0;

}


