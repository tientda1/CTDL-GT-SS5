#include <stdio.h>

void getFibonacci(int fibonacci[],int i,int n, int prev, int curr) {
    if (i <= n) {
        if (i == 0) {
            fibonacci[i] = 0;
        }else if (i == 1) {
            fibonacci[i] = 1;
        }else {
            fibonacci[i] = prev + curr;
        }
        return getFibonacci(fibonacci,i+1,n,curr,fibonacci[i]);
    }
}
    int main(void){
        int n;
        printf("Nhap vao so luong so fibonaci: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So luong ko hop le");
            return 1;
        }
        int fibonacci[n];
        getFibonacci(fibonacci,0,n,0,1);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci[i]);
        }
        return 0;
    }