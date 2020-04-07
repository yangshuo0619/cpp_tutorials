#include<iostream>

using namespace std;

class printData
{
  public:
    void print(int i)
    {
      cout << "int: " << i << endl;
    }

    void print(double f)
    {
      cout << "float: " << f << endl;
    }
    
    void print(char c[])
    {
      cout << "char: " << c << endl;
    }
};

int main(void)
{
  printData pd;

  pd.print(5);
  pd.print(400.22);
  
  //string c[]={"hello kitty"};
  //cout c is address => 0x7ffd225c18c0
  //cout << c <<endl;


  char c[] = "hello kitty";
  cout << c << endl;
  pd.print(c);

  return 0;
}

