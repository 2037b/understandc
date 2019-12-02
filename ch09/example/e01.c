#include <ctype.h>
#include <stdio.h>
void lowercase(char s[]) {

    int i = 0;

    while (s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
}
void capitalcase(char s[]) {
    int i = 0;

    while (s[i]) {
        s[i] = tolower(s[i]);
        i++;
    }
}
int main(int argc, char const *argv[]) {
    char str[128];
    printf("%s", "请输入一串字符：");
    scanf("%s", str);
    lowercase(str);
    printf("大写字母：%s\n", str);
    capitalcase(str);
    printf("小写字母：%s\n", str);
    return 0;
}