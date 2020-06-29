/*

static作用：
1.在函数体内，一个被声明为 静态的变量 在这一函数被调用的过程中维持其值不变。
2.在模块内（但在函数体外），一个被声明为 静态的变量 可以被模块内所有函数访问，但不能被模块外其他函数访问。他是一个本地的全局变量。
3.在模块内，一个被声明为 静态的函数  只可被这一模块内的其他函数调用。即这个函数被限制在声明它的模块的本地范围内使用。？？？

*/

#include<iostream>

using namespace std;

class Box
{
  public:
    //static memember variables，静态成员变量
    static int objectCount;
    
    //constructor
    Box(double l = 2,double b = 2,double h = 2)
    {
      cout << "constructor called. " << endl;
      length = l;
      breadth = b;
      height = h;
    
      objectCount++;
    }

    double Volume()
    {
      return length * breadth * height;
    }

  private:
    double length;
    double breadth;
    double height;
};

int Box::objectCount = 0;

int main(void)
{

  Box box1(3,4,2);
  Box box2(1,4,2);

  cout << "total objects: " << Box::objectCount << endl;

  return 0;

}

/*
staic全局变量和普通的全局变量的区别：
存储方式一样：全局变量前加上static就构成了静态全局变量。全局变量本身就是静态存储方式，静态全局变量也是静态存储方式。两者在存储方式上没有不同。
但作用域不同：普通全局变量的作用域是整个源程序，当一个源程序是由多个源文件组成时，普通的全局变量在各个源文件中都是有效的。而静态全局变量只在
定义该变量的源文件内有效，在同一源程序的其他源文件中不能使用它。
总结：由于 静态全局变量的作用域 只在一个源文件中，只能为该源文件的函数公用，因此可以避免其他源文件中引用引起错误。
 
对于局部变量，局部变量改为静态变量后，是改变了它的存储方式。即改变了它的生存期。
而全局变量改为静态变量，是改变了他的作用域。

staic函数和普通函数的区别是，static函数在内存中只有一份，普通函数在每个被调用中维持一份复制品。
*/