#include<iostream>
using namespace std;

namespace jzy
{
  class Size
  {
    public:
    
    int width;
    int height;
    Size();
    Size(double width,double height);    
    ~Size();
    
   Size operator+(const Size& s)
   {
    Size size;
    size.width=this->width+s.width;
    size.height=this->height+s.height;
    return size;
   }

   Size operator-(const Size& s)
   {
    Size size;
    size.width=this->width-s.width;
    size.height=this->height-s.height;
    return size;
   }

    Size operator*(const Size& s)
   {
    Size size;
    size.width=this->width*s.width;
    size.height=this->height*s.height;
    return size;
   }

    Size operator/(const Size& s)
   {
    Size size;
    size.width=this->width/s.width;
    size.height=this->height/s.height;
    return size;
   }

  friend std::ostream &operator<<(std::ostream &os, const Size &size){
            return os << "[" << size.width << "," << size.height << "]";}

  };
  
  Size::Size()
  {
  }

  Size::Size(double wid,double hei)
  {
    width=wid;
    height=hei;
  }

  Size::~Size()
  {
  }

}

int main()
{
 
 // using jzy::Size;
  using namespace jzy;

  Size a(10,10);
  cout<<a<<endl;
 
  Size b(10,10);
  cout<<b<<endl; 
  
  cout<<a+b<<endl;
  cout<<a-b<<endl;
  cout<<a*b<<endl;
  cout<<a/b<<endl;

  return 0;

}


      










