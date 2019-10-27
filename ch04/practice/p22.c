#include <stdio.h>
int main() {
    int i, j ;
    int height, width;
    int no1,no2;
    printf("让我们来画个正方形\n") ;
    printf("一边："); scanf("%d", & no1) ;
    printf("另一边："); scanf("%d", & no2) ;
    if(no1>no2){
        width=no1;height=no2;
    }else{
        width=no2;height=no1;
    }
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            printf("*") ;
        }

        printf("\n") ;
    }

    return 0 ;
}