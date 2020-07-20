#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H
typedef struct DbNode
{
    int data;
    DbNode *left;
    DbNode *right;
} DbNode;

DbNode *CreateNode(int data);
DbNode *CreateList(int head);
DbNode *AppendNode(DbNode *head,int data);

int GetLength(DbNode* head);
void PrintList(DbNode* head);
DbNode *FindNode(DbNode* head,int data);
void InsertNode(DbNode *node, int data);
DbNode *DeleteNode(DbNode *head,int data);
#endif