#include <stdio.h>

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[0][i]; 
        sum += arr[3][i]; 
    }

    for (int i = 1; i < 3; i++) {
        sum += arr[i][0]; 
        sum += arr[i][3]; 
    }
    printf("Tong cac phan tu tren duong bien la: %d\n", sum);

    return 0;
}

