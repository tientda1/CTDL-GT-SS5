#include <stdio.h>
#include <string.h>

int convertStringToIntRecursive(char* str, int n) {
    if (n == 0) {
        return 0;
    }
    char lastChar = str[n - 1];

    int digit = lastChar - '0';
    return convertStringToIntRecursive(str, n - 1) * 10 + digit;
}

int main() {
    char numStr[100];
    printf("Nhap vao 1 chuoi ky tu: ");
    scanf("%s", numStr);

    int length = strlen(numStr);
    int result;
    result = convertStringToIntRecursive(numStr, length);
    printf("Chuoi \"%s\" duoc chuyen doi thanh so nguyen: %d\n", numStr, result);

    return 0;
}