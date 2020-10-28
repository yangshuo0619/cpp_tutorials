#include<iostream>

using namespace std;

class Shape
{
  public:
  virtual int getArea()=0;
  void setWidth(int w)
  {
    width=w;
  }

  void setHeight(int h)
  {
    height=h;
  }

  protected:
    int width,height;
};


class Rectangle: public Shape
{
  public:
 
    int getArea()
    {
      cout<<"rectangle class area: "<<endl;
      return (width*height);
    }
};

class Triangle: public Shape
{
  public:
    int getArea()
    {
      cout<<"triangle class area: "<<endl;
      return (width*height/2);
    }
};


int main(void)
{
 
  Rectangle rec;
  Triangle tri;

  rec.setWidth(5);
  rec.setHeight(7);
  
  cout<<"total rectangle area "<<rec.getArea()<<endl;


  tri.setWidth(5);
  tri.setHeight(7);

  cout<<"total triangle area "<<tri.getArea()<<endl;

  return 0;

}


