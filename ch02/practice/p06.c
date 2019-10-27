#include<stdio.h>
int main(void) {
    int a;
    printf("%s", "请输入您的身高：");
    scanf("%d", &a);
    printf("您的标准体重是%.1lf公斤。\n",(a-100)*0.9);
}