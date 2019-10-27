#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    int num = 2;

    while (num<no) {
        printf("%d ", num);
        // i++;
        num+=2;
    }

    printf("\n");
    return 0;
}