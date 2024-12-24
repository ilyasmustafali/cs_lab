#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {3, 3},
        {1, 4, 2},
        {6, 3},
        {7, 3}
    };
    int scalar = 2;
    int rows = 4;
    int cols = 2;
    int result[4][4];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}