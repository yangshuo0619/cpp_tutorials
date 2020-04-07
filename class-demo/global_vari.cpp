#include<iostream>

using namespace std;

//global variable
int g=1;

int main()
{
  int a,b;

  cout << g << endl;

  a = 10;
  b = 2;
  g = a + b;

  cout << g;

  return 0;

}
