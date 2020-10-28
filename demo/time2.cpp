#include<iostream>
#include<ctime>

using namespace std;

int main()
{

  time_t now=time(0);

  cout<<"1970 to now (s): "<<now<<endl;

  tm *ltm=localtime(&now);

  cout<<1900+ltm->tm_year<<endl; 
  cout<<1+ltm->tm_mon<<endl;
  cout<<ltm->tm_mday<<endl;
  cout<<ltm->tm_hour<<":";
  cout<<ltm->tm_min<<":";
  cout<<ltm->tm_sec<<endl;

}

