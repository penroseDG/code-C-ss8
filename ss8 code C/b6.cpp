#include <stdio.h>

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int sum = 0;

    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\nTong: %d\n", sum);
    return 0;
}

