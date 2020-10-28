#include<iostream>
#include "String.h"

using namespace std;

int main(void)
{
    String str1;
    String str2(3,'A');
    String str3("hello");
    String str4(str3);

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;

    str1 = "test";
    cout << "str1 = " << str1 << endl;
    str1 = str3;
    cout << "str1 = " << str1 << endl;

    cout << str1[0] << endl;

    str1 += " world";
    cout << "str1 = " << str1 << endl;
    str1 += str2;
    cout << "str1 = " << str1 << endl;
    
    cout << "enter string to str1: " << endl;
    cin >> str1;
    cout << "str1 = " << str1 << endl;

    String t1 = "1234";
    String t2 = "1234";
    String t3 = "12345";
    String t4 = "12335";

    cout << "t1 == t2 ? " << (t1 == t2) << endl;
    cout << "t1 < t3 ? " << (t1 < t3) << endl;
    cout << "t1 > t4 ? " << (t1 > t4) << endl;
    cout << "t3 != t4 ? " << (t1 != t4) << endl;

    return 0;

}