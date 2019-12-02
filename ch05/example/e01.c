#include<stdio.h>
int main(int argc, char const *argv[]) {
    int a[5] = {1, 2, 3, 4, 5}, temp;
    int asize = sizeof(a) / sizeof(a[0]);	//获取数组长度；

    for (int i = 0; i < asize / 2; i++) {   //循环次数；
        temp = a[i];                        //声明临时变量temp；
        a[i] = a[asize - i - 1];
        a[asize - i - 1] = temp;			//交换值；
    }

    for (int i = 0; i < asize; ++i) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}