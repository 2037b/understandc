#include<stdio.h>
int main(int argc, char const *argv[]) {
    int i, j, k;
    printf("%s", "开始数值（cm）：");
    scanf("%d", &i);
    printf("%s", "结束数值（cm）：");
    scanf("%d", &j);
    printf("%s", "间隔数值（cm）：");
    scanf("%d", &k);
    int height;double weight;
    height = i; 

    while (height <= j) {
    	weight = (height-100)*0.9;
        printf("%dcm   %.2lfkg\n",height,weight);
        height+=k;
    }

    putchar('\n');
    return 0;
}