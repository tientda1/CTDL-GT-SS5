#include <stdio.h>

int countPaths(int row, int col) {
    if (row == 1 || col == 1)
        return 1;
    return countPaths(row - 1, col) + countPaths(row, col - 1);
}

int main() {
    int row, col;

    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int totalPaths = countPaths(row, col);
    printf("Tong so duong di tu (0,0) den (%d,%d) la: %d\n", row - 1, col - 1, totalPaths);

    return 0;
}
