#include <stdio.h>


void shiftLeft(short *arr, int size) {
    if (size <= 1) return; 

    short first = arr[0]; 

    
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    arr[size - 1] = first;
}

int main() {
    
    int n = 6;  
    short arr[] = {10, 20, 30, 40, 50, 60};

    
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    shiftLeft(arr, n);

    
    printf("Array after left shift:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}