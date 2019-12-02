#include<stdio.h>

void removeByIndex(char arr[], int index);
void removeSpace(char arr[]);

void removeSpace(char arr[]) {
    int i = 0;

    while (arr[i]) {
        if (arr[i] == ' ') {
            removeByIndex(arr, i);
        } else {
            i++;
        }
    }
}

void removeByIndex(char arr[], int index) {

    if (arr[index] == '\0') {
        return;
    }

    int count = index + 1;

    do {
        arr[count - 1] = arr[count];
    } while (arr[count++]);
}


int main(int argc, char const *argv[]) {

    char input[200];
    scanf("%[^\n]", input);

    removeSpace(input);

    printf("%s\n", input);

    return 0;

}