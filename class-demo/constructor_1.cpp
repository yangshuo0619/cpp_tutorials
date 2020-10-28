#include<iostream>

using namespace std;

class Line
{
  public:
    void setLength(double len);
    double getLength(void);
    Line(double len);

  private:
    double length;
};

Line::Line(double len)
{
  cout<<"object is being created,length= "<<len<<endl;
  length=len;

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
  Line line(10);
  cout<<"length of line: "<<line.getLength()<<endl;

  line.setLength(50.0);
  cout<<"length of line:"<< line.getLength()<<endl;
 
  return 0;

}



