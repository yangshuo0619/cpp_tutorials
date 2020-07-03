#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int str2int(const char *str)
{   
    int temp = 0;
    const char *ptr = str;
    if (*str == '-' || *str == '+' )
    {
        str++;
    }

    while(*str != 0)
    {
        if ((*str < '0') || (*str > '9'))
        {break;}

        temp = temp *10 + (*str - '0');
        str++; 
    }

    if (*str == '-')
    {
        temp = -temp;
    }
    return temp;
}

int main()
{
    //use library function
    int num_int;
    double num_double;

    char str_int[30] = "435";
    char str_double[30] = "436.55";
    
    //atoi  atof
    num_int = atoi(str_int);
    num_double = atof(str_double);

    printf("num_int: %d \n",num_int);
    printf("num_double: %lf \n",num_double);


    //do not use library funciton
    int n = 0;
    char p[10] = "";

    std::cin.getline(p,20);
    n = str2int(p);

    std::cout << "n= " << n << std::endl;

    return 0;
}