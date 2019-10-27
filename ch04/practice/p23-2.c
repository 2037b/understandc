#include <stdio.h>
int main() {
    int i, j, len ;
    puts("生成直角在右上方的等腰直角三角形。") ;
    printf("短边：");
    scanf("%d", & len);
    int k=len;
    for (i = 1; len >= 0;len--,i++) {
        for (j=1; j <= k;j++) {
            if (i<=j) {
                printf("*");
            } else {
                printf(" ") ;
            }
        }

        printf("\n") ;
    }

    return 0 ;
}