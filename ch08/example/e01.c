#include <stdio.h>
enum triangle {equilateral, normal, isosceles, isNot};
void equilateral(void) {
    puts("这是一个等边三角形。");
}
void normal(void) {
    puts("这是一个普通三角形。");
}
void isosceles(void) {
    puts("这是一个等腰三角形。");
}
void isNot(void) {
    puts("这不是一个三角形。");
}
int main(int argc, char const *argv[]) {
    enum triangle picked;
    return 0;
}