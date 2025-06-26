#include <stdio.h>

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Nhap vao 1 so nguyen duong bat ky:\n");
    scanf("%d", &n);

    int result = factorial(n);
    printf("Giai thua cua %d la: %d", n, result);

    return 0;
}