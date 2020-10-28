#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void int2str(int n, char* s);

int main()
{
    //use library function
    int num_int = 435;
    double num_double = 435.10f;
    char str_int[30];
    char str_double[30];

    //itoa(num_int,str_int,10); //can not find itoa
    gcvt(num_double,10,str_double);
    
    printf("str_int: %s \n",str_int);
    printf("str_double: %s \n",str_double);



    //do not use library function
    int n;
    char p[10];
    
    cout << "please input an integer: " ;
    cin  >> n;
    cout << "output: ";
    int2str(n,p);

    cout << "str = " <<p; ;
    return 0;

}

void int2str(int n, char* s)
{
   
    char buf[10] = "";
    //har str[10] = "";

    int i = 0;
    int len = 0;
    int temp = n > 0 ? n:-n; //get abs of n

    if(s == NULL){return;}

    while(temp)
    {
        
        buf[i++] = temp%10 + '0';//!!!!!!!!!!!!!!!!!!!important
       
        temp = temp/10;
        cout << "i= " << i << " temp= " << temp << endl;
    } 

    len = n < 0 ? ++i:i;//if n<0 ,need more bit to save negative singal
    cout << "len = " << len <<endl;
    s[i] = 0;
    while(1)
    {
        i--;
        if(buf[len-i-1] == 0){break;}
            
        s[i] = buf[len - i-1];//star with zero
       
        cout << "i= "<< i << endl;
        cout << s[i] << endl;
    }

    if(i ==0 )
    {
        s[i]='-';
    }
}