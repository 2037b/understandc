//
// Created by edz on 2019/12/1.
//
#include <stdio.h>
unsigned rrotate(unsigned x, int n) {
  return x >> n;
}
unsigned lrotate(unsigned x, int n) {
  return x << n;
}
int main(void) {
  unsigned num;
  int n;
  puts("请输入一个整数和移动的位数：");
  scanf("%d%d", &num, &n);
//  scanf("%d",&n);
  printf("%d向右移%d位的值为：%d\n", num, n, rrotate(num, n));
  printf("%d向左移%d位的值为：%d", num, n, lrotate(num, n));
  return 0;
}
