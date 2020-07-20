/*
泛型编程：
泛型编程指编写完全一般化 并可重复使用的算法。泛型，是指具有在 多种数据类型 上皆可操作的含义，在C++中实际上就是使用模板实现。
使用泛型编程可以极大的增加代码的重用性。
 */

//eg.
#include<iostream>

template <class T> //class也可用typename替换
T max(T a,T b)//参数 和 返回值 也是T 类型
{
    return a > b ? a : b;
}

int main()
{
    std::cout << max(1,2);
    std::cout << max(1.5f,2.5f);
    std::cout << max(1.55l,2.55l);
    std::cout << max('a','c');
    std::cout << max<int>(3,5.6);

    return 0;
}