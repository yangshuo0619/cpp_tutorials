#include<iostream>
#include<string>

using namespace std;

int main(int argc,char *argv[])
{
    //一般变量引用
    int a = 10;
    int b = 20;

    int &rn = a;//声明rn是a的一个引用。不需要为rn另外开辟内存单元，rn和a占内存中同一个存储单元。具有同一地址。

    rn = b;//rn = 20; a = 20; b = 20; 
    // &rn = b; //error. 可以rn = b;对rn赋值，但不能使用&rn = b;不能再把该引用作为其他变量名的别名。

    rn = 100;//rn = 100; a = 100; b = 20;
    int equal;
    equal = (&rn == &a) ?  1 : 0; //equal = 1;


    //指针变量引用
    int x = 1;
    int y = 10;

    int* p = &x;//&取地址; 声明整型的指针变量p,初始化指向a;
    int* &pa = p;//指针引用！！！ 声明p的一个指针引用pa

    (*pa)++; //x = 2; y = 10;*p = 2;
    
    pa = &y; //pa指向y的地址，由于pa是p的引用，此时p也指向b的地址。
    (*pa)++; //x = 2;y = 11; *p = 11; 

    // int &z; //error.引用类型的变量在声明的同时必须要初始化！！！
    int* pb;//pb没有被初始化，是野指针。

}

/*
指针和引用的区别：
1.初始化要求不同。引用在创建时必须初始化，即引用到一个有效的对象。而指针定义时不需必初始化。
2.可修改性不同。引用一旦被初始化为指向一个对象，他就不能被改变为另一个对象的引用。而指针是可以改变为指向另一个对象。
  其中可以对引用变量赋值，但不能使其成为别人的引用 
3.不存在null引用，他总是要指向某个对象。而指针可以是null.
4.测试需要的区别：因为引用不会指向空值，使用引用之前不需要测试他的合法性。指针需要进行测试。因此使用引用的代码效率比使用指针高。
5.应用的区别：如果一旦指向一个对象后就不会改变，则应该用引用。 如果有存在null,或不同时刻指向不同对象的情况，则应该用指针。
   
  */
