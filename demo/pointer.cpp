/*
 C++ 的指针可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。 
 每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址.
 !!!!指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：
指针是指向另外一种类型的复合类型。
指针本身就是一个对象，允许对指针进行赋值和拷贝；指针无需在定义时赋初值。

type *var-name;
eg, 
int *ip;    一个整型的指针 
double *dp;  一个 double 型的指针 
float *fp;  一个浮点型的指针 
char *ch;   一个字符型的指针 

所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，
都是一个代表内存地址的长的 十六进制数。

定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
这些是通过使用  一元运算符 *  来返回位于操作数所指定地址的变量的值。

指针的状态:

    指向一个对象
    指向紧邻对象所占空间的下一个位置
    空指针 int *p=nullptr;
    无效指针

指针作为条件判断参数:

  例如：

if(p){}

  只要指针p不是0，那么条件就为真。

  另外值得注意的是，对于两个类型相同的指针，可以用“==”或者“！=”来比较。
若两个指针存放的地址相同，则它们相等，否则不等。


指向指针的指针

  由于指针是对象，所以指针也有自己的地址。因此，C++语言允许把一个指针指向另一个指针。 


指向常量的指针 和 常量指针:
=> 指向常量的指针（pointer to const）是说这个指针是一个普通的指针，它指向了一个常量，
   它也可以指向其他对象，并且可以令一个指向常量的指针指向另一个非常量；
=>  常量指针（const pointer）是说这个指针本身就是一个常量对象，所以它不能指向其他对象，
    但是不意味着它不能改变所指向对象的值。

int *p;       // 
const int *p; // 指向常量的指针,指针指向的变量内容不可更改
int *const p; // 常量指针，指针不可更改地址，但可改变其中内容。




*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int var1 = 10;
    cout << "var1 = " << var1 << endl;
    // "&"是取地址操作符。
    cout << "var1 address : " << &var1 << endl << endl;

    int var2[6];
    cout << "var2 = " << var2 << endl;
    cout << "var2 address : " << &var2 << endl;

    //指针
    int *ip;
    ip = &var1; 
    cout << "ip = " << ip << endl;
    //使用解引用操作符“*” ，利用指针访问对象
    cout << "*ip = " << *ip << endl;//值为 var1


    //指针的指针
    int **ipp = &ip;
    cout << "**ipp = " << **ipp << endl << endl;//值为var1
    

    //指向常量的指针 pointer to const
    const double pi = 3.1415;
    const double *pointer_pi = &pi;
    // *pointer_pi = 9; error *pointer_pi const double


    //常量指针 const pointer
    double num = 0;
    double *const const_pointer = &num;
    *const_pointer = 1;
    cout << "num = " << num << endl;//num from 0  change to 1

    //用指针赋值
    char a[] = "hello ,world";//字符数组
    char * p = a; //字符指针，初始化指向数组a首，a的第一个元素地址。
    printf("%c \n",*(p+4)); //o
    printf("%c \n", p[4]);//o
    printf("%c \n",a[4]);//o
    printf("%c \n",*(a+4));//o
    
    *(p+4) += 1; //o=>p
    printf("%s \n",a);//a = hellp,world
    

    //指针加减
    int list[] = {1,2,3,4,5};//一维数组
    int *plist = (int*)(&list + 1);///&a 对a取地址 再加1,是加上同样a大小的内存。
                                   //即&a+sizeof(a) = &a + 5*sizeof(int);即a[5].指针已越界。
                                   //（int*)把上步计算出的地址转化为int*,赋值给plist.

    printf("%d \n",*(list+1) );//2; a 与&a 的地址是一样的，但a是数组首地址。即a[0]的地址.而&a是对象首地址。
                               //   a + 1是数组下一个元素的地址，即a[1];&a + 1是下一个对象的地址，即a[5];
    printf("%d \n",*(plist-1));//5
    

    //指针比较
    char c1[] = "abc";
    char c2[] = "abc";

    const char c3[] = "abc";
    const char c4[] = "abc";
    // c1,c2,c3,c4是在栈中分配。内存内容相同。但位置不同。

    const char* c5 = "abc";
    const char* c6 = "abc";

    char* c7 = "abc";
    char* c8 = "abc";
    //c5,c6,c7,c8也是在栈中分配的，他们都指向“abc","abc"存放在数据区。5,6,7,8指向同一个数据区的内存。

    cout << (c1==c2) << endl; //0
    cout << (c3==c4) << endl; //0
    cout << (c5==c6) << endl; //1
    cout << (c6==c7) << endl; //1
    cout << (c7==c8) << endl; //1

    //内存访问违规
    char aa;//一个字节
    char *str1 = &aa;
    char *str2 = "aaa";

    strcpy(str1,"hello");//error. str1指向一个字节大小的内存区。复制“hello"字符串最少要6个字节。！！！
                         //内存大小不够。会因为越界进行内存读写而导致程序崩溃。
    str2[1] = 'b';//error。 str2指向一个字符串常量，所以对其赋值是违法的。                            
    
    return 0;

    }


/*
复杂指针的声明：
一个整型数： int a; //an integer
一个指向整型数的指针： int *a;// a pointer to an integer 
一个指向指针的指针，他指向的指针是指向int型的：int **a; // a pointer to a pointer to an integer

一个有10个整型数的数组：int a[10]; //an array of 10 integers
一个有10个指针的数组，该指针是指向一个整型数的：int *a[10]; // an array of 10 pointers to integer
一个指向有10个整型数数组的指针，int (*a)[10];// a pointer to an array of 10 tegers

一个指向函数的指针，该函数有一个整型参数并返回一个整型数： int (*a)(int);//a pointer to a function a that takes an integer argument
                                                                 and returns an integer
一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数：int(*a[10])(int);//an array of 10 pointers to functions 
      
                                                                                     that take an integer argument and return an integer
 */

/*
int (*func)(int *p);   
func是一个指针，（*func)是一个函数，则func是一个指向函数的指针，即函数指针。有int* 形参，返回值类型是int.

int (*func)(int *p, int (*f)(int*));
func是一个指针，（*func)是一个函数，func是一个指向函数的指针。有int* ,int(*f)(int*)形参。f也是函数指针，有int* 类型的外参。返回值为int。 

int (*func[5])(int *p);
[]运算符优先级比*高。func是一个有5个元素的数组。左边有*,func的元素是指针。*是修饰func[5],而不是func的。func的元素是函数类型的指针，返回值为int。

int （*(*func)[5])(int *p);
func是一个指针，指向数组的指针，数组的元素是函数指针。返回值为int类型。


*/