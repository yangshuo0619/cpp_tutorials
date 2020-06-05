// 位运算符

// 位运算符作用于位，并逐位执行操作。
#include <iostream>
#include <stdio.h>

using namespace std;
 
int main()
{
   //demo1:
   unsigned int a = 60;      // 60 = 0011 1100  
   unsigned int b = 13;      // 13 = 0000 1101
   int c = 0;           
 
   c = a & b;             // 12 = 0000 1100  交集
   cout << "Line 1 - c 的值是 " << c << endl ;
 
   c = a | b;             // 61 = 0011 1101  并集
   cout << "Line 2 - c 的值是 " << c << endl ;
 
   c = a ^ b;             // 49 = 0011 0001
   cout << "Line 3 - c 的值是 " << c << endl ;
 
   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - c 的值是 " << c << endl ;
 
   c = a << 2;            // 240 = 1111 0000 a左移两位
   cout << "Line 5 - c 的值是 " << c << endl ;
 
   c = a >> 2;            // 15 = 0000 1111 a右移两位
   cout << "Line 6 - c 的值是 " << c << endl ;


   //demo2:
   unsigned short int i = 0;//short int范围是 0～65535 ，i=0,内存数据为0x0000;
   unsigned char ii = 255; //uchar 范围是0～255 ， ii = 255, 0xff;

   i = i - 1; //0x0000 -1 =>0xffff 65535
   ii = ii + 1;//0xff +1 => 0x00 0

   int j = 8, p, q;
   p = j << 1;//<<为左移操作， <<n相当于乘以2n。!!!!!!!!!!!!
   q = j >> 1;//>>为右移操作，>>n相当于处以2n。 !!!!!!!!!!!!!!!
 
   printf("i = %d \n",i);
   printf("ii = %d \n",ii);
   printf("%d \n",p);
   printf("%d \n",q);
   
   return 0;
}
