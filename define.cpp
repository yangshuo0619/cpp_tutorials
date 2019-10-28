#include<iostream>
using namespace std;

#define DEBUG

#define MIN(a,b) ( (a)<(b) ? a : b)

int main()
{
  int i,j;
  i=100;
  j=30;

#ifdef DEBUG
  cerr<< "trace: inside main function"<<endl;
#endif

#if 0

  cout<<MKSTR(HELLO C+=)<<endl;

#endif 

  cout<<"the minimum is"<<MIN(i,j)<<endl;

#ifdef DEBUG
  cerr<<"trace: coming out of main function"<<endl;
#endif

  return 0;

}

