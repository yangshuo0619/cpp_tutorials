//demo2
//C language

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList; // LNOde = struct LNode 
 

 
LinkList CreateList(int n);//声明创建链表
void print(LinkList h);//打印链表

int main()
{
    LinkList Head=NULL;
    int n;
    
    printf("input linked list member count");
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
    L = (LNode*)malloc(sizeof(LNode));//分配内存
    
    if(!L) return 0;
    L -> next = NULL;
    q = L;
    
    for(i = 1; i <= n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&(p -> data));
        p -> next = NULL;
        q -> next = p;
        q = p;
    }
    return L;
}

void print(LinkList h)
{
    LinkList p = h->next;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}






