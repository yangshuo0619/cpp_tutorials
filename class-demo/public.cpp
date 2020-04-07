#include<iostream>

using namespace std;

class Line
{
  public:
	  double length;
	  void setLength(double len);
	  double getLength(void);
};

double Line::getLength(void)
{
  return length;
}

void Line::setLength(double len)
{
  length = len;
}

int main()
{
  Line line;

  line.length=4;
  cout << "getlength: " << line.getLength() << endl;
  cout << "line.length: " << line.length << endl;
 
  line.setLength(9);
  cout << "getlength: " << line.getLength() << endl;
  cout << "line.length: "<< line.length << endl;
 
  return 0;

};


