/*
复制构造函数是一种特殊的构造函数，他由编译器调用来完成一些基于同一类的其他对象的构件及初始化。
如果在类中没有显式的声明一个复制构造函数。那么编译器会私下制定一个函数来进行对象之间的位复制。 */

#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
   //private:
      int *ptr;
      //static int *ptr;     //加static也还是可以在main里访问？？
};
 
// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
    cout << "new address :" << ptr << endl;
    cout << *ptr << endl;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数 init new object,并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
    cout<<"new ptr: "<<ptr<<endl;
    cout<<"new *ptr: "<<*ptr<<endl;
    
    cout << "old ptr: " << obj.ptr << endl;
    cout << "old *ptr: " << * obj.ptr <<endl;
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;

}

 
// 程序的主函数
int main( )
{
   Line line(10); 
   Line line2(line);
   
   cout <<"^^^^^^^^^^^^"<< a << endl;   
 
   
   display(line);
 
//    cout<<"line.ptr:"<<line.ptr<<endl;
  // cout<<obj.ptr<<endl;


   return 0;
}


