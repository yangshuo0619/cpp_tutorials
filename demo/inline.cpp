/*
内联函数的作用：
引入内联函数的目的是：用它来替代C语言中表达式形式的宏定义 来解决程序中 函数调用的 效率问题。
C语言中： #define ExpressionName(var1,var2) (var1+var2)*(var1-var2)
使用预处理器实现，没有了 参数压栈，代码生成  等一系列操作。因此效率高。

inline定义的类的内联函数，函数的代码被放到符号表中， 在使用时直接进行替换，没有了调用的开销，效率高。
类的内联函数是一个真正的函数。编译器在调用一个内联函数时，首先会检查他的参数类型，保证调用正确。

使用 inline函数 可以完全取代表达式形式的宏定义。

内联函数在C++类中应用最广的，是用来定义存取函数。！！！
即定义读写成员函数为内联函数。

 */
#include<iostream>

using namespace std;

//demo1：
inline int Max(int x, int y)
{
  return (x>y) ? x:y;
}

//demo2
class A
{
    private:
      int n;
    public:
      int read()//类中定义的函数都是内联函数！！！。
      {
        return n;
      }
      void set(int i);
    
};

inline void A::set(int i)//内联函数
{
    n = i;
};

int main()
{
  //demo1
  cout << "max(20,10):" << Max(20,10) << endl;
  cout << "max (0,200):" << Max(0,200) << endl;
  cout << "max(100,100):" << Max(100,100) << endl;
  
  return 0;
}

/*
内联函数和宏的区别：
内联函数是在编译时展开，宏是在预编译时展开。
编译的时候，内联函数可以直接镶嵌到目标代码中，而宏只是一个简单的文本替换。
内联函数可以完成类型检测，语句是否正确的编译功能，宏不具有这些功能。
宏不是函数，inline是函数。
 */