#include<stdio.h>
#define swap(type,a,b) {type temp=a;a=b;b=temp;}
int main(int argc, char const *argv[]) {
    int x = 5, y = 10;
    swap(int, x, y);
    printf("x=%d,y=%d\n", x, y);
    return 0;
}