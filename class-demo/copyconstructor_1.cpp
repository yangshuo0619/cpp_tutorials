#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      double getLength( void );
      Line( double len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
 //  private:
      double *ptr;
};
 
// 成员函数定义，包括构造函数
Line::Line(double len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new double;
    *ptr = len;
    cout << "new address: " << ptr << endl;
    cout << *ptr << endl<<endl;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数 init new object, 并为指针 ptr 分配内存" << endl;
    ptr = new double;
    *ptr = *obj.ptr; // 拷贝值
    cout << "new ptr: "<< ptr << endl;
    cout << "*new ptr: "<< *ptr << endl << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "old ptr: " << obj.ptr << endl;
    cout << "*old ptr: " << *obj.ptr << endl;
    
  
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
double Line::getLength( void )
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
   
   Line line1(10);
   
   cout<<"^^^^^^^^^^^^^^^^^^^^^"<<endl;   
   
   Line line2(line1);
   cout << "double* size :" << sizeof(double*) << endl << "the address between old and new object only have 4byte,32bits,0x20?? it should be 0X4O " << endl;
//    display(line1);
//    display(line2);

   return 0;
}

