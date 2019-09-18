#include<iostream>

using namespace std;

int main()
{
  float n1,n2,n3;
  cout<<"input three number: ";
  cin>>n1>>n2>>n3;

  if((n1>=n2)&&(n1>=n3))
    cout<<n1<<" :max";
  else if ((n2>=n1)&&(n2>=n3))
    cout<<n2<<" :max";
  else
    cout<<n3<<" :max";
  
  return 0;

}
