/*
一个程序在内存中可以大体划分为三个部分：
* 静态内存（局部的static对象，类static数据成员以及所有定义在函数或者类之外的变量）
* 栈内存（保存和定义在函数或者类内部的变量）
* 动态内存（这块内存池就是堆，通常通过new/malloc操作申请的内存）。 

对于静态内存 和 栈内存来说，编译器可以根据他们的定义去自动创建和销毁的相应的内存空间。
对于动态内存， 由于程序只有在运行时才知道需要分配多少内存空间，所以只能由程序员去动态的创建和回收这块内存。

当项目代码量庞大，容易发生内存泄漏的问题。为了更方便更安全的使用动态内存，C++ 提供了四种智能指针来动态管理这些对象。
auto_ptr; unique_ptr; shared_ptr; weak_ptr;(后三种是C++11的新标准)。

使用智能指针，需要引入头文件 #include <memory> 
接受参数的智能指针的构造函数是explict.
 */
#include<iostream>
#include<cstring>
#include<memory>

using namespace std;

class Test
{
    public:
    Test(){name = NULL;}

    Test(const char* strname){
        //*name = *strname;
        name = new char[strlen(strname) + 1];
        strcpy(name,strname);
    }

    Test& operator = (const char* strname){
        if(name != NULL)
        {
            delete name;
        }
        name = new char[strlen(strname) + 1];
        strcpy(name,strname);
        return *this;
    }

    void ShowName(){cout << name << endl;}

    ~Test()
    {
        if (name != NULL)
        {
            delete name;
        }
        name = NULL;
        cout << "delete name" << endl;
    }

    public:
        char*  name;
};

int main()
{
    auto_ptr<Test> Testptr(new Test("Terry")); 
    char * c = Testptr->name;
    cout << c << endl;

    Testptr->ShowName();

    *Testptr = "David";
    Testptr->ShowName();
     
    return 0;

}