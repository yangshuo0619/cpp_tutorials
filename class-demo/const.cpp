//可以使用 const 前缀声明指定类型的常量，如下所示：
//const type variable = value;



#include <iostream>
using namespace std;


/*普通形参 加不加 const限定符对实参没有影响，
引用形参和指针形参前面没有const限定符时，
实参必须是非const的，而前面有const限定符时对实参也没有什么影响。
*/

//void prtstr(const string &s)  //实参是const的，指针形参 编译报错,指针形参 必须有const限定符
      //void prtstr(string & s) //实参是const的，引用形参 编译报错,引用形参 必须有const限定符
//void prtstr(const char *s) // char ok ,string 报错
void prtstr(string s)      //普通形参没有影响
{
   cout << s << endl;
}

int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;

   prtstr("hello, world");

   return 0;
}
