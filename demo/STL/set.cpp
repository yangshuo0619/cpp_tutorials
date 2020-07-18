//关联容器set
#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
    set<string> strset;
    set<string>::iterator si;
    strset.insert("cantaloupes");
    strset.insert("apples");
    strset.insert("orange");
    strset.insert("banana");
    strset.insert("grapes");
    strset.insert("grapes");//往set中插入6个元素，grapes重复了，因此实际只有5个字符串

    strset.erase("banana");
    for(si = strset.begin();si != strset.end();si++)
    {
        cout << *si << endl;
    }
    cout << endl;
    return 0;
}