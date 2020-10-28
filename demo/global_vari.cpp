#include<iostream>

using namespace std;

//在所有函数外部声明的变量，称为全局变量。
//global variable
int g=1;

int main()
{
  int a, b;

  cout << g << endl;

  a = 10;
  b = 2;
  g = a + b;

  cout << g;

  return 0;

}

// 当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。
//定义全局变量时，系统会自动初始化为下列值：
// 数据类型	初始化默认值
// int 	0
// char 	'\0'
// float 	0
// double 	0
// pointer 	NULL 