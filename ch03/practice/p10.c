#include<stdio.h>
int main(void) {
    int n1, n2, n3;
    printf("%s\n", "请输入三个整数。");
    printf("整数A："); scanf("%d", &n1);
    printf("整数B："); scanf("%d", &n2);
    printf("整数C："); scanf("%d", &n3);

    if (n1 == n2 && n1 == n3) {
        puts("三个值都相等。");
    } else if (n1 != n2 && n1 != n3) {
        n2 != n3 ? puts("三个值各不相同。") : puts("有两个值相等。");
    }else{
        puts("有两个值相等。");
    }

    return 0;
}