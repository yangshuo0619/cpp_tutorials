#include "String.h"
#include<memory.h>


String::String()
{
    data = new char[1];
    *data = '\0';
    size = 0;
}

String::String(int n,char c)
{
    data = new char[n+1];
    size = n;
    char *temp = data;
    while(n--)
    {
        *temp++ = c;
    }
    *temp = '\0';    
}

String::String(const char* source)
{
    if(source == NULL)
    {
        data = new char[1];
        *data = '\0';
        size = 0;
    }
    else
    {
        size = strlen(source);
        data = new char[size+1];
        strcpy(data,source);
    }
}

String::String(const String &s)
{
    size = s.size;
    //data = s.data;
    data = new char[s.size + 1];
    strcpy(data,s.data);
}

String& String::operator = (char *s)
{
    if(data != NULL)
    {
        delete []data;
    }
    size = strlen(s);
    data = new char(size + 1);   
    strcpy(data,s);
    return *this;
}

String& String::operator = (const String &s)
{
    if(this == &s)//如果s就是自己，则返回*this
    {
       return *this;
    }
    if(data != NULL)
    {
        delete []data;
    }
    size = strlen(s.data);
    data = new char[size + 1];
    strcpy(data,s.data);
    return *this;
}

String::~String()
{
    if(data != NULL)
    {
        delete []data;
        data = NULL;
        size = 0;
    }
}
  
char& String::operator[](int i)//取数组下标为i的字符元素
{
    return data[i];
}   

const char& String::operator[](int i) const
{
    return data[i];
}

String& String::operator += (const String& s)
{
    int len = this->size + s.size + 1; 
    char * temp = data;
    data = new char[len];//申请足够的堆内存来存放链接后的字符串
    size = len - 1;
    strcpy(data,temp);
    strcat(data,s.data);
    delete []temp;
    return *this;
}

String& String::operator += (const char* s)
{
    if (s == NULL)
    {
        return *this;
    }
    int len = size + strlen(s) + 1;
    char * temp = data;
    data = new char[len];
    strcpy(data,temp);
    strcat(data,s);
    delete []temp;
    size = len - 1;
    return *this;
}

int String::length()
{
    return size;
}

char* String::getData()
{
    return data; 
}

ostream& operator << (ostream& out,String& s)
{
    for(int i = 0;i < s.length(); i++)
    {
        out << s[i] << " ";
    }
    return out;
}

istream& operator >> (istream& in,String& s)
{
    char p[50];
    in.getline(p,50);
    s = p;
    return in;
}

bool operator < (const String& left, const String& right)
{
    int i = 0;
    while(left[i] == right[i] && left[i] != 0 && right[i] != 0)
    {
        i++;
    }
    return left[i] - right[i] < 0 ? true : false;
}

bool operator > (const String& left,const String& right)
{
    int i = 0;
    while(left[i] == right[i] && left[i] != 0 && right[i] != 0)
    {
        i++;
    }
    return left[i] - right[i] > 0 ? true : false;
}

bool operator == (const String& left,const String& right)
{
    if(strcmp(left.data,right.data) == 0)
    {
        return true;
    }
    return false;
}

bool operator != (const String& left,const String& right)
{
    if(strcmp(left.data,right.data) == 0)
    {
        return false;
    }
    return true;
}




