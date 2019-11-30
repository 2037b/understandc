#include <stdio.h>
int main(int argc, char const *argv[]) {
    int num, a[10] = {0, 0, 0, 0, 1, 2, 3, 4, 5, 6};
    int asize = sizeof(a) / sizeof(a[0]);

    while (1) {                                //循环输入输出；
        puts("输入想要插入的整数。");
        scanf("%d", &num);

        for (int i = asize - 1; i >= 0; i--) { //从最大值开始比较；
            if (num >= a[i]) {
                for (int j = 0; j < i; j++) {
                    a[j] = a[j + 1];		   //整体左移一位；	
                }

                a[i] = num;
                break;                         //跳出循环；
            }
        }

        for (int i = 0; i < asize; ++i) {      //遍历输出；
            printf("%d ", a[i]);
        }

        putchar('\n');
    }

    return 0;
}