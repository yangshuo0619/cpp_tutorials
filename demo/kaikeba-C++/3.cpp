//C源码编译成对象文件(放置定义) .o文件，链接到可执行程序 .out
//编译: g++ -c 3.cpp => 3.o  编译阶段，在做语法检查
//查看.o文件内容: nm -C 3.o  查看.o文件内容  


#include <iostream>
#include <cstdio>

using namespace std;

int add(int, int);

int main()
{
    printf("hello world\n ");
    return 0;
}

int add(int a, int b){
    return a+b;
}