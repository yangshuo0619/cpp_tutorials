#include<iostream>


void process_value(int &i)
{
    std::cout<<"left value processed: "<< i << std::endl;

}

void process_value(int &&i)
{
    std::cout<<"right value processed: "<< i <<std::endl;

}

int main()
{
    int a= 10;
    int b=5;
    int& l = a;
    int && r = 6;
    process_value(a);
    process_value(8);
    process_value(l);
    process_value(r);
}