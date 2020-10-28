#include"queue.h"
#include<stdio.h>
#include<memory>

//构造空的队列
MyQueue *CreatMyQueue()
{
    MyQueue *q  = (MyQueue*)malloc(sizeof(MyQueue));
    q->front = NULL;//空队列，队首指针置空
    q->rear = NULL;//队尾指针置空
    return q;
}

//入队,从队尾一端插入节点
MyQueue *endqueue(MyQueue *q, int data)
{
    node *newP = NULL;
    newP = (node*)malloc(sizeof(node));//根据数据data新建一个数据结点
    newP->data = data;//
    newP->next = NULL;
    if(q->rear == NULL)//如果队列是空，把新建的结点作为对首，同时也作为对尾。不仅要操作rear指针，同时也要对队列的front指针进行操作。
    {
        q->front = q->rear = newP;
    }
    else //如果队列不为空，把新建的结点链接到对尾，并将他作为新的对尾，此时只需对rear指针操作。
    {
        q->rear->next = newP;
        q->rear = newP;
    }
    return q;
}

//出队,从队头一端删除节点
MyQueue *dequeue(MyQueue* q)
{
    node *pnode = NULL;
    pnode = q->front;//指向队头，就是即将删除的指针
    
    if(pnode == NULL)
    {
        printf("empty queue! \n");
    }
    else
    {   
        //把队头结点往后移，删除原来的队头节点。如果删除后的队列为空，则把rear置空
        q->front = q->front->next;//新队头
        if(q->front == NULL)//当只有一个节点，删除后，队列为空
        {
            q->rear = NULL;//对rear置空
        }
    free(pnode);
    }
    return q;
}


//遍历一次队列中的节点即可。
int GetLength(MyQueue *q)
{
    int nlen = 0;
    node * pnode = q->front;//首节点 指向队头
    if(pnode != NULL)
    {
        nlen = 1;
    }
    while(pnode !=  q->rear)//遍历队列/且注意不是pnode!=NULL. 因为队尾有可能指向的不是链表的末节点
    {    
        pnode = pnode->next;
        nlen++;//循环一次 nlen递增1
    }
    return nlen;
}

//打印
void PrintMyQueue(MyQueue *q)
{
    node *pnode = q->front;
    if(pnode == NULL)//如果队列为空
    {
        printf("empty queue. \n");
        return;
    }
    printf("data:");
    while(pnode != q->rear)//遍历队列
    {
        printf("%d",pnode->data);//打印节点数据
        pnode = pnode->next;
    }
    printf("%d",pnode->data);//打印尾节点数据
}


