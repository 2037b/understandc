#include <stdio.h>
int main(void) {
    int a = 2;
    int b,c;
    b=8.2 * 5.2;
    c=8.2 / 5.2;
    double d = 5.0;
    printf("a=%d,b=%f\n", a, d);
    // printf("%s\n", "整数x：");
    printf("8.2*5.2=%d\n", b);
    printf("8.2/5.2=%d\n", c);
    printf("8.2*5.2=%f\n", 8.2 * 5.2);
    printf("8.2/5.2=%f\n", 8.2 / 5.2);
    printf("a*b=%d\n", a * d);
    printf("a*b=%lf\n", a * d);
    printf("a/b=%d\n", a / d);
    printf("a/b=%lf\n", a / d);
    return 0;
    // scanf("%d", &y);
//    printf("%s%.f%s\n", "x的值是y的", x*1.0*100/y,"%");
}