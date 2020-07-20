/*
完成同一功能，不同内核提供的系统调用（一个函数）是不同的.
主流的操作系统有两种，一种是Windows系统，另一种是Linux系统。由于操作系统的不同，API又分为Windows API和Linux API。
在Windows平台开发出来的软件在Linux上无法运行，在Linux上开发的软件在Windows上又无法运行，这就导致了软件移植困难，
POSIX(Protabl Operation System 可移植操作系统规范)应运而生。


著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
可移植操作系统接口Portable Operating System Interface of UNIX，POSIX标准定义了操作系统应该为应用程序提供的接口标准，
是IEEE为要在各种UNIX操作系统上运行的软件而定义的一系列API标准的总称。
 */


/*
多线程是多任务处理的一种特殊形式，多任务处理允许让电脑同时运行两个或两个以上的程序。
一般情况下，两种类型的多任务处理：基于进程和基于线程。

   => 基于进程的多任务处理是程序的并发执行。
   => 基于线程的多任务处理是同一程序的片段的并发执行。

！！！！！！！！！进程是资源分配的最小单位，线程是CPU调度的最小单位。

多线程程序包含可以同时运行的两个或多个部分。这样的程序中的每个部分称为一个线程，每个线程定义了一个单独的执行路径。

本教程假设您使用的是 Linux 操作系统，我们要使用 POSIX 编写多线程 C++ 程序。
POSIX Threads 或 Pthreads 提供的 API 可在多种类 Unix POSIX 系统上可用，比如 FreeBSD、NetBSD、GNU/Linux、Mac OS X 和 Solaris。
 */


#include<iostream>
#include<cstdlib>
#include<pthread.h>

using namespace std;

#define NUM_THREADS 5

void* PrintHello(void *threadid)   
{
  int tid=*( (int*)threadid );//对传入的参数做强制类型转换，由 无类型指针 变为 整型数指针 ，再解引用

  cout << "hello runoob! thread ID, " << tid << endl;
  pthread_exit(NULL);

}


//使用 pthread_create() 函数创建了 5 个线程，每个线程输出"Hello Runoob！":

int main()
{
  //定义线程的id变量，多个变量使用数组
  pthread_t threads[NUM_THREADS];//线程标识符

  int indexes[NUM_THREADS];
  int rc;
  int i;

  for(i = 0;i < NUM_THREADS; i++){
    cout << "main(): create thread, " << i << endl;
    indexes[i] = i;
    //pthread_create创建一个新的线程，创建成功函数返回0,返回不为0,则创建失败。
    //pthread_create (thread, attr, start_routine, arg) 
    //arg 	运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。
    rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&(indexes[i]));//强制转换为void *，无类型指针
      
    if(rc){
      cout << "error:can't create thread," << rc << endl;
      exit(-1);
    }
  }
  //终止线程，显式的退出线程。
  pthread_exit(NULL);
}
 
    
//usage:使用 -lpthread 库编译下面的程序：

// $ g++ test.cpp -lpthread -o test.o
// $ ./test.o