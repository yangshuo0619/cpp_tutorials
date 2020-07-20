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
        
        while(*bp++ == *sp++);//bp是src的字串，bp和sp的每个字符挨个比较

        src += 1;//src后移到下一个位置
     
     }
     return NULL;
}

int main()
{
    char p[] = "string"; 
    char q[] = "t";
    const char *r = strstr(p,q);
    printf("r: %s \n",r);

    return 0;
}