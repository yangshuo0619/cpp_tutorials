#include<iostream>
using namespace std;

//直接插入排序
void insert_sort(int a[],int n)
{
    //i用于表示对哪一个元素进行插入操作， j表示插入到哪个目标元素的后面，temp保存需要插入的元素
    int i, j, temp;

    for(i = 1; i<n; i++)//需要选择n-1次，插入次数是n-1
    {
        //暂存下标为i的数，下标从1开始，因为开始时下标为0,前面没有任何数，此时认为他是排好序的
        temp = a[i];
        for(j = i-1; j >=0 && temp < a[j]; j--)
        {
            //如果满足条件就往后挪
            a[j+1] = a[j];
        }

        //最坏的情况是temp比a[0]都小，此时j=-1,temp作为新的a[0]
        a[j+1] = temp;
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
    cout << "before insert sort: ";
    print_array(a,9);

    insert_sort(a,9);

    cout << "after insert sort: ";
    print_array(a,9);

    return 0;
}