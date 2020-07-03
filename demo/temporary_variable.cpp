//临时变量

#include<iostream>
using namespace std;

class Test
{
    public:
        Test() : num(0) {}
        Test(int number) : num(number){}
        void print()
        {
            cout << "num = " << num << endl;
        }
        ~Test(){cout << "destructor: this = " << this << " ,num= " << num <<endl;}

    private:
        int num;
};

//参数按值传递
void fun1(Test test)
{
    test.print();
}

//参数按引用传递（可避免产生临时变量）！！！
void fun1_t(Test & test)//对已经存在的对象做引用
{
    test.print();
}


//返回值按值传递
Test fun2()
{
    Test t(3);
    return t;
}

int main()
{
    Test t1(1);

    //fun1(t1);//会生成临时变量，使用了复制构造函数创建临时变量。然后func1内的临时变量析构。
    fun1_t(t1);//不会产生临时变量，不析构。

    fun1(2);//fun1内的临时变量析构。

    t1 = fun2();//fun2内部的局部变量t先析构。然后fun2返回的临时对象析构。
    //最后main内的t1析构
    return 0;
}