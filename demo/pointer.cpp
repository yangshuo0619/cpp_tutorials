/*
 C++ 的指针可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。 
 每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址.
 !!!!指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：
指针是指向另外一种类型的复合类型。
指针本身就是一个对象，允许对指针进行赋值和拷贝；指针无需在定义时赋初值。

type *var-name;
eg, 
int *ip;    一个整型的指针 
double *dp;  一个 double 型的指针 
float *fp;  一个浮点型的指针 
char *ch;   一个字符型的指针 

所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，
都是一个代表内存地址的长的 十六进制数。

定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
这些是通过使用  一元运算符 *  来返回位于操作数所指定地址的变量的值。

指针的状态:

    指向一个对象
    指向紧邻对象所占空间的下一个位置
    空指针 int *p=nullptr;
    无效指针

指针作为条件判断参数:

  例如：

if(p){}

  只要指针p不是0，那么条件就为真。

  另外值得注意的是，对于两个类型相同的指针，可以用“==”或者“！=”来比较。
若两个指针存放的地址相同，则它们相等，否则不等。


指向指针的指针

  由于指针是对象，所以指针也有自己的地址。因此，C++语言允许把一个指针指向另一个指针。 


指向常量的指针 和 常量指针:
=> 指向常量的指针（pointer to const）是说这个指针是一个普通的指针，它指向了一个常量，
   它也可以指向其他对象，并且可以令一个指向常量的指针指向另一个非常量；
=>  常量指针（const pointer）是说这个指针本身就是一个常量对象，所以它不能指向其他对象，
    但是不意味着它不能改变所指向对象的值。

int *p;       // 指针
const int *p; // 指向常量的指针
int *const p; // 常量指针




*/

#include<iostream>
using namespace std;

int main()
{
    int var1 = 10;
    cout << "var1 = " << var1 << endl;
    // "&"是取地址操作符。
    cout << "var1 address : " << &var1 << endl << endl;

    int var2[6];
    cout << "var2 = " << var2 << endl;
    cout << "var2 address : " << &var2 << endl;

    //指针
    int *ip;
    ip = &var1; 
    cout << "ip = " << ip << endl;
    //使用解引用操作符“*” ，利用指针访问对象
    cout << "*ip = " << *ip << endl;//值为 var1


    //指针的指针
    int **ipp = &ip;
    cout << "**ipp = " << **ipp << endl << endl;//值为var1
    

    //指向常量的指针 pointer to const
    const double pi = 3.1415;
    const double *pointer_pi = &pi;
    // *pointer_pi = 9; error *pointer_pi const double


    //常量指针 const pointer
    double num = 0;
    double *const const_pointer = &num;
    *const_pointer = 1;
    cout << "num = " << num << endl;//num from 0  change to 1


    
    return 0;


    }


