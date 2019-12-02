#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {

    char *p = "ABC";

    char arr[] = "ABC";
    char arr1[] = "ABC";
    char arr2[] = "ABC";

    // arr 不能再修改指向的地址
    // p 可以修改指向的地址

    // *p="ABC" 进行赋值的时候，表示静态区中开辟了4byte，返回A的地址给指针
    // arr[]= "ABC" 相当于栈区开辟4byte，里面的内容保存了ABC\0

    // p+1  arr+1 都是移动一个byte
    // &arr  和  &"ABC" 是指向4byte的存储单元的指针，每次+1 移动4byte

    // *p 取到的是 'A'  *arr 取到的是 'A'
    // *(p+1)取到的是'B' *(arr+1)取到的是'B'
    // *p 如果指向的是 "ABC" 字符串常量，无法改变其中的内容 即*p = 'F' 报错
    // *arr 的内容可以随意更改，修改的是字符串第一个字符

    // 无论是p 还是arr 保存都是字符串的第一个字符的地址，"ABC"实际上返回的是A的地址


    printf("%p\n", p);
    printf("%p\n", arr);
    printf("%p\n", arr1);
    printf("%p\n", arr2);
    printf("%p\n", p0);


    // char *a = "A";

    // // "B"

    // // "C"

    // // printf("%p\n", "ABC");
    // printf("%p\n", arr);
    // printf("%p\n", a);


    // printf("%p\n", arr + 1);
    // printf("%p\n", arr + 2);

    // printf("%c\n", *arr);
    // printf("%c\n", *(arr + 1));
    // printf("%c\n", *(arr + 2));

    // char *arr1 = "ABCD";

    // char *arr2 = &"ABCD";

    // printf("%p\n", "ABCD");
    // printf("%p\n", &"ABCD");
    // printf("%p\n", arr1);

    // // arr = "BCD";

    // char c = 'F';
    // printf("%s\n", arr);
    // arr = &c;
    // printf("%c\n", *arr);

    // *arr = 'A';
    // printf("%c\n", *arr);
    // printf("%c\n", c);

    return 0;
}