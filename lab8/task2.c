#include <stdio.h>

void reverseArray(double arr[], int size) {
    double *start = arr;
    double *end = arr + size - 1;

    while (start < end) {
        double temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    double arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

   

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    return 0;
}