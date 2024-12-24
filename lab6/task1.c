#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("enter size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("sum of elements below the main diagonal: %d\n", sum);

    return 0;
}
