#include <stdio.h>

void recursion(int n) {
    if (n == 0) {
        return;
    }
    printf("%d\n", n);
    recursion(n - 1);
}

int main(void) {
    int n;
    printf("Nhap vao 1 so nguyen duong bat ky:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }
    recursion(n);
    return 0;
}

