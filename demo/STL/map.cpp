//关联容器map
/*
标准的STL关联容器（包括set和map以及set的衍生体multise和map的衍生体multimap）的内部结构是一个平衡二叉树。
平衡二叉树：
AVL—tree;
RB-tree;
 */
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<int,string> mapstring;
    mapstring.insert(pair<int,string>(1,"one"));
    mapstring.insert(pair<int,string>(2,"two"));
    mapstring.insert(pair<int,string>(3,"three"));
    mapstring.insert(pair<int,string>(4,"four"));
    
    cout << mapstring[1] << endl;

    mapstring[5] = "five";
    cout << mapstring[5] << endl;

    mapstring.erase(2);
    map<int,string>::iterator f = mapstring.find(2);

    if(f != mapstring.end())
    {
        mapstring.erase(f);
    }

    map<int,string>::iterator it = mapstring.begin();
    while(it != mapstring.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }

    return 0;
}