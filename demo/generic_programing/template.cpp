/*
函数模板：
是一种抽象的 函数定义 ，代表一类同构函数。eg,generic_programing 中的max; 他是根据 用户 提供的具体参数，C++编译器 在编译时刻将函数模板实例化，
根据同一个模板创建出不同的具体函数。eg，max(1,2); max('a','c');
函数模板的定义格式如下：
template<TYPE_LIST,ARG_LIST>Function_Definition
Function_Definition:函数定义
TYPE_LIST:类型参数表
ARG_LIST:变量表

类模板： 
是一种 更高层次的抽象的 类定义;
template<<模板参数表>>
class <类模板名>
{类模板定义体}
*/

//eg，定义一个平面的点point类，两个成员变量，横坐标，纵坐标;
//坐标可以是int,float,double
//通过类模板，只需要写一个类

#include<iostream>
using namespace std;

template <class T1, class T2>

class Point_T
{
public:
    T1 a;//a为T1类型
    T2 b;//b为T2类型

    Point_T() : a(0),b(0){} //默认构造函数
    Point_T(T1 ta, T2 tb) : a(ta),b(tb){} //带参数的构造函数

    Point_T<T1,T2>& operator = (Point_T<T1,T2> &pt); //赋值函数
    friend Point_T<T1,T2> operator + (Point_T<T1,T2> &pt1,Point_T<T1,T2> &pt2);//重载+
};
 
template<class T1, class T2>
Point_T<T1, T2>&  Point_T<T1,T2>::operator = (Point_T<T1,T2> &pt)
{
    this->a = pt.a;
    this->b = pt.b;
    return *this;
}

template<class T1, class T2>
Point_T<T1, T2> operator + (Point_T<T1, T2> &pt1, Point_T<T1, T2> &pt2)
{
    Point_T<T1,T2> temp;
    temp.a = pt1.a + pt2.a;
    temp.b = pt1.b + pt2.b;
    return temp;
}

template<class T1, class T2>
ostream& operator << (ostream &out, Point_T<T1, T2> &pt)
{
    out << "(" << pt.a << "," << pt.b << ")";
    return out;
}

int main()
{
    Point_T<int,int> intpt1(1,3);
    Point_T<int,int> intpt2(2,4);
    Point_T<float,float> floatpt1(1.5f,3.5f);

    Point_T<int,int> intTotalPt = intpt1 + intpt2;

    cout << intTotalPt;

    return 0;
}

//通过类模板 Point_T 可以创建不同的类，可以提高代码的可维护性;
//函数模板：重点是模板，eg,max
//模板函数：重点是函数，eg,max<int>

//类模板：用于生产类，eg,Point_T
//模板类：由一个模板生成的类，eg,Point_T<int,int>

//函数模板 和 类模板的区别：
//函数模板不一定指明T的类型，eg,max(2,5),函数模板max的实例化是由编译程序在处理函数调用时自动完成的。
//调用max(1,2)会自动生成实例max<int>.
//也可以显示指定T的类型，max<float>(2.2f,4.2f);

//类模板必须显示之指定T的类型