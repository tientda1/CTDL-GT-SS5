#include <stdio.h>

int sum(int n, int arr[]) {
    if (n == 0) {
        return 0;
    }
    return arr[n-1] + sum(n - 1, arr);
}

int main(void) {
    int n;
    int arr[50];
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu cua mang: ");
        scanf("%d", &arr[i]);
    }
    int result = sum(n, arr);
    printf("Tong cua mang la: %d", result);
    return 0;
}