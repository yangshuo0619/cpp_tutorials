#include<iostream>

using namespace std;

class Base 
{
    public:
        Base(){cout << "create" << endl;}
        virtual ~Base(){cout << "destroy" << endl;}//如果没有virtual，delete(base)只会调～Base().而不会调～Derived();
};

class Dervied : public Base
{
    public:
        Dervied(){cout << "create derived" << endl;}
        ~Dervied(){cout << "destroy derived" << endl;}

};

int main()
{
    Dervied * dervied = new Dervied;
    delete dervied;

    Base * base = new Dervied;
    delete base;//需要使用delete释放内存，其会调用析构函数。

    return 0;
}

