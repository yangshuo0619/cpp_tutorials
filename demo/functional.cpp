#include <iostream>
#include <functional>


void gFunc(){
    std::cout<<"functional test"<<std::endl;
}

int gFunc1(int a)
{   
    return a*a;
}

int main()
{
    std::function<void()> f = gFunc;
    f();

    std::function<int(int)> f1 = gFunc1;
    int a = f1(3);
    std::cout<<a<<std::endl;
    return 0;
}


