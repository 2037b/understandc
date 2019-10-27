#include <stdio.h>
int main() {
    int i,j,len ;
    puts("生成直角在左上方的等腰直角三角形。") ;
    printf("短边：");
    scanf("%d", & len) ;

    for (; len >= 0; len--) {
        for (j = 1; j <= len; j++) {
            printf("*") ;
        }

        printf("\n") ;
    }

    return 0 ;
}