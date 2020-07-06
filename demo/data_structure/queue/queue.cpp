/*
队列的实现可以用链表 和 数组。
以下3为单链表：
 */

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

//构造空的队列
MyQueue *CreatMyQueue()
{
    MyQueue *q = (MyQueue*)malloc(sizeof(MyQueue));
    q->front = NULL;
    q->rear = NULL;
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
    pnode = q->front;//
    
    if()
    {

    }
    else
    {
        q->front = q->front->next;//新队头
        if(q->front == NULL)
        {
            q->rear = NULL;
        }
    free(pnode);
    }
    return q;
}





