#ifndef SINGLED_LINKED_LIST_H
#define SINGLED_LINKED_LIST_H

typedef struct node
{
    int data;
    node* next;
}node;

node *create();
int length(node *head);
void print(node *head);
node *search_node(node *head,int pos);
node *insert_node(node *head, int pos,int data);
node *delete_node(node *head,int pos);
node *reverse(node *head);

#endif