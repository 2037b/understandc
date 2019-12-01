//
// Created by edz on 2019/12/1.
//

#include <stdio.h>

int main(void) {
  printf("sizeof(1)=%d\n", sizeof(1));
  printf("sizeof(+1)=%d\n", sizeof(+1));
  printf("sizeof(-1)=%d\n", sizeof(-1));
  printf("sizeof(unsigned -1)=%d\n", sizeof((unsigned) -1));
  printf("sizeof(double -1)=%d\n", sizeof((double) -1));
  printf("sizeof(double-1)=%d\n", sizeof(((double) -1)));
  printf("sizeof n+2=%d\n", sizeof('n') + 2);
  printf("sizeof(n+2)=%d\n", sizeof('n' + 2));
  printf("sizeof(n+2.0)=%d\n", sizeof('n' + 2.0));
  return 0;
}