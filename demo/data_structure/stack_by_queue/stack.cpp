#include "stack.h"

//进栈操作，在单链表的首部进行插入操作，top要指向这个单链表的首部
void  MyStack::push(MyData data)
{
    MyData *pData = NULL;
    pData = new MyData(data.data);//生成新的节点
    pData->next = top;//与原来的栈顶节点相连
    top = pData;//新节点为栈顶节点
}

//出栈，返回栈顶节点内容，在单链表的首部进行删除操作，使top指向单链表的首部，把删除节点的数据保存到了data中
void MyStack::pop(MyData *pdata)
{
    if(isEmpty())//栈为空，直接返回
    {
        return;
    }
    pdata->data = top->data;//给传出的参数赋值
    MyData *p = top;//临时保存原栈顶节点
    top = top->next;//移动栈顶，指向下一个节点
    delete p; //释放原栈顶节点内存
}

bool MyStack::isEmpty()//空栈时，指针为null.栈中有结点时，top指向链表头，只需top与null进行比较。
{
    return(top == NULL);//如果top为空，则返回1,否则返回0
}