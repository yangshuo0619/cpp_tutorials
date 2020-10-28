#include"double_linked_list.h"
#include<stdio.h>

//根据数据创建节点
DbNode *CreateNode(int data)
{
    DbNode *pnode = (DbNode *)malloc(sizeof(DbNode));
    pnode->data = data;
    pnode->left = pnode->right = pnode;//创建新节点，让其前驱和后继指针都指向自身
    return pnode;
}

//创建链表
DbNode *CreateList(int head)
{
    DbNode *pnode = (DbNode *)malloc(sizeof(DbNode));
    pnode->data = head;
    pnode->left = pnode->right = pnode;
    return pnode; 
}

//插入新结点，总是在表尾插入，返回表头结点
DbNode *AppendNode(DbNode *head, int data)
{
    DbNode *node = CreateNode(data);
    DbNode *p = head,*q;
    while(p != NULL)
    {
        q = p;
        p = p->right;
    }
    q->right = node;
    node->left = q;
    
    return head;
}

//实现一个双向链表的测长
int GetLength(DbNode* head)
{
    int count = 1;
    DbNode *pnode  = NULL;

    if(head == NULL)
    {
        return 0;
    }
    pnode = head->right;
    while(pnode != NULL)
    {
        pnode = pnode->right;
        count ++;
    }
    return count;
}

//打印
void PrintList(DbNode* head)//参数是链表的表头节点
{
    DbNode *pnode = NULL;
    if(head == NULL)
    {
        return;
    }

    pnode = head;
    while(pnode != NULL)
    {
        printf("%d ",pnode->data);
        pnode = pnode->right;
    }
    printf("\n");
}

//链表节点的查找
DbNode *FindNode(DbNode* head,int data)
{
    DbNode *pnode = head;
    if(head == NULL)
    {
        return  NULL;
    }

    while(pnode->right != NULL && pnode->data != data)
    {
        pnode = pnode->right;
    }

    if(pnode->right == NULL)
    {
        return NULL;
    }

    return pnode;
}

//链表结点的插入(在node结点之后接入插入新结点)
void InsertNode(DbNode *node, int data)
{
    DbNode *newnode = CreateNode(data);
    DbNode *p = NULL;

    if(node == NULL)
    {
        return NULL;
    }
    if(node->right == NULL)
    {
        node->right = newnode;
        newnode->left = node;
    }
    else
    {
        newnode->right = node->right;
        node->right->left = newnode;
        node->right = newnode;
        newnode->left = node;
    }
}

//链表结点的删除
DbNode *DeleteNode(DbNode *head,int data)
{
    DbNode *ptmp = NULL;
    DbNode *pnode = FindNode(head,data);
    if(NULL == pnode)
    {
        return NULL;
    }
    else if(pnode->left == NULL)
    {
        head = pnode->right;
        if(head != NULL)
        {       
            head->left = NULL;
        }
    }
    else if(pnode->right = NULL)
    {
        pnode->left->right = NULL;
    }
    else
    {
        pnode->left->right = pnode->right;
        pnode->right->left = pnode->left;
    }

    free(pnode);
    return head;
}