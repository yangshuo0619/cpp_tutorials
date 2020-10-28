//不当使用模板可能会导致代码膨胀，即二进制代码臃肿而松散，会影响程序的运行效率。
//要把C++模板中 与参数无关的 代码分离出来                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

#include<iostream>
using namespace std;

//修改前
template<class T, int num> 
class A //类模板 A 有一个类型参数T ，一个非类型参数 int.
{
public:
    void work()
    {
        cout << "work() " << endl;
        cout << num << endl;
    }
};

//修改后
template<class T> //基类，类模板，其参数化的仅仅是类型T，而没有num. 所有持有一个给定类型的derived将共享一个单一的base类。
class Base
{
public:
    void work(int num)
    {   
        cout << "work() " << endl;
        cout << num << endl;
    }
};

template<class T, int num>
class Derived : public Base<T>
{
public:
    void work()
    {
        Base<T>::work(num);
    }
};

int main()
{
    //修改前
    A<int,1> a;
    A<int,2> b;
    A<int,3> c;//会生成不同的实例

    a.work();
    b.work();
    c.work();//会有不同的函数调用 ， 源代码紧凑，但 目标代码 却臃肿

    //修改后
    //避免代码臃肿：把C++模板中 与 参数无关的代码 分离出来
    Derived<int,1> d1;
    Derived<int,2> d2;
    Derived<int,3> d3;//实例化的模板类 都共享 base<int>模板类，成员函数都共享base<int>模板类中的work单一的复制。

    d1.work();
    d2.work();
    d3.work();

    return 0;    
}