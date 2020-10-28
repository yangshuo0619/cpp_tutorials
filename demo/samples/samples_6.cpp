#include<iostream>

using namespace std;

int main()
{
  int a=1,b=2,temp;
  cout<<a<<b<<temp;

  temp=a;
  a=b;
  b=temp;

  cout<<a<<b<<temp<<endl;
  return 0;

}
