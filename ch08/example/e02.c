#include<stdio.h>
int leapYear(int m);
int date(int a, int b, int c);
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    b = -b;
    c = -c;
    printf("%d", date(a, b, c));
}
int leapYear(int m) {
    if ((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) {
        return 1;
    }

    return 0;
}
int date(int a, int b, int c) {
    int sum = 0, i;
    int common[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (leapYear(a)) {
        for (i = 0; i < b - 1; i++) {
            sum += common[i];
        }
    } else for (i = 0; i < b - 1; i++) {
            sum += leap[i];
        }

    sum += c;
    return sum;
}