#include<iostream>
using namespace std;

namespace jzy
{
  class Size
  {
    public:
    
    int width;
    int height;
    Size(double width,double height);    
    ~Size();
    
   Size operator+(const Size& s)
   {
    Size size(0,0);
    size.width=this->width+s.width;
    size.height=this->height+s.height;
    return size;
   
   }

  friend std::ostream &operator<<(std::ostream &os, const Size &size){
            return os << "[" << size.width << "," << size.height << "]";}

  };
  

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
  
  std::cout<<a+b<<endl;

  return 0;

}


      










