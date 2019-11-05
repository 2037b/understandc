#include <stdio.h>
void intary_cpy(int v1[], int const v2[], int n) {
    for (int i = 0, temp = 0; i < n / 2; ++i) {
        v1[i] = v2[n - i - 1];
        v1[n - i - 1] = v2[i];
    }

    printf("%s\n", "经逆序排列后：");

    for (int i = 0; i < n; ++i) {
        printf("第%d个元素为：%d\n", i + 1, v1[i]);
    }
}
int main(int argc, char const *argv[]) {
    int num;
    int v1[]={0};
    int arr[100] = {0};
    printf("%s", "输入数组元素个数（不超过100个）：");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {
        printf("第%d个元素：", i + 1);
        scanf("%d", &arr[i]);
    }

    intary_cpy(v1, arr, num);
    return 0;
}