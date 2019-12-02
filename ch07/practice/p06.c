//
// Created by edz on 2019/12/2.
//

#include <stdio.h>
#include <limits.h>
int main(void){
  unsigned num1;

  printf("无符号整型的最大值为： %u\n",UINT_MAX);

  puts("请输入一个整型数：");
  scanf("%u", &num1);

  printf("将无符号整形最大值与输入整型数相加：%u",UINT_MAX + num1);

  return 0;
}