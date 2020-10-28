/*
volatile  修饰符 
volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。
因为对于一般的变量 编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
一个定义为volatile的变量，优化器在用到这个变量时必须每次都小心的重新读取这个变量的值。
而不是使用保存在寄存器里的备份。

volatile变量的例子：
1.并行设备的 硬件寄存器（eg,状态寄存器）
2.一个中断服务子程序中会访问到的非自动变量
3.多线程应用中被几个任务共享的变量


 */

