#include<iostream>
using namespace std;

//冒泡排序

void bubble_sort1(int a[],int len)
{
    int i = 0;
    int j = 0;
    int temp = 0;//用于交换
   
    for(i=0; i<len-1; i++)//进行n-1趟扫描
    {
        for(j=len-1; j>=i; j--)//从后往前交换，使最小值冒到开头部分
        {
            if(a[j+1] < a[j])//如果a[j+1]<a[j],则交换两元素的值
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

//改进后的冒泡排序

void bubble_sort2(int a[],int len)
{
    int i = 0;
    int j = 0;
    int temp = 0;//用于交换
    int exchange = 0;//用于记录每次扫描时是否发生交换

    for(i=0; i<len-1; i++)//进行n-1趟扫描
    {
        exchange = 0;//每次扫描前对exchange置0
        for(j=len-1; j>=i; j--)//从后往前交换，使最小值冒到开头部分
        {
            if(a[j+1] < a[j])//如果a[j+1]<a[j],则交换两元素的值
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                exchange = 1;//发生交换，则将exchange置1
            }
        }
        if(exchange != 1)//此趟扫描没有发生过交换，说明已经排好序了，不需要再做扫描
            return;
    }
}

void print_array(int a[],int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}



int main()
{
    int a[] = {7,3,5,8,9,1,2,4,6};
    cout << "before bubble sort: ";
    print_array(a,9);

    bubble_sort2(a,9);

    cout << "after bubble sort: ";
    print_array(a,9);

    return 0;
}