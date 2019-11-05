#include <stdio.h>
int sump(int n) {
    int sum = 0;

    for (int i = 0; i <= n; ++i) {
        sum += i;
    }

    return sum;
}
int main(int argc, char const *argv[]) {
    int num;
    printf("%s\n", "请输入一个整数：");
    scanf("%d", &num);
    printf("%s%d%s%d\n", "1到", num, "之间的所有整数和为：", sump(num));
    return 0;
}