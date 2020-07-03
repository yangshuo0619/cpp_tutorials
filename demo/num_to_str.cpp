#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num_int = 435;
    double num_double = 435.10f;
    char str_int[30];
    char str_double[30];

    //itoa(num_int,str_int,10);
    gcvt(num_double,10,str_double);
    

    printf("str_int: %s \n",str_int);
    printf("str_double: %s \n",str_double);

    return 0;

}