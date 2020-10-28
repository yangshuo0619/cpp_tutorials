#include<stdio.h>
#include<iostream>

int value = 0;

void printvalue(){
    printf("value =  %d; \n",value);
};

int main()//main函数内不能再定义其他函数，即C++不支持函数的嵌套定义，但是函数的嵌套调用可以
{

    int value = 1;
    printvalue();//打印全局变量value = 0;

    ::value = 2;//:: 是域操作符，可以直接操作全局变量;
    printvalue();//打印全局变量value = 2;

    return 0;
}


