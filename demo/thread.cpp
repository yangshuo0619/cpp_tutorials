#include<iostream>

#include<pthread.h>

using namespace std;

#define NUM_THREADS 5

//线程运行函数
void* say_hello(void* args)
{
  cout << "hello runoob" << endl;
  return 0;
}


//使用 pthread_create() 函数创建了 5 个线程，每个线程输出"Hello Runoob！" 
int main()
{
  // //定义线程的id变量，多个变量使用数组
  pthread_t tids[NUM_THREADS];
   
  for(int i = 0;i < NUM_THREADS; ++i)
  {
    //pthread_create(thread, attr, start_routine, arg);  thread : 指向线程标识符指针。 
    //start_routine 	线程运行函数起始地址，一旦线程被创建就会执行
    int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
  
    
    //pthread_create创建一个新的线程，创建成功函数返回0,返回不为0,则创建失败。
    if(ret != 0)
    {
      cout << "pthread_create error: error_code=" << ret << endl;
    }

  }

  pthread_exit(NULL);


}

//usage:使用 -lpthread 库编译下面的程序：

// $ g++ test.cpp -lpthread -o test.o
// $ ./test.o