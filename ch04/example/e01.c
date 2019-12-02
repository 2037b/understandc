#include<stdio.h>
int main() {
    int a, b, c;
    int i = 0;

    // printf("%d\n", a);
    for (a = 1; a < 144; ++a) {
        for (b = 1; b < 73; ++b) {
            for (c = 1; c < 30; ++c) {
                if (a + 2 * b + 5 * c == 150 && a + b + c <= 100) {
                    i++;
                    printf("1分：%d  2分：%d  5分：%d\n", a, b, c);
                    printf("num:%d\n", i);
                }
            }

            /* code */
        }

        /* code */
    }

    // printf("%d\n",i );
    return 0;
}