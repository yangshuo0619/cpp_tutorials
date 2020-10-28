#include<stdio.h>

char getchar(int x, int y)
{
    unsigned int  a = x;
    char c;
    (a + y > 10)  ? (c =1) : (c=2); //将x转换为无符号整型再与y相加。
    //当表达式中存在 有符号类型 和 无符号类型时，所有的操作数都将自动转换成 无符号类型。！！！！
    //即y先转换为无符号类型，再与a相加。
    
    return c;
}

int main(void)
{
    char c1 = getchar(7,4); //11, 1 
    char c2 = getchar(7,3); //10,2
    char c3 = getchar(7,-7);//-7转换为一个很大的正数，加7正好溢出，值为0; c =2.
    char c4 = getchar(7,-8);//-8转换为一个很大的数，与7相加，得到最大值，差1溢出。

    char c = -1;
    unsigned char uc =c;//cc = 255; 即unsigned = signed + 256(max);!!!!
    char d = -2;
    unsigned char ud =d;//cc = 254; -2+256 = 254;
    char e = -128;
    unsigned char ue =e;//cc = 128; -128+256=128;   0-127; 128-255 对应 (-128 ~ -1);
    printf("%d\n",ue);


    printf("%d\n",c1);
    printf("%d\n",c2);
    printf("%d\n",c3);
    printf("%d\n",c4);

}