#include "singled_linked_list.h"
#include<stdio.h>

int main()
{
    node *head = create();//创建单链表
    printf("length: %d \n",length(head));//单链表长度
    
    head = insert_node(head,2,5);//在第二个节点后插入5
    print(head);//打印单链表
    
    head = delete_node(head,2);//删除第二个节点
    print(head);

    reverse(head);

    return 0; 
}