/*
所有的 C++ 程序都有以下两个基本要素：
语句：执行动作，即函数。
数据：程序的信息

封装 ：面向对象编程中的把数据和函数绑定在一起。避免受到外界干扰，即实现 数据隐藏。。。
数据抽象 : 只向用户暴露接口 而把具体的实现细节隐藏起来，即为 数据抽象 

通过创建 类 class 来支持 封装 和 数据隐藏。（public公有,protected保护,private私有). */

#include<iostream>
using namespace std;

class Adder{
    public:
    //构造函数
    Adder(int i = 0)
    {
      total = i;
        
    }
    //对外接口
    void addNum(int number)
    {
        total += number;
    }
    //对外接口
    int getTotal()
    {
        return total;
        
    }

    private:
    //对外隐藏的数据
        int total;
};

int main()
{
    Adder adder;
    adder.addNum(10);
    adder.addNum(20);
    
    cout << adder.getTotal();
    return 0;
}
