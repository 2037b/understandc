#include<stdio.h>
#define NUMBER 80
int main(int argc, char const *argv[]) {
    int i, j;
    int num;                //学生实际人数；
    int score[NUMBER];      //学生分数；
    int section[11] = {0};  //分数段人数统计；
    printf("请输入学生人数：");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("\a请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    int max = 0;

    for (int i = 0; i < num; ++i) {
        printf("%2d号：", i + 1);

        do {

            scanf("%d", &score[i]);

            if (score[i] < 0 || score[i] > 100) {
                printf("请输入1～100的数：");
            }
        } while (score[i] < 0 || score[i] > 100);

        section[score[i] / 10]++;

        if (max < section[score[i]/10]) {       //max赋初值通过比较获取最大值；
            max = section[score[i]/10];
        }
    }

    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < 11; ++j) {
            if (section[j] >= max-i) {
                printf("%5s", "*");             //%5s同%5d；
            } else {
                printf("%5s", " ");
            }
        }

        putchar('\n');
    }

    for (i = 0; i < 60; ++i) {
        printf("-");
    }

    putchar('\n');

    for (int i = 0; i < 10; i++) {
        printf("%5d", i * 10);
    }

    printf("%5d\n", 100);
    return 0;
}