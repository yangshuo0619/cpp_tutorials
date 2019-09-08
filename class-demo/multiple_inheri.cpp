#include<iostream>

using namespace std;
 

class Shape
{
  public:
    void setWidth(int w)
    {
      width=w;
    }
    void setHeight(int h)
    {
      height=h;
    }

  protected:
    int height;
    int width;
};

class PaintCost
{
  public:
    int getCost(int area)
    {
      return area*70;
    }
};

class Rectangle : public Shape, public PaintCost
{
  public:
    int getArea()
    {
      return (width*height);
    }
};

int main(void)
{
  Rectangle Rect;
  int area;
  
  Rect.setWidth(9);
  Rect.setHeight(8);
  
  area=Rect.getArea();

  cout<<"total area: "<<area<<endl;

  cout<<"total cost: "<<Rect.getCost(area)<<endl;

  return 0;

}


