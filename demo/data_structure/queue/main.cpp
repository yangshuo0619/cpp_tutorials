#include"queue.h"
#include<stdio.h>

int main()
{
    MyQueue *hp = CreatMyQueue();
    endqueue(hp,1);
    endqueue(hp,2);
    endqueue(hp,3);
    endqueue(hp,4);

    int len;
    len = GetLength(hp);
    printf("len = %d. \n",len);

    PrintMyQueue(hp);
    dequeue(hp);
    dequeue(hp);

    len = GetLength(hp);
    printf("\n len = %d. \n",len);
    PrintMyQueue(hp);

    return 0;
}