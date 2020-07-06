#include<stdio.h>
#include<iostream>

#include"singled_linked_list.h"

//create single linked list
node *create()
{
    int i = 0;
    node *head,*p,*q;
    int x = 0;
    head =  (node*)malloc(sizeof(node));

    while(1)
    {
    printf("input the data: ,0 end");
    scanf("%d",&x);
    if(x == 0)
        break;
    p = (node* )malloc(sizeof(node));
    p->data = x;

    if(++i == 1 )
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

//逆置单链表
node *reverse(node *head)
{
    node *p,*q,*r;
    if(head->next == NULL)
    {
        return head;
    }

    p = head->next; //第一个节点?
    q = p->next;//保存第二个节点
    p->next = NULL;//将第一个节点设为末节点

    while(q != NULL)
    {
        r = q->next;//下一个结点
        q->next = p;//指针翻转
        p = q;//指针向后遍历
        q = r;
    }
    head->next = p;//设第一个节点为原来最后的一个节点
    return head;

}