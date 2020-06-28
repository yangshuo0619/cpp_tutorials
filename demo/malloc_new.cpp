//malloc和new都可以申请内存，但malloc不会对对象做初始化。不会调用构造函数。
//free和delete都可以释放内存。但free不会调用析构函数，delete会。
//对于非内部数据类型的对象而言，对象在消亡之前要自动执行析构函数。但malloc和free是库函数而不是运算符，
//不在编译器控制权限内，不能把执行构造函数/析构函数的任务强加于malloc/free，所以需要用new/delete.

#include<iostream>

using namespace std;

class Obj
{
    public:
        Obj(void){
            cout << "init obj;" << endl;
        }
        ~Obj(void){
            cout << "destroy obj;" << endl;
        }
};

void UseMallocFree(void)
{   
    //调用 malloc/free 申请和释放堆内存
    cout  << "in usemallocfree(); " << endl;
    Obj *a = (Obj *)malloc(sizeof(Obj));
    free(a);
}

void UseNewDelete(void)
{
    //调用 new/delete 申请和释放内存
    cout <<"in usenewdelete(); " << endl;
    Obj *a = new Obj;
    delete(a);
}

int main()
{
    UseMallocFree();
    UseNewDelete();
    return 0;
    
}