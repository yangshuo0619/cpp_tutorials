/*
const 作用：
1.定义常量。const 定义的常量，编译器可以对其做数据静态类型安全检查。

2.修饰函数 形式参数。当输入参数是用户自定义类型或抽象数据类型时，应该将 按”值传递“ 改为 ”const& 传递“，可以提高效率。
eg,void fun(A a);
eg.void fun(A const& a);
第一个函数的效率低，函数体内产生A类型的 临时对象 用于 复制参数a；临时对象的构造，复制，析构过程都将耗费时间。
而第二个函数，用引用传递，不需要产生临时对象，节省了时间，但是光用引用会改变a,所以加const;

3.修饰函数的返回值。 返回值不能被直接修改，且返回值也只能被赋值给加const修饰的同类型数据。
eg,const char *Getchar(void){};
   char *ch = Getchar();        //error
   const char *ch = Getchar();  //right

4.修饰类的成员函数(函数定义体)。！！！
   任何不会修改数据成员的函数都应用const修饰，这样，不小心修改了数据成员，或调用了非const成员函数时，编译器都会报错。
eg.int GetCount(void) const;

 */


//可以使用 const 前缀声明指定类型的常量，如下所示：
//const type variable = value;


#include <iostream>
using namespace std;


/*普通形参 加不加 const限定符对实参没有影响，
引用形参和指针形参前面没有const限定符时，
实参必须是非const的，而前面有const限定符时对实参也没有什么影响。
*/

//void prtstr(const string &s)  //实参是const的，指针形参 编译报错,指针形参 必须有const限定符
      //void prtstr(string & s) //实参是const的，引用形参 编译报错,引用形参 必须有const限定符
//void prtstr(const char *s) // char ok ,string 报错
void prtstr(string s)      //普通形参没有影响
{
   cout << s << endl;
}

int main()
{
   //demo1
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;

   prtstr("hello, world");

   //demo2
   const int x =1;//x为整型常量;
   int b = 10;
   int c = 20;

   const int* a1 = &b;
   int* const a2 = &b;
   const int* const a3 = &b;

   // x = 2;//error;不能改变x的值。如果x没有初始化，那么x是一个随机数，以后也不能给他再赋值。

   a1 = &c;   //right;    a1为const int*类型，const在int*左侧，用来修饰指针所指向的变量，即指针指向为常量。所以a1指向c是允许的，但修改a1指向的内容是不允许的。常量指针
   // *a1 = 1;//error;    a1指向的内容不能修改。

   // a2 = &c;//error;    a2是int* const类型，const在int*的右侧，用来修饰指针本身，即指针本身为常量。所以修改指针本身是不允许的;但修改其内容是允许的。指针常量
   *a2 = 1;   //right

   // a3 = &c;//error;    a3是const int* const类型,指针本身不能修改，指向内容也不能修改。
   // *a3 = 1;//error;

   return 0;
}

