//
// Created by edz on 2019/12/1.
//
#include <stdio.h>
unsigned set_n(unsigned x, int pos, int n) {
  for (int i = 0; i < n - pos; i++) {
    unsigned int mask = (1u << (pos + i));
    x = (mask | x);
  }
  return x;
}
unsigned reset_n(unsigned x, int pos, int n) {
  unsigned mask = 1u;
  int i;
  for (i = 0; i < n - pos; i++) {
    if (x & (1u << pos + i))
      x = (x ^ (1u << pos + i));
  }
  return x;

}
unsigned inverse_n(unsigned x, int pos, int n) {
  int i;
  unsigned mask = 1u;
  for (i = 0; i < n - pos; i++) {
    x = (x ^ (mask << pos + i));
  }
  return x;
}
int main(void) {
  unsigned num, pos, n;
  puts("请输入一个整数、第几位以及要操作的位数：");
  scanf("%d%d%d", &num, &pos, &n);
  printf("将第%d位到第%d位设为1后的值%d\n", pos, pos + n - 1, set_n(num, pos, n));
  printf("将第%d位到第%d位设为0后的值%d\n", pos, pos + n - 1, reset_n(num, pos, n));
  printf("将第%d位到第%d位取反后的值%d", pos, pos + n - 1, inverse_n(num, pos, n));
  return 0;
}

