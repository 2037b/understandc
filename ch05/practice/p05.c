#include <stdio.h>
#define NUMBER 7
int main(int argc, char const *argv[]) {
    int i;
    int x[NUMBER];

    for (int i = 0; i < NUMBER; ++i) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < NUMBER / 2; ++i) {
        int temp = x[i];              //声明临时变量temp；
        x[i] = x[NUMBER - 1 - i];
        x[NUMBER - 1 - i] = temp;
    }

    puts("倒序排列了。");

    for (int i = 0; i < NUMBER; ++i) {
        printf("x[%d]=%d\n", i, x[i]);
        /* code */
    }

    return 0;
}