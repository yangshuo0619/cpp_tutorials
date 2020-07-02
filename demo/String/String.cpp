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
    while(n--)
    {*data ++ = c;}
    *data = '\0';
    
    // char *temp = data;
    // while(n--)
    // {
    //     *temp++ = c;
    // }
    // *temp = '\0';    
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

