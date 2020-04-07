/* #define 预处理

#define 预处理指令用于创建符号常量。该符号常量通常称为宏，指令的一般形式是：

#define macro-name replacement-text */



/* 有几个指令可以用来有选择地对部分程序源代码进行编译。这个过程被称为条件编译。 */

#include <iostream>
using namespace std;
#define DEBUG
 
#define MIN(a,b) (((a)<(b)) ? a : b)
 
int main ()
{
   int i, j;
   i = 100;
   j = 30;

#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif
 
#if 0
//#if 1 //will be run
   /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif
 
   cout <<"The minimum is " << MIN(i, j) << endl;
 
#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif
    return 0;
}
