#include<iostream>

using namespace std;

//declare
extern int a,b;
extern int c;
extern float f;

int main()
{

//define
  int a,b;
  int c;
  float f;

//init
  a=10;
  b=2;
  c=a+b;

  cout<<c<<endl;

  f=7/3;
  cout<<f<<endl;

  return 0;

}

