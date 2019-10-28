#include<iostream>
#include<string>

using namespace std;

template <typename T>
inline T const& Max(T const& a,T const& b)
{
  return a<b ? b : a;
}

int main()
{
  int i=39;
  int j=20;

  cout<<"MAX(i,j):"<<Max(i,j)<<endl;

  double f1=13.1;
  double f2=9.2;
  cout<<"MAX(f1,f2):"<<Max(f1,f2)<<endl;

  string s1="hello";
  string s2="world";
  cout<<"MAX(s1,s2):"<<Max(s1,s2)<<endl;

  return 0;

}


