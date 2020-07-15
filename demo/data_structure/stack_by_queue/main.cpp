#include"stack.h"
#include<iostream>

using namespace std;

class MyQueue
{
    public:
        void enqueue(MyData data);//入队
        void dequeue(MyData &data);//出队
        bool IsEmpty();//判空
    private: 
        MyStack s1;//用于入队
        MyStack s2;//用于出队
};

//入队
void MyQueue::enqueue(MyData data)
{
    s1.push(data);//只对s1进行进栈操作
}

//出队，先把s1的元素出栈 入栈给s2,再从s2出栈即可实现队列的先进先出
void MyQueue::dequeue(MyData &data)
{
    MyData temp(0);//局部变量，用于临时存储
    if(s2.isEmpty())//s2为空，把s1的所有元素push到s2中
    {
        while(!s1.isEmpty())
        {
            s1.pop(&temp);//弹出s1的元素
            s2.push(temp);//压入s2中
        }
    }
    if(!s2.isEmpty())
    {
        s2.pop(&data);//弹出s2的栈顶元素
    }
}

//队列判空
bool MyQueue::IsEmpty()
{
    return (s1.isEmpty()) && (s2.isEmpty()); //两个栈都为空，则返回1
}



int main()
{
    MyData data(0);
    MyQueue q;

    //入队123
    q.enqueue(MyData(1));
    q.enqueue(MyData(2));
    q.enqueue(MyData(3));

    //出队也应是123
    q.dequeue(data);
    cout << "dequeue: " << data.data << endl;

    q.dequeue(data);
    cout << "dequeue: " << data.data << endl;

    q.dequeue(data);
    cout << "dequeue: " << data.data << endl;

    cout << "isempty: " << q.IsEmpty() << endl;

    return 0;
}


