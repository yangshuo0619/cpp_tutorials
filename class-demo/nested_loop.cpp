// 使用了一个嵌套的 for 循环来查找 2 到 100 中的质数：
#include <iostream>
using namespace std;
 
int main ()
{
    int i, j;
    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++) {
            if(!(i%j)) {
                break; // 如果找到，则不是质数
            }
        }
        if(j > (i/j)) {
            cout << i << " 是质数\n";
        }
    }
    return 0;
}
