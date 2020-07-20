#include<iostream>
using namespace std;

//快速排序
void quick_sort(int a[], int low, int high )
{
    int i, j, pivot;
    if(low < high)
    {
        pivot = a[low];//基准值，初始值为a[low]
        i = low;
        j = high;
        while(i<j)
        {
            while(i<j && a[j]>= pivot)
                j--;
            if(i<j)
                a[i++]=a[j];

            while(i<j && a[i]<=pivot)
                i++;
            if(i<j)
                a[j--]=a[i]; 
        }
        a[i]=pivot;
        quick_sort(a,low,i-1);
        quick_sort(a,i+1,high);

    }
}

int main()
{
    int data[9] = {54,38,96,23,15,72,60,45,83};
    quick_sort(data,0,8);
    for(int i = 0; i<9; i++)
    cout << data[i] << " ";
    return 0;
}