#include <stdio.h>
int  main(void) {
	int a;
    printf("%s","请输入一个整数：");	
    scanf("%d",&a);
    printf("%s%d%s\n","该整数减去6的结果是",a-6,"。");
    return 0;
}