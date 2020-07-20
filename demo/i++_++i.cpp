#include<stdio.h>

int main()
{

    //i++ 和 ++i 的区别
    int i = 8;
    printf("%d\n",++i);//先自增，再打印
    printf("%d\n",--i);

    printf("%d\n",i++);//先打印，再自增
    printf("%d\n",i--);

    printf("%d\n",-i++);//先打印-i，i再自增1;
    printf("%d\n",-i--);//先打印-i, i再自减1;
    printf("-------\n");

    //i++ 和 ++i 的效率
    int x = 0;
    int y = 0;

    x++;
    ++x;

    y = x++; // y = 2;
    printf("%d\n",y);
    y = ++x; // y = 4;
    printf("%d\n",y);
    /*
    对于内建数据类型，i++ 和 ++i 效率是没有区别的;
    对于自定义数据类型（主要是指类），前缀式（++i)可以返回对象的引用，而后缀式（i++）必须返回对象的值。
    导致产生了较大的复制开销，引起效率降低。因此对于自定义类型，尽量使用前缀式递增/递减。!!! */


    return 0;
}