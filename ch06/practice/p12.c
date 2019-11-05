#include<stdio.h>
#define M 4
#define N 3
void mat_mul(int const a[4][3], int const b[3][4], int c[4][4]) {
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];    //矩阵相乘的规则；
            }
}

int main() {
    int a[M][N], b[N][M], c[M][M] = {0};
    int i, j, k;
    puts("请输入第一个矩阵:");

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }

    puts("请输入第二个矩阵:");

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }

    mat_mul(a, b, c);

    return 0;
}