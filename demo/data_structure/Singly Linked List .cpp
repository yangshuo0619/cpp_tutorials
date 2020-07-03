// 算法的设计依赖于数据的逻辑结构
// 算法的实现依赖于数据的存储结构

/*
单链表 的结构是数据结构中最简单的，它的每一个节点只有一个指向后一个节点的指针。
 
循环链表 与 单链表一样，是一种链式的存储结构。不同的是，循环链表的 最后一个节点的指针 指向 该循环链表的第一个节点 或 表头节点，
从而构成一个环形的链。

双向链表 节点除了含有数据域之外，还有两个指针。一个存储直接后续结点地址，另一个存储直接前驱结点地址。

双向循环链表：把双向链表的首尾相连。

 */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode{
        int    data;
        struct LNode *next;
}LNode,*LinkList;
 
LinkList CreateList(int n);
void print(LinkList h);

int main()
{
    LinkList Head=NULL;
    int n;
    
    scanf("%d",&n);
    Head=CreateList(n);
    
    printf("刚刚建立的各个链表元素的值为：\n");
    print(Head);
    
    printf("\n\n");
    system("pause");
    return 0;
}
LinkList CreateList(int n)
{
    LinkList L,p,q;
    int i;
    L=(LNode*)malloc(sizeof(LNode));
    if(!L)return 0;
    L->next=NULL;
    q=L;
    for(i=1;i<=n;i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&(p->data));
        p->next=NULL;
        q->next=p;
        q=p;
    }
    return L;
}
void print(LinkList h)
{
    LinkList p=h->next;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}