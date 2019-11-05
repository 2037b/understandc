#include <stdio.h>
/*-------两次成绩相加，存储在新的矩阵中。----------*/
void mat_add(int a[4][3], int  const c[2][4][3]) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 3; ++k) {
            	for (int i = 0; i < 2; ++i) {
                a[j][k]+=c[i][j][k];
            }
        }
    }
}
/*-------显示4行3列的矩阵。----------*/
void mat_print(int const m[4][3]) {
    for (int j = 0; j < 4; ++j) {
        for (int k = 0; k < 3; ++k) {
            printf("%d ", m[j][k]);
        }

        putchar('\n');
    }
}
int main(int argc, char const *argv[]) {
    int score[2][4][3] = {{{91, 32, 45}, {67, 72, 46}, {98, 87, 100}, {56, 76, 89}},
        {{94, 62, 75}, {87, 62, 86}, {99, 89, 80}, {96, 79, 91}}
    };
    int sum[4][3]={0};
    mat_add(sum,score);
    puts("总分"); mat_print(sum);
    return 0;
}