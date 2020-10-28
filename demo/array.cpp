#include <iostream>
using namespace std;

int main()
{
    //1D array 
    int arr[10]; //含有10个整型的数组
    int *arr2[10];//含有10个整型指针的数组

    //int arr[];//error
    int arr3[] = {1,2};//correct
    int arr4[2] = {1,2};

    char c1[] = "hh";
    char c2[3] = "ee";
    char c3[3] = {'h','e','l'};

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;


 /*访问数组元素:

  使用下标访问数组元素，注意数组的下标从0开始。

  C++ 11 标准增加了 range for 语句可以遍历数组元素： */
    for (auto i : c3){
        cout << i << endl;
    }


    return 0;
}