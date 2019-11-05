#include <stdio.h>
int search_idx(int const v[], int idx[], int key, int n) {
    int element_num = 0;
    // v[n]=key;
    for (int i = 0; i < n; ++i)
    {
    	if (v[i]==key)
    	{
    		idx[i]=i;
    		element_num++;
    	}
    }
    return element_num;
}
int main(int argc, char const *argv[]) {
    int number, key_num;
    int arr[100] = {0}, index[] = {0};
    printf("%s", "输入数组元素个数：");
    scanf("%d", &number);

    for (int i = 0; i < number; ++i) {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }

    printf("%s", "请输入要查找的值：");
    scanf("%d", &key_num);
    printf("所要查找的值的个数为：%d\n", search_idx(arr, index, key_num, number));

    return 0;
}