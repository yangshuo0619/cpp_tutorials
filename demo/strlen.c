//计算字符串的长度
#include<stdio.h>
#include<assert.h>

int strlen1(const char * p)//要使用const修饰形参
{
    assert(NULL != p);
    int len = 0;
    while(*p++ != '\0')//注意是最后是以'\0'结尾.p++ 再解引用
        {
            printf("%c \n",*p);
            len++;
        }
    return len;
}

int strlen2(const char *p)
{
    assert(NULL != p);
    const char * temp = p;//取字符的首地址
    while(*p++ != '\0');
    return (p-temp-1);  
}

int main()
{
    char c1[] = "hello,world";
    printf("strlen1: %d \n", strlen1(c1));
    printf("strlen2: %d \n", strlen2(c1));
    return 0;
}

