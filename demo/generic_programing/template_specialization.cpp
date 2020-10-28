//函数模板的特化： 当函数模板 需要对某些特定的类型进行特别处理， 称为函数模板的特化。
//类模板  的特化： 当类模板内需要对某些类型进行特别的处理时，使用类模板的特化。
#include<iostream>
#include<cstring>

using namespace std;

//函数模板
template<class T>
bool IsEqual(T a, T b)
{
    return a==b;
}

//模板的特化
template<>
bool IsEqual(char* a,char* b)
{
    return strcmp(a,b) == 0;
}


//类模板
template<class T>
class Compare
{
public:
    bool IsEqual(T a, T b)
    {
        return a==b;
    }
};

//模板的特化
template<>
class Compare<char*>
{
public:
    bool IsEqual(char* a,char* b)
    {
        return strcmp(a,b) == 0;
    }
};


int main()
{
    //函数模板
    cout << IsEqual(3,3) << endl;//equal
    cout << IsEqual("hh","hh") << endl;//equal

    string s1 = "test";
    string s2 = "test";
    cout << IsEqual(s1,s2) << endl;//equal

    char c1[] = "test";
    char c2[] = "test";
    cout << IsEqual(c1,c2) << endl;//unequal,error 需要对char* 类型进行特别处理，即特化

    //类模板
    Compare<int> compare1;
    Compare<char* > compare2;
    cout << compare1.IsEqual(1,1) << endl;
    cout << compare2.IsEqual(c1,c2) << endl;
  
    return 0;
}