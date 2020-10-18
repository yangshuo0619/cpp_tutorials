//bianchengfanshi
//mainxiangguocheng\mianxiangduixiang\fanxingbiancheng\hanshushibiancheng

#include<iostream>

using namespace std;

int add1(int a, int b)
{
    return a + b;
}

class ADD{
public:
    int operator()(int a, int b){
        return a + b;
    }
};

template<typename T, typename U>
auto add3(T a, U b)->decltype(a + b){
    return a + b;
}


auto add4 = [](int a, int b)-> int{
    return a + b;
};



int main(){
    cout << add1(3,4) << endl;
    ADD add2;
    cout << add2(3,4) << endl;
    cout << add3(3,4) << endl;
    cout << add4(3,4) << endl;

    return 0;
}

