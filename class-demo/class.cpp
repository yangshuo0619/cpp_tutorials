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

/*
与struct的区别
C语言：struct 只是一种复杂数据类型定义，不能用于面向对对象编程。
C++语言：对于成员访问权限及继承方式：class默认是private,struct是public的。
        class可以用于表示模板类型，struct不行。
 */
