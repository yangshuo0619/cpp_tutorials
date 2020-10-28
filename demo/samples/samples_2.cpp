#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  double a;
  cout<<"input number: "<<endl;
  cin>>a;
  cout<<"output: "<<a<<endl;


  cin.ignore(); 
  cout<<"input char: "<<endl;
  char c[10];
  cin.getline(c,10);
  cout<<"output: "<<c<<endl;
 
  return 0;

}

