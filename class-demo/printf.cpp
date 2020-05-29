#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 9.0l;
    float f = 5;
    printf("%f \n",5); //内存越界，结果为0.000 000
    printf("%lf \n",5.0l); //应该为5.000 000 但是实际输出是0.000 000 
    printf("%f \n",f);

    printf("%d \n",4.0l);//应该为0，但是实际输出是2？？？
    printf("%d \n",i);
    return 0;
    
}