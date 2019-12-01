//
// Created by edz on 2019/12/1.
//

//二进制的最右边位为第0位。
#include <stdio.h>
unsigned set(unsigned x, int pos) {
  unsigned i = 1;
  return x | (i << pos);
}
unsigned reset(unsigned x, int pos) {
  unsigned i = 1;
  return x & ~(i << pos);
}
unsigned inverse(unsigned x, int pos) {
  unsigned i = 1;
  return x ^ (i << pos);
}
int main(void) {
  unsigned num, pos;
  puts("请输入一个整数和要操作的位数：");
  scanf("%d%d", &num, &pos);
  printf("将第%d位设为1后的值%d\n", pos, set(num, pos));
  printf("将第%d位设为0后的值%d\n", pos, reset(num, pos));
  printf("将第%d位取反后的值%d", pos, inverse(num, pos));
  return 0;
}
