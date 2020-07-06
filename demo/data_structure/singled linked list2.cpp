//demo1
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



//demo2
typedef struct node
{
    int data;
    node* next;
}node;


//create single linked list
node *create()
{
    int i = 0;
    node *head,*p,*q;
    int x = 0;
    head =  (node*)malloc(sizeof(node));


    while(1)
    {
    printf("input the data: ");
    scanf("%d",&x);
    if(x = 0)
        break;
    p = (node* )malloc(sizeof(node));
    p->data = x;

    if(++i ==1 )
    {
        head->next = p;
    } 

    else
    {
        q->next = p;
    }

    q = p;
    }

q->next = NULL;
return head;    
}


//count link list member number
int length(node *head)
{
    int len = 0;
    node  *p;
    p = head->next;
    while(p != NULL)
    {
        len++;
        p = p->next;
    }

    return len;

}


//printf linked list member
void print(node *head)
{
    node *p;
    int index = 0;
    if(head->next == NULL)
    {
        printf("link is empty. \n");
        return;
    }

    p = head->next;
    while(p != NULL)
    {
        printf("The %d th node is: %d \n", ++index,p->data);
        p = p->next;
    }
}

//search node 
node *search_node(node *head,int pos)
{
    node *p = head->next;
    if(pos < 0)
    {
        printf("incorrect position to search node");
        return NULL;
    }
    if(pos == 0)
    {
        return head;
    }
    if(p == NULL)
    {
        printf("link is empty. \n");
        return NULL;
    }

    while(--pos)
    {
        if((p = p->next) == NULL)
        {
            printf("incorrect position to search node \n");
            break;
        }
    }

    return p;
}

//insert node
node *insert_node(node *head, int pos,int data)
{
    node *item = NULL;
    node *p;
    item = (node *)malloc(sizeof(node));
    item->data = data;
    if(pos == 0)
    {
        head->next = item;
        return head;
    }

    p = search_node(head,pos);
    if(p!= NULL)
    {
        item->next = p->next;
        p->next = item;
    }
    return head;
    
}

//delete node
node *delete_node(node *head,int pos)
{
    node *item = NULL;
    node *p = head -> next;
    if(p == NULL)
    {
        printf("link is empty.\n");
        return NULL;
    }
  
    p = search_node(head,pos-1);
    if(p != NULL && p->next != NULL)
    {
        item = p->next;
        p->next = item->next;
        delete item;
    }

    return head;
}

