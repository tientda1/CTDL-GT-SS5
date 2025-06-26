#include <stdio.h>
#include <string.h>

int isPalindromeRecursive(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (s[start] != s[end]) {
        return 0;
    }
    return isPalindromeRecursive(s, start + 1, end - 1);
}

int main() {
    char inputString[100];
    printf("Moi ban nhap vao mot chuoi bat ky:\n");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;


    int length = strlen(inputString);
    if (isPalindromeRecursive(inputString, 0, length - 1)) {
        printf("Ket qua: Chuoi \"%s\" LA chuoi doi xung.\n", inputString);
    } else {
        printf("Ket qua: Chuoi \"%s\" KHONG PHAI la chuoi doi xung.\n", inputString);
    }
    return 0;
}
