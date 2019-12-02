#include <stdio.h>

/**
 * 判断字符串是否是空字符串
 * @param cp
 * @return 1 空字符串， 0 非空字符串
 */
int isEmpty(char *cp) {
    if (cp[0] != '\0') {
        return 1;
    } else {
        return 0;
    }
}
/**
 *  返回指定位置的字符
 * @param index
 * @return 0 如果index不合法或超出范围
 */
char charAt(char *cp, int index) {
    char s[81];
    int i, n;
    printf("input a string:");
    gets(s);
    printf("input n:");
    scanf("%d", &n);

    for (i = n; i < strlen(s); i++) {
        s[i] = s[i + 1];
    }

    printf("s=%s\n", s);
}
int main(int argc, char const *argv[]) {
    char *str = (char *)malloc(sizeof(char) * 10);
    gets(str);
    isEmpty(*str);
    return 0;
}