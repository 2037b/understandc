#include <stdio.h>
#define stu 6
#define grade 2
int main(int argc, char const *argv[]) {
    int sum = 0, avg = 0;
    int arr1[stu][grade];    //学生成绩表；
    printf("%s\n", "请输入6名学生的2门课程成绩。");

    for (int i = 0; i < stu; ++i) {
        printf("学生%d：\n", i + 1);
        printf("%s", "语文：");
        scanf("%d", &arr1[i][0]);
        printf("%s", "数学：");
        scanf("%d", &arr1[i][1]);
    }

    for (int i = 0; i < stu; ++i) {
        sum += arr1[i][0];
    }

    printf("%s%d\n", "语文总分：", sum);
    sum = 0;

    for (int i = 0; i < stu; ++i) {
        sum += arr1[i][1];
    }

    printf("%s%d\n", "数学总分：", sum);

    for (int i = 0; i < stu; ++i) {
        sum = 0;

        for (int j = 0; j < grade; ++j) {
            sum += arr1[i][j];
            avg = sum / 2;
        }

        printf("学生%d的总分为%d\n", i + 1, sum);
        printf("学生%d的平均分为%d\n", i + 1, avg);
    }

    return 0;
}