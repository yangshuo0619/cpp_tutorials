#include<iostream>

class widget
{
    public:
        widget()
        {
            count++;
            std::cout<<"create class" << std::endl;
        }
        virtual ~widget()
        {
            --count;
            std::cout<<"destory class" << std::endl;
        }
        static int getcount()
        {
            return count;
        }
    private:
        static int count; //表示类widget实例的个数
};
//类widget中 有一个静态成员count,一个静态方法getcount().类中的静态成员或方法是不属于类的实例，而属于类本身。
//在调用他们时应该用 类名加上操作符:: 来使用。

int widget::count = 0;

int main()
{
    widget x,y;
    std::cout << widget::getcount() << std::endl;

    if(widget::getcount() > 1)
    { 
        widget a,b,c;
        std::cout << widget::getcount() << std::endl;
    }//三个实例在此时被销毁。

    widget z;
    std::cout << widget::getcount() << std::endl;
}