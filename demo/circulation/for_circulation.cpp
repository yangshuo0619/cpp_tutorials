// for 循环的语法：

// for ( init; condition; increment )
// {
//    statement(s);
// }


// #include <iostream>
// using namespace std;
 
// int main ()
// {
//    // for 循环执行
//    for( int a = 10; a < 20; a = a + 1 )
//    {
//        cout << "a 的值：" << a << endl;
//    }
 
//    return 0;
// }


// // for 语句允许简单的范围迭代：
// int my_array[5] = {1, 2, 3, 4, 5};
// // 每个数组元素乘于 2
// for (int &x : my_array)
// {
//     x *= 2;
//     cout << x << endl;  
// }
// // auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
// for (auto &x : my_array) {
//     x *= 2;
//     cout << x << endl;  
// }



#include<iostream>  
#include<string>  
#include<cctype>  
using namespace std;  
  
int main()  
{  
    string str("some string");  
    // range for 语句  
    for(auto &c : str)  
    {  
        c = toupper(c);  //turn the alphabet to the capital letters
    }  
    cout << str << endl;  
    return 0;  
}

/*
死循环：
for(;;){}
 */