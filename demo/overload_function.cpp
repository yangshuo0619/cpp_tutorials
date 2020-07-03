#include<iostream>
#include<string>

using namespace std;

class printData
{
  public:
    void print(int i)
    {
      cout << "int: " << i << endl;
    }

    void print(double f)
    {
      cout << "float: " << f << endl;
    }
    
    void print(char c[])
    {
      cout << "char: " << c << endl;
    }

    void print(const char c[])
    {
      cout << "char: " << c << endl;
    }
};

int main(void)
{
  printData pd;

  pd.print(5);
  pd.print(400.22);
  
  string s = "hello kitty";
  cout << s <<endl;


  char c[] = "hello kitty";
  cout << c << endl;
  pd.print(c);
 
  pd.print("hello,world");

  return 0;
}

/*
重载：overload是同一个函数的不同版本之间参数不同。
是编写一个与已有函数同名但参数表不同的方法。
1.方法名要相同
2.参数列表必须不相同，与参数列表的顺序无关。
3.返回值类型可以不相同。
（重载由编译器在编译阶段完成）

重写：override是派生类重写基类的虚函数
1.只有虚方法和抽象方法才能被复写。
2.相同的函数名
3.相同的参数列表
4.相同的返回值类型

 */