#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"input a number: "<<endl;
  cin>>n;

  if (n%2==0)
    cout<<n<<": even number"<<endl;
  else
    cout<<n<<": odd number"<<endl;

  return 0;
}
