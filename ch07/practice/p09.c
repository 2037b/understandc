//
// Created by edz on 2019/12/2.
//
#include <stdio.h>
#include <math.h>
int main(void) {
  int area;
  printf("请输入正方形的面积：");
  scanf("%d", &area);
  printf("正方形的变长为：%f", sqrt(area));   //square root 平方根；
  return 0;
}