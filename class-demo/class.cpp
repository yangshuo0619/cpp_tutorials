#include <iostream>

using namespace std;

//类可以定义为 描述对象行为/状态的模板/蓝图。
class Box
{
  public:
    double length;
    double breadth;
    double height;
  
};

int main()
{
  Box a;
  Box b;
  double volume = 0.0;
 

  a.height = 5.0;
  a.breadth = 6.0;
  a.length = 7.0;


  b.height = 10.0;
  b.breadth = 13.0;
  b.length = 12.0;

  volume = a.height * a.breadth * a.length;
  cout << "a volume: " << volume << endl;

  volume = b.height * b.breadth * b.length;
  cout << "a volume: " << volume << endl;
  return 0;
}
