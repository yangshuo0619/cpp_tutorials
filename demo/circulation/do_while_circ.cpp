

/*不像 for 和 while 循环，它们是在循环头部测试循环条件。do...while 循环是在循环的尾部检查它的条件。

do...while 循环与 while 循环类似，但是 do...while 循环会确保至少执行一次循环。
*/

//  do...while 循环的语法：

// do
// {
//    statement(s);

// }while( condition );

#include <iostream>
using namespace std;
 
int main ()
{
   // 局部变量声明
   int a = 10;

   // do 循环执行
   do
   {
       cout << "a 的值：" << a << endl;
       a = a + 1;
   }while( a < 20 );
 
   return 0;
}