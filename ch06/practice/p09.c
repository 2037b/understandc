#include <stdio.h>
void rev_intary(int v[], int n) {
    for (int i = 0, temp = 0; i < n / 2; ++i) {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }

    printf("%s\n", "经逆序排列后：");

    for (int i = 0; i < n; ++i) {
        printf("第%d个元素为：%d\n", i + 1, v[i]);
    }
}
int main(int argc, char const *argv[]) {
    int num;
    int arr[100] = {0};
    printf("%s", "输入数组元素个数（不超过100个）：");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {
        printf("第%d个元素：", i + 1);
        scanf("%d", &arr[i]);
    }

    rev_intary(arr, num);
    return 0;
}