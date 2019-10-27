#include<stdio.h>
int main(int argc, char const *argv[]) {
    int i, no;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    i = 1;

    if (no >= 0) {

        while (i <= no) {
            printf("%d ", i++);
        }

        printf("\n");
    }/* code */

    return 0;
}