#include<iostream>
//#include<assert.h>

using namespace std;

class A
{
  public:
  //constructor
    A(){
    cout << "use A constructor to init" << endl;
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a4 = 4;}

  void fun()
  {
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    cout << a4 << endl;
  }

  public:
    int a1,a4;
  protected:
    int a2;
  private:
    int a3;
};



class B : public A
{ 
  public:
    int a;
    //constructor
    B(int i){
      cout <<" use B constructor to init " << endl;
      //A();
      a=i;}

  void fun()
  {
    cout << a << endl;
    cout << a1 << endl;
    cout << a2 << endl;
    //cout << a3 << endl;
    cout << a4 << endl;
  }

};



int main()
{
  A test;
  cout << "test.a1 = "<< test.a1 << "  test.a4 = " << test.a4 << endl;
  
  B b(10);
  cout << b.a << endl;
  cout << b.a1 << endl;
 // cout<<b.a2<<endl;
  //cout<<b.a3<<endl;
  b.fun();
  
 
 // system("pause");
  return 0;
}





