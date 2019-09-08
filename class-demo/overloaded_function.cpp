#include<iostream>

using namespace std;

class printData
{
  public:
    void print(int i)
    {
      cout<<"int: "<<i<<endl;
    }

    void print(double f)
    {
      cout<<"float: "<<f<<endl;
    }
    
    void print(char c[])
    {
      cout<<"char: "<<c<<endl;
    }
};

int main(void)
{
  printData pd;

  pd.print(5);
  pd.print(400.22);
  
  char c[]="hello kitty";
  pd.print(c);

  return 0;
}

