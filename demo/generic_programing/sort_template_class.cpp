/*设计一个公共的class,通过他的接口可以对任何类型的数组排序 */

#include<assert.h>

template<class T>
class Test
{
public:
    static void Sort(T *array,int len,bool (*Compare)(T& a, T& b)) //可以用Test<T>::Sort直接访问 ，其中comapare是函数指针
    {
        T temp;//用与冒泡排序的交换
        assert(len >= 1);//len必须大于1
        for(int i = 0; i <len-1; i++) //冒泡排序
        {
            for(int j = len-1; j>i; j--)
            {
                if (Compare(array[j],array[j-1]))//使用compare函数指针的方式来进行比较
                {
                    temp = array[j-1];//根据升序或降序需要 进行交换
                    array[j-1] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
};

template <class T>
bool ascend(T& a, T& b)
{
    return a < b ? true : false;
};

template <class T>
bool descend(T& a, T& b)
{
    return  a > b ? true : false;
};


//对某个类对象的数组排序
template<class T>
class MyRect
{
public:
    MyRect():length(0),width(0){}
    MyRect(T len, T wid):length(len),width(wid){}
    T Area(){return length * width;}
   
private:
    T length; //矩阵的长
    T width;  //矩阵的宽
};

template<class T>
bool operator > (MyRect<T>& rect1, MyRect<T>& rect2) //重载>运算符
{
    return rect1.Area() > rect2.Area() ? true : false;//重载<运算符
}


template<class T>
bool operator < (MyRect<T>& rect1, MyRect<T>& rect2)
{
    return rect1.Area() < rect2.Area() ? true : false;
}

int main()
{
    int int_array[10] = {4,3,7,6,2,1,9,8,5,10};//int 数组定义
    float float_array[10] = {4.0f,3.0f,7.0f,6.0f,2.0f,1.0f,9.0f,8.0f,5.0f,10.0f};

    MyRect<int> rect_array[4] = {MyRect<int>(3,4),MyRect<int>(5,6),MyRect<int>(4,6),MyRect<int>(3,5)};

    Test<int>::Sort(int_array,10,descend<int>);
    Test<int>::Sort(int_array,10,ascend<int>);

    Test<float>::Sort(float_array,10,descend<float>);
    Test<float>::Sort(float_array,10,ascend<float>);

    Test< MyRect<int> >::Sort(rect_array,4,descend< MyRect<int> >);
    Test< MyRect<int> >::Sort(rect_array,4,ascend< MyRect<int> >);//可用gdb调试查看

    return 0;
}