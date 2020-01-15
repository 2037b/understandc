//
// Created by edz on 2019/12/2.
//
#include <stdio.h>

int main(void) {
  int global;
   int a=3;
   for (a = 4; a < 3; ++a);
  {int a=56; printf("%d",a);}
   putchar('\n');
   printf("%d",a);
}