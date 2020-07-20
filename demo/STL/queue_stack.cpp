#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    stack<int,vector<int> > s;
    queue<int,vector<int> > q;
    
    for(int i = 1; i < 10; i++)
    {
        s.push(i);
        q.push(i);
    }

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();//调用pop_back()
    }

    while(!q.empty())
    {
       // cout << q.front() << endl;
       // q.pop();//调用pop_front;但vector没有pop_front成员，编译会报错。
    }

    return 0;
}