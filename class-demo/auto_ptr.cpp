#include<iostream>
#include<cstring>
#include<memory>

using namespace std;

class Test
{
    public:
    Test(){name = NULL;}

    Test(const char* strname){
        //*name = *strname;
        name = new char[strlen(strname) + 1];
        strcpy(name,strname);
    }

    Test& operator = (const char* strname){
        if(name != NULL)
        {
            delete name;
        }
        name = new char[strlen(strname) + 1];
        strcpy(name,strname);
        return *this;
    }

    void ShowName(){cout << name << endl;}

    ~Test()
    {
        if (name != NULL)
        {
            delete name;
        }
        name = NULL;
        cout << "delete name" << endl;
    }

    public:
        char*  name;
};

int main()
{
    auto_ptr<Test> Testptr(new Test("Terry")); 
    char * c = Testptr->name;
    cout << c << endl;

    Testptr->ShowName();

    *Testptr = "David";
    Testptr->ShowName();
     
    return 0;

}