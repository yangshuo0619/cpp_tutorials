/*
1.vector的内存增长
vector其中一个特点：
内存空间只会增长，不会减小，援引C++ Primer：为了支持快速的随机访问，vector容器的元素以连续方式存放，
    每一个元素都紧挨着前一个元素存储。设想一下，当vector添加一个元素时，为了满足连续存放这个特性，都需要重新分配空间、拷贝元素、撤销旧空间，
这样性能难以接受。因此STL实现者在对vector进行内存分配时，其实际分配的容量要比当前所需的空间多一些。就是说，vector容器预留了一些额外的存储区，
用于存放新添加的元素，这样就不必为每个新元素重新分配整个容器的内存空间。
    在调用push_back时，每次执行push_back操作，相当于底层的数组实现要重新分配大小；这种实现体现到vector实现就是每当push_back一个元素,
都要重新分配一个大一个元素的存储，然后将原来的元素拷贝到新的存储，之后在拷贝push_back的元素，最后要析构原有的vector并释放原有的内存。
例如下面程序: 

2.vector的内存释放
由于vector的内存占用空间只增不减，比如你首先分配了10,000个字节，然后erase掉后面9,999个，留下一个有效元素，但是内存占用仍为10,000个。
所有内存空间是在vector析构时候才能被系统回收。empty()用来检测容器是否为空的，clear()可以清空所有元素。
但是即使clear()，vector所占用的内存空间依然如故，无法保证内存的回收。
如果需要空间动态缩小，可以考虑使用deque。如果vector，可以用swap()来帮助你释放内存。具体方法如下：
    vector<Point>().swap(pointvec);
    或者：
    pointvec.swap(vector<Point>())

    swap()是交换函数，使vector离开其自身的作用域，从而强制释放vector所占的内存空间.
    就是把空值和需要释放的数据地址交换下，脱离当前作用域，临时的vector自然也就释放掉了。

    总而言之，释放vector内存最简单的方法是vector<Point>().swap(pointVec)。
    当时如果pointVec是一个类的成员，不能把vector<Point>().swap(pointVec)写进类的析构函数中，
    否则会导致double free or corruption (fasttop)的错误，原因可能是重复释放内存。
    (前面的pointVec.swap(vector<Point> ())用G++编译没有通过)

3.其他情况释放内存

如果vector中存放的是指针，那么当vector销毁时，这些指针指向的对象不会被销毁，那么内存就不会被释放。
如下面这种情况，vector中的元素时由new操作动态申请出来的对象指针：

#include <vector> 
using namespace std; 

vector<void *> v;

每次new之后调用v.push_back()该指针，在程序退出或者根据需要，
用以下代码进行内存的释放：

for (vector<void *>::iterator it = v.begin(); it != v.end(); it ++) 
    if (NULL != *it) 
    {
        delete *it; 
        *it = NULL;
    }
v.clear();  

*/

#include<iostream>
//#include<cstdlib>
#include<vector>

using  namespace std;

class Point
{
    public:
        Point(){cout << "construction;" << endl;};
        Point(const Point& p)
        {
            cout << "copy constuction;" << endl;
        }
        ~Point()
        {
            cout << "destruction;" << endl;
        }
};

int main()
{   
    
    vector<Point> pointvec;
    Point a;
    Point b;
    pointvec.push_back(a);//此时vector会申请一个内存空间，并调用拷贝构造函数将a放到vector中
    pointvec.push_back(b);
    //此时内存不够，需要扩大内存，重新分配内存，这时再调用拷贝构造函数将a拷贝到新的内存，再将b烤入到新的内存，
    //同时调用point拷贝构造函数，最后释放原来的内存。此时调用point析构函数

    cout << pointvec.size() << endl;
     vector<Point>().swap(pointvec);
     //pointvec.swap(vector<Point>());error?
   
    return 0;
}