#include <stdio.h>

int sum1(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum1(n - 1);
}

int main(void) {

    int n;
    printf("Nhap vao 1 so nguyen duong bat ky:");
    scanf("%d", &n);

    int sum = sum1(n);
    printf("Tong tu 1 den %d la: %d", n, sum);
    return 0;
}