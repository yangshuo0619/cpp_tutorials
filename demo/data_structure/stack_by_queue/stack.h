#ifndef STACK_H
#define STACK_H

#include<stdlib.h>

// #ifndef NULL
// #define NULL 0

class MyData//定义了单链表的节点
{
    public:
        MyData():data(0),next(NULL){}
        MyData(int value):data(value),next(NULL){}
        int data;//数据域
        MyData *next;//指向下一节点
};

class MyStack//定义栈
{
    public:
        MyStack():top(NULL){}//默认构造函数把 栈顶指针 置空，栈为 空栈
        void push(MyData data);
        void pop(MyData *pdata);
        bool isEmpty();
        MyData *top;//栈顶，由于不能直接操作栈底，所以没有定义栈底的指针
};

//#endif
#endif

/*
error:NULL’ was not declared in this scope:
1.#include<stdlib.h>
2.
 #ifndef NULL
 #define NULL 0
 #endif
 */