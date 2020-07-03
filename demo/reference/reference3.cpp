//参数引用
#include<iostream>
using namespace std;

const float pi = 3.14f;
float f;

float s1(float r)
{
    f = r * r * pi;
    return f;
} //s1返回的是全局变量f的值。

float& s2(float r)
{
    f = r * r * pi;
    return f;
} //s2返回的是全局变量f的引用。

int main()
{
    float s1(float = 5); //声明函数s1（）的默认参数调用，默认参数为5
    float& s2(float = 5);//声明函数s2（）的默认参数调用，默认参数为5

    float a = s1(); //a赋为f1()的返回值。
    cout << a << endl;

    //float &b = s1();//b赋为s1()的返回值，全局变量f的值会先赋给一个临时变量，这个变量由编译器隐式建立，
                    //再建立这个变量的引用b。这里对一个临时变量做引用会发生错误。
    // cout << b << endl;

    float c = s2(); //s2()的返回值f直接赋值给c;
    cout << c << endl;

    float& d = s2();//直接使用全局变量的引用，全局变量f的有效期长于引用d,所以是安全的
    cout << d << endl;

}