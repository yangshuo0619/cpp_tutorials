/*while 循环的语法：

while(condition)
{
   statement(s);
} */

#include <iostream>
using namespace std;
 
int main ()
{
   // 局部变量声明
   int a = 10;

   // while 循环执行
   while( a < 20 )
   {
       cout << "a 的值：" << a << endl;
       a++;
   }
 
   return 0;
}

/*
死循环：
while(1)
{} 
*/