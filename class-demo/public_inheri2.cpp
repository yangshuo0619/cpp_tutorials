#include<iostream>
#include<assert.h>

using namespace std;

class A
{
  public:
    int a;
    A()
    {
      a1=1;
      a2=2;
      a3=3;
      a=4;
    }
    int fun()
    {
      cout<<a<<endl;
      cout<<a1<<endl;
      cout<<a2<<endl;
      cout<<a3<<endl;
    
      return 1;
   }

  public:
    int a1;
  protected:
    int a2;
  private:
    int a3;
};

class B : public A
{
  public:
    int a;
    B(int i){
    A();
    a=i;}

    void fun()
    {
      cout<<a<<endl;
      cout<<a1<<endl;
      cout<<a2<<endl;
//       cout<<a3<<endl;
    }
};

int main()
{
  B b(10);
  cout<<b.a<<endl;
//  cout<<b.a1<<endl;
//  cout<<b.a2<<endl;
//  cout<<b.a3<<endl;
  
  int result = b.A::fun(); 
  cout << result << endl;

  return 0;
}






