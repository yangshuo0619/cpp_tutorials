#include<iostream>
using namespace std;

void insert_sort(int a[],int n)
{
    int i,j,temp;

    for(i = 1; i < n; i++)
    {
        temp = a[i];
        cout <<"i: "<<i<< "temp: "<<temp<<endl;
        for(j = i - 1; j>=0 && temp < a[j]; j--)
        {
            a[j+1] = a[j];
            cout<<"a[j+1]: "<<a[j+1]<<endl;
        }

        a[j+1] = temp;
        cout<<"a[j+1]: " <<a[j+1]<<endl;
    }
}

void print_array(int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int a[] = {7,3,5,8,9,1,2,4,6};
    cout << "before insert sort: "<<endl;
    print_array(a,9);
    insert_sort(a,9);
    cout << "after insert sort: "<< endl;
    print_array(a,9);
    return 0;
}