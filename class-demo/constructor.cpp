#include<iostream>

using namespace std;

class Line
{
  public:
    void setLength(double len);
    double getLength(void);
    Line();

  private:
    double length;
};

Line::Line(void)
{
  cout<<"object is being created"<<endl;
}

void Line::setLength(double len)
{
  length=len;
}

double Line::getLength(void)
{
  return length;
}

int main()
{
  Line line;
 
  line.setLength(50.0);
  
  cout<<"length of line:"<< line.getLength()<<endl;
 
  return 0;

}



