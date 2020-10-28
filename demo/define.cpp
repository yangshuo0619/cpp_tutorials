//使用 #define 预处理器定义常量的形式：

//#define identifier value

#include <iostream>
using namespace std;
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

//用define声明一个常数，用以表明一年中有多少秒
#define SECONDS_PER_YEAR (60x60x365)UL //UL表示无符号长整型

int main()
{
 
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;

}

/*
const 与 define的区别
#define PI 3.14
float angel;
angel =  30 * PI/180;

程序编译时，会将代码中的PI都换成3.14;然后进行编译。
因此，#define常量 是一个 compile-time概念 ，生命周期止于编译期，存在于程序的代码段，实际程序中，他只是一个常数，并没有实际的存在。

const 常量存在于程序的数据段。并在堆栈分配了空间。！！！！
const 常量是一个 run-time的概念，在程序中确实存在，且可以被调用，传递。

const常量是有数据类型的，而宏常量是没有数据类型的。编译器可以对const常量做类型安全检查。

 */