/* 
内存的分配方式：
1.从 静态存储区 分配. 内存在程序编译的时候就已经分配好，这块内存在程序的整个运行期间都存在，eg，全局变量。
2.在 栈上创建。 执行函数时，函数内局部变量的存储单元 都可以在栈上创建，函数执行结束时这些存储单元自动被释放。
3.从堆上分配，也叫 动态内存分配。 程序在运行的时候用malloc 或 new 申请内存，程序员负责在何时用free或delete释放内存。动态内存的生存期由我们决定。
*/

//动态内存的传递
#include<iostream>
#include<string.h>

using namespace std;

//二维指针做参数传递
void GetMemory2(char **p,int num)
{
    *p = (char*)malloc(sizeof(char) * num);

}

//指针的引用做参数传递
void GetMemory3(char* &p,int num)
{
    p = (char*)malloc(sizeof(char) * num);
}

//返回堆内存指针
char *GetMemory4(int num)
{
    char *p = (char*)malloc(sizeof(char) * num);
    return p;
}


int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    char *str3 = NULL;
    char *str4 = NULL;

    GetMemory2(&str2,20);
    GetMemory3(str3,20);
    str4 = GetMemory4(20);

    strcpy(str2,"getmemory 2");
    strcpy(str3,"getmemory 3");
    strcpy(str4,"getmemory 4");
    
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;

    free(str2);
    free(str3);
    free(str4);//把堆内存释放

    str2 = NULL;str3 = NULL;str4 = NULL;

    return 0;

    

}


