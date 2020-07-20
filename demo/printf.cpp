//printf输出不同类型的变量
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 9.0l;
    float f = 5;
    printf("%f \n",5); //printf根据说明符 %f 认为参数是 double 型的参数，因此会从 栈中读8个字节。！！ 
                       // 但实际参数是5,int型，所以在栈中只分配了4个字节。这样printf从栈中读8个字节，内存访问越界。  结果为0.000 000
  
    printf("%lf \n",5.0l); //应该为5.000 000 但是实际输出是0.000 000 
    printf("%f \n",f);

    printf("%d \n",5.0l);//5.0l占8个字节，而printf只读4个字节。会有不可预料的情况。
    printf("%d \n",i);
    return 0;
    
}

/* 32位平台中int和float都占4个字节，double占8个字节。
printf根据说明符 %f 认为参数是 double 型的参数，因此会从 栈中读8个字节。
printf根据说明符 %d 认为参数是 int 型的参数，因此会从 栈中读4个字节。
*/
