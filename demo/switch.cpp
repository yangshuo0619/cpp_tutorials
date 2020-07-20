//  switch 语句的语法：
// switch(expression){
//     case constant-expression  :
//        statement(s);
//        break; // 可选的
//     case constant-expression  :
//        statement(s);
//        break; // 可选的
  
//     // 您可以有任意数量的 case 语句
//     default : // 可选的
//        statement(s);
// }


// switch 语句中的 expression 必须是一个整型或枚举类型，
// 或者是一个 class 类型，其中 class 有一个单一的转换函数将其转换为整型或枚举类型。

#include <iostream>
using namespace std;
 
int main ()
{
   // 局部变量声明
   char grade = 'D';
 
   switch(grade)
   {
   case 'A' :
      cout << "很棒！" << endl; 
      break;
   case 'B' :
   case 'C' :
      cout << "做得好" << endl;
      break;
   case 'D' :
      cout << "您通过了" << endl;
      break;
   case 'F' :
      cout << "最好再试一下" << endl;
      break;
   default :
      cout << "无效的成绩" << endl;
   }
   cout << "您的成绩是 " << grade << endl;
 
   return 0;
}
