/*
C++ 字符串

## C++ 提供了以下两种类型的字符串表示形式：

   * C 风格字符串: char
   * C++ 引入的 string 类类型 : string

## C 风格字符串: 头文件： <cstring>

C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词 "Hello" 的字符数多一个。

char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

依据数组初始化规则，您可以把上面的语句写成以下语句：

char greeting[] = "Hello";

 */

#include<iostream>
//c
#include<cstring>
//c++
#include<string>

using namespace std;

int main()
{
//C:
    //单个字符
    char c = 'c';
    cout << " c: " << c << endl;

    //字符串数组
    //1.
    char greeting[6] = {'h','e','l','l','o','\0'};
    cout << "greeting message: " << greeting << endl;
    //2.
    char str1[] = "hello"; 
    char str2[] = "world";
    char str3[11];
    
    int len;

    // 复制 str1 到 str3,str3 是输出
    strcpy(str3,str1);
    cout << "strcpy(str3,str1) : " << str3 << endl;
    //连接str2到上str1后面，str1是输出
    strcat(str1,str2);
    cout << "strcat(str1,str2): " << str1 << endl;

    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

//C++
    string s_a = "TEST";
    string s_b = "string";
    string s_c;
    string s_d = "hello kitty";//string s_d{"hello kitty"};需要-std=c++11
    
    int len_s;
    
    //复制
    s_c = s_a;
    cout << s_c << endl;
    s_c = s_a + s_b;
    cout << s_c << endl;;
    cout << s_d << endl;

    len = s_c.size();
    cout << "s_c.size() : " << len << endl;

    return 0;
 
}