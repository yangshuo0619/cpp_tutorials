/*
队列的实现可以用链表 和 数组。
以下为单链表：
 */

#ifndef QUEUE_H
#define QUEUE_H

typedef struct _Node
{
    int data;
    struct _Node *next;
} node; //单链表,node表示队列中的每个节点元素

typedef struct _Queue
{
    node *front;//队头
    node *rear;//对尾
} MyQueue;

MyQueue *CreatMyQueue();
MyQueue *endqueue(MyQueue *q, int data);
MyQueue *dequeue(MyQueue* q);
int GetLength(MyQueue *q);
void PrintMyQueue(MyQueue *q);

#endif