/*
对于布尔变量，与0值比较的标准if语句：
if(flag)
if(!flag)

对于整型变量，与0值比较的标准if语句：
if(value == 0)
if(value != 0)

对于浮点型变量，与0.0的比较：
if((x >= -EPSINON) && (x <= EPSINON))
if((x< -EPSINON) || (x > EPSINON))
其中，EPSINON是允许的误差（精度);

对于指针变量p与0的比较：
if（p == NULL)
if(p != NULL)

 */