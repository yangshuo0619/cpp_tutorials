#include<iostream>

using namespace std;

inline int Max(int x, int y)
{
  return (x>y)? x:y;
}

int main()
{
  cout<<"max(20,10):"<<Max(20,10)<<endl;
  cout<<"max (0,200):"<<Max(0,200)<<endl;
  cout<<"max(100,100):"<<Max(100,100)<<endl;

  return 0;
}

