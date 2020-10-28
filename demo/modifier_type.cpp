// C++ 允许在 char、int 和 double 数据类型前放置修饰符。修饰符用于改变基本类型的含义，
// 下面列出了数据类型修饰符：

//     signed
//     unsigned
//     long
//     short


#include <iostream>
using namespace std;
 
/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
   short int i;           // 有符号短整数,2 bytes, signed short int	2 个字节  -32768 到 32767 -2^15 ~ 2^15-1
   short unsigned int j;  // 无符号短整数,2 bytes,max: 2^16-1 : 65535                           
 
   j = 50000;
 
   i = j;           //50000-32767=17233 - 32769 = -15536 ??
   cout << i << " " << j;
 
   return 0;
}


/*类型限定符

类型限定符提供了变量的额外信息。
限定符	            含义
const	    const 类型的对象在程序执行期间不能被修改改变。
volatile	修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。 */