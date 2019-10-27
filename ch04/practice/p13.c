#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;
    printf("%s", "n的值为：");
    scanf("%d", &no);
    // int i = no;
    i = 0;
    // printf("%d%s", no, "的位数是：");
    printf("%s%d%s", "1到", no, "的和为");

    while (no > 0) {
        i += no;
        no--;
    }

    printf("%d", i);

    putchar('\n');
    return 0;
}