#include<iostream>

using namespace std;

//base class derive two classes 
class Shape
{
  protected:
    int width,height;
  public:
    //constructor
    Shape(int a = 0, int b = 0)
    {
      width = a;
      height = b;
      cout << "use base class constructor " << endl;
    }

  //use virtual to realize polymorphism !!!!!!!!!!
    virtual int area()
  //else only call base class function
  //int area()
  {
    cout << "parent class area:  " << endl;
    return 0;
  }

  //pure virtual function
  //virtual int area() = 0;

};

 
class Rectangle: public Shape
{
  public:
    //call base class constructor to init at first,then use constructor itself
    Rectangle( int a =  0,int b = 0) : Shape(a,b) { cout << "this is rectangle constructor"<<endl;}
    int area()
    {
      cout << "rectangle class area: "<<endl;
      return (width * height);
    }
};

class Triangle: public Shape
{
  public:
    Triangle(int a = 0,int b = 0) : Shape(a,b) {cout << "this is triangle cons" << endl;}
    int area()
    {
      cout<<"triangle class area: "<<endl;
      return (width * height / 2);
    }
};


int main()
{
  Shape *shape;//do not use constructor to init

  Rectangle rec(10,7);
  Triangle tri(10,5);

  //early binding
  shape = &rec;
  cout << shape -> area() << endl; //call derive class function

  shape = &tri;
  cout << shape -> area() << endl; //call derive class function

  return 0;

}


