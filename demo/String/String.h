#ifndef STRING_H
#define STRING_H

#include<iostream>

using namespace std;

//namespace STRING_M

class String
{
    String();
    String(int n,char c);
    String(const char* source);
    String(const String &s);
    ~String();

    String& operator = (char *s);//重载=，实现字符串赋值
    String& operator = (String &s);//重载=，实现对象赋值

    
    char& operator[](int i);//重载[],实现数组运算
    const char& operator[](int i) const;//对象为常量
    String& operator += (const String& s);
    String& operator += (const char* s);

    friend ostream& operator << (ostream& out,String& s);
    friend istream& operator >> (istream& in,String& s);

    friend bool operator < (const String& left, const String& right);
    friend bool operator > (const String& left, const String& right);
    friend bool operator == (const String& left, const String& right);
    friend bool operator != (const String& left, const String& right);
    char* getData();


    private:
        int size;
        char* data;
};

#endif
