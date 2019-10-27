#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    int num = 1;

    while ((num = num * 2) < no) {
        printf("%d ", num);
        // i++;

    }

    printf("\n");
    return 0;
}