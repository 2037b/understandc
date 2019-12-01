//
// Created by edz on 2019/12/1.
//

#include <stdio.h>
#include <limits.h>

int main(void) {
  unsigned uns_num;           //unsigned int uns_num;
  printf("请输入一个整数：");
  do {
    scanf("%u", &uns_num);
    if (uns_num > UINT_MAX)
      printf("您输入的整型过大，请重新输入。");
  } while (uns_num > UINT_MAX);
  printf("把整数向左移动3位后其值等于其乘以2的指数幂后的值：%u = %u\n", uns_num << 3, uns_num * 2 * 2 * 2);
  printf("把整数向右移动3位后其值等于其乘以2的指数幂后的值：%u = %u", uns_num >> 3, uns_num / 2 / 2 / 2);
  return 0;
}