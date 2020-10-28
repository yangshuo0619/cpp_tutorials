/*
vector定义：
template<class _Ty, class _A = allocator<_Ty> > //_Ty表示vector中存储的元素类型，_A 为 allocator<_Ty> 类型, allocator是内存配置器
                                                //负责提供内存管理（包含内存分配，释放，自动回收）
class vector //vector支持随机访问，内部使用动态数组的方式实现。进行insert或push_back增加元素时，如果动态数组的内存不够用，就要重新重新分配，
             //一般是当前大小的两倍，然后把原始数组的内容拷贝过去，注意： 如果频繁的进行内存的重新分配，会导致效率低下。可以先使用reserve()函数
             //设置其容量大小，避免出现频繁的容量扩充操作。
             //且内部使用allocator管理内存，程序员不需要自己操作内存
{                         

}

 */

#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    //vector内存 capacity()
    vector<int> v;
    cout << v.capacity() << endl;//初始时无元素，容量为0

    v.push_back(1);
    cout << v.capacity() << endl;//容量为1
    
    v.push_back(2);
    cout << v.capacity() << endl;//容量为2

    v.push_back(3);
    cout << v.capacity() << endl;//容量为4

    v.push_back(4);
    cout << v.capacity() << endl;//容量为4

    v.push_back(5);
    cout << v.capacity() << endl;//容量为8，放不下的时候，就会重新分配内存，大小是之前的2倍
    
    cout << endl;

    v.reserve(10);//设置容器容量为10
    cout << v.capacity() << endl;
    cout << v.size() << endl;//size是5
                             //size 和 capacity 不同，size是数组中元素的多少，capacity是数组有多大的容量

    vector<int> v1(10);//包含10个元素，初始值为0
    cout << v1.capacity() << endl;//10 
    v1.push_back(1);
    cout << v1.capacity() << endl;//10 * 2


     //iterator1 demo
    for(vector<int>::size_type j = v.size(); j>0;j--) //size_type 是 long unsigned int,无符号整型是大于等于0的，所以j>0;
                                                      //不能用j>=0;否则程序将一直循环
    {
        cout << v[j-1] << " ";
    }
    cout << endl;
    cout << endl;

    //iterator2 demo2
    typedef vector<int> IntArray;
    IntArray array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(2);
    array.push_back(3);

    for(auto b : array)
    {cout << b << " ";}//1 2 2 3 1???


     for( IntArray::iterator it= array.begin(); it != array.end(); ++it)
    {
        if(2 == *it)
            {
                array.erase(it);//删除一个元素后，后面的内容会自动往前移，导致迭代漏项，删除一项后应使it--，从已经前移的下一个元素起继续遍历
                --it;
            }
    }

    for(IntArray::iterator it = array.begin(); it != array.end(); ++it)
    {
        cout << *it << endl;//3 ???
    }


    //list 和 vector 区别
    /*vecotr 和数组类似，拥有一段连续的内存空间，并且起始地址不变，支持随机存取。vector<int>::iterator 支持"+","+=","<"等操作符。
      list 是由双向链表实现的，内存空间可以是不连续的。只能通过指针来进行数据的访问。而list<int>::iterator不支持 “+”，“+=”，“<"等操作符。 */

    //如果需要高效的随机存取，而不在乎插入和删除的效率，就用vector. 如果需要大量的插入和删除，而不关心随机存取，使用list.
      
    //list
    list<int> list1;
    for(int i = 0; i < 8; i++)
    {
        list1.push_back(i);//整数放入list1
    }

    for(list<int>::iterator it = list1.begin(); it != list1.end(); it ++ )
    {
        if( *it % 2 == 0)
        {
            it = list1.erase(it); //得到下一个元素的位置
            it--;//再回到上一个元素的位置
        }
    }

    for(auto i : list1)
    cout << i << " ";//1 3 5 7 


    //deque(双向队列容器，是由一段一段定量的连续空间组成，是动态数组类型)
    //deque比 vector多了push_front()和pop_front两个函数，当程序需要从首尾两端进行插入或删除元素的时候，用deque.
    //deque不存在capacity()和reserve()函数。


    return 0;
}

//g++ vector_STL.cpp -std=c++11