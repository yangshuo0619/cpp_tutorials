/*
中断是嵌入式系统重要的组成部分，导致很多编译开发商提供一种扩展，让标准C支持中断。 
新的关键字 __interrupt,使用__interrupt关键字去定义一个中断服务子程序（ISR）。
*/

#include<stdio.h>
#define PI 3.14159

//ERROR
__interrupt double compute_area(double radius)
{
    double area = PI * radius * radius;
    return area; 
}
//ISR不能返回一个值。且不能传递参数。在许多的处理器/编译器中，浮点一般都是不可重入的。
//有些处理器/编译器需要让额外的寄存器入栈，有些处理器/编译器不允许在ISR中做浮点运算。

