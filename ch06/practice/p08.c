#include <stdio.h>
int min_of(const int v[], int n) {          //int const v[]也可执行；
	int min=v[0];
	for (int i = 0; i < n; ++i)
	{
		if(v[i]<min)
			min=v[i];
	}
	return min;
}
int main(int argc, char const *argv[]) {
    int arr[100] = {0};
    int num, element;
    printf("%s", "输入数组个数（不超过100个）：");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {
        printf("%s", "输入数组元素：");
        scanf("%d",&arr[i]);
    }
    printf("数组中的最小值为：%d\n",min_of(arr,num) );
    return 0;
}