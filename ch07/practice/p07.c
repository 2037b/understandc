//
// Created by edz on 2019/12/2.
//
#include <stdio.h>
int main(void){
  float fl;
  double db;
  long double ldb;
  printf("请输入一个float值：");
  scanf("%f",&fl);
  printf("请输入一个double值：");
  scanf("%lf",&db);
  printf("请输入一个long double值：");
  scanf("%Lf",&ldb);
  printf("float型：%f\ndouble型：%lf\nlong double型：%Lf",fl, db, ldb);
  return 0;
}
