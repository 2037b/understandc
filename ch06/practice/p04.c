#include <stdio.h>
int pow4(int x) {
    int power = x;

    for (int i = 0; i < 3; ++i) {
        power *= x;
    }

    return power;
}
int main(int argc, char const *argv[]) {
    int num;
    printf("%s\n", "请输入一个整数：");
    scanf("%d", &num);
    printf("%d的四次幂为：%d\n", num, pow4(num));
    return 0;
}