#include<stdio.h>
#include<math.h>
#include<string.h>

int octalToDec(int oct) {

    int pos = 0;
    int sum = 0;

    while (oct > 0) {
        sum += oct % 10 * pow(8, pos);
        pos++;
        oct /= 10;
    }

    return sum;
}

int octalStrToDec(char oct[]) {

    int length = strlen(oct);
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += (oct[i] - '0') * pow(8, length - 1 - i);
    }

    return sum;
}

int main(int argc, char const *argv[]) {

    int input = 0;
    char inputstr[200];
    scanf("%d", &input);
    scanf("%s", inputstr);

    printf("%d\n", octalToDec(input));
    printf("%d\n", octalStrToDec(inputstr));

    return 0;

}