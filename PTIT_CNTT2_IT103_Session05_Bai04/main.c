#include <stdio.h>

int sum(int start, int end) {
    if (start == end) {
        return start;
    }
    return start+sum(start+1, end);
}

int main(void) {
    int start ;
    int end ;
    printf("Nhap so dau:\n");
    scanf("%d", &start);
    printf("Nhap so cuoi:\n");
    scanf("%d", &end);
    int result = sum(start, end);
    printf("Tong tu %d den %d la: %d", start, end,result);

    return 0;
}