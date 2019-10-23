#include <stdio.h>
int  main(void) {
	int length,width;
	printf("%s","请输入长方形的长和宽：\n");
	scanf("%d%d",&length,&width);
	printf("长方形的长和宽分别是%d、%d\n", length,width);
    printf("%s%d\n","长方形的面积是", length*width);
    //return 0;
}