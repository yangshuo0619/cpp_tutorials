//字符串中字串的查找
#include<stdio.h>
#include<assert.h>

const char *strstr(const char* src, const char* sub)
{
    const char* bp;
    const char* sp;

    if(src == NULL || NULL == sub)
    {
        return src;
    }

    while(*src)
    {
        bp = src;
        sp = sub;
        do 
        {
            if(!*sp)
            {
                return src;
            }
        }
        
        while(*bp++ == *sp++);
            src += 1;
     
     }
     return NULL;
}

int main()
{
    char p[] = "12345";
    char q[] = "34";
    const char *r = strstr(p,q);
    printf("r: %s \n",r);

    return 0;
}