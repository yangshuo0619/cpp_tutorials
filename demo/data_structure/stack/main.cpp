#include"stack.h"
#include<iostream>

using namespace std;

int main()
{
    MyData data(0);
    MyStack s;
    s.push(MyData(1));
    s.push(MyData(2));
    s.push(MyData(3));

    s.pop(&data);
    cout << "pop " << data.data << endl;
    s.pop(&data);
    cout << "pop " << data.data << endl;
    s.pop(&data);
    cout << "pop " << data.data << endl;
    
    cout << "empty " << s.isEmpty() << endl;

    return 0;
}

