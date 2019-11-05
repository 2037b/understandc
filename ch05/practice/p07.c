#include <stdio.h>
#define NUMBER 100
int main(int argc, char const *argv[]) {
    int num, a[NUMBER];
    printf("数据个数：");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {
        printf("%d号：", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < num; ++i) {
        if (i == 0) {
            printf("{%d,", a[i]);
        }  else if(i!=num-1) {
            printf("%d,", a[i]);
        }

        if (i == num - 1) {
            printf("%d}\n", a[i]);
        }
    }

    // putchar('\n');
    return 0;
}