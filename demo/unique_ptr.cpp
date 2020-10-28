#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr<int> pInt(new int(5));
    cout<<*pInt<<endl;


}