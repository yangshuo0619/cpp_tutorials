#include<iostream>
using namespace std;

//希尔排序(循环设置增量，里面嵌套直接插入排序的算法)
void shell_sort(int a[], int len)
{
    int h, i, j,temp;

    for(h = len/2; h>0; h = h/2)//控制增量
    {
        for(i=h; i<len; i++)//for循环就是前面的直接插入排序
        {
            temp = a[i];
            for(j = i-h; (j>=0 && temp < a[j]); j-=h)
            {
                a[j+h] = a[j];
            }
            a[j+h] = temp;

        }
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
    cout << "before shell sort: ";
    print_array(a,9);

    shell_sort(a,9);

    cout << "after shell sort: ";
    print_array(a,9);

    return 0;
}