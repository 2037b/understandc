#include<stdio.h>
int main(void) {
    char c;
    int i=0, j=0, k=0, h=0;

    // scanf("%",&c);
    do{
        c = getchar();

        if (c >= '0' && c <= '9') {
            // i = 0;
            i++;
            /* code */
        }

        if (c >= 'a' && c <= 'z') {
            // j = 0;
            j++;
            /* code */
        }

        if (c >= 'A' && c <= 'Z') {
            // k = 0;
            k++;
            /* code */
        }

        if (c == ' ') {
            // h = 0;
            h++;
            /* code */
        }
    } while (c!= '\n');

    printf("数字%d 小写英文%d 大写英文%d 空格%d\n", i, j, k, h);
    return 0;
}