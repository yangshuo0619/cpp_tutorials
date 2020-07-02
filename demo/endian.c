/*
# 大端模式 小端模式

在各种计算机体系结构中，对于字节、字等的存储机制有所不同，因而引发了计算机通信领域中一个很重要的问题，
即通信双方交流的信息单元（比特、字节、字、双字等等）应该以什么样的顺序进行传送。如果不达成一致的规则，通信双方将无法进行正确的编/译码从而导致通信失败。 
1）Little-endian：将低序字节存储在起始地址（低位编址）
2）Big-endian：将高序字节存储在起始地址（高位编址）

如果我们将0x1234abcd写入到以0x0000开始的内存中，则结果为；
address   big-endian 	little-endian
0x0000 	    0x12 	    0xcd
0x0001      0x34 	    0xab
0x0002   	0xab 	    0x34
0x0003   	0xcd 	    0x12

每个地址存一个字节，2位16进制数是一个字节，0x12;

*/

//判断处理器是big_endian 还是 little_endian
int checkCPU()
{
    union w
    {
        int a;
        int b;
    } c;
    c.a = 1;
    return (c.b == 1);
}

int main()
{
    printf("%d \n",checkCPU());
    unsigned int zero = 0;

    //处理器字长
    unsigned int c = 0xFFFF;
    unsigned int cc = ~0;
}