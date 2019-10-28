#include<iostream>
#include<cstdlib>
#include<pthread.h>

using namespace std;

#define NUM_THREADS 5

void* PrintHello(void *threadid)
{
  int tid=*( (int*)threadid );//对传入的参数做强制类型转换，由>无类型指针变为整型数指针

  cout<<"hello runoob! thread ID, "<<tid<<endl;
  pthread_exit(NULL);
}

int main()
{
  pthread_t threads[NUM_THREADS];
  int indexes[NUM_THREADS];
  int rc;
  int i;
  for(i=0;i<NUM_THREADS;i++){
    cout<<"main(): create thread, "<<i<<endl;
    indexes[i]=i;
    rc=pthread_create(&threads[i],NULL,PrintHello,(void *)&(indexes[i]));//强制转换为void *，无类型指针
    if(rc){
      cout<<"error:can't create thread,"<<rc<<endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);
}
 
    
