#include <stdio.h>

int main() {
    int n, i;
    float avg, sum = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    avg = sum / n;
    
    printf("Elements less than the average (%.2f): ", avg);
    
    for(i = 0; i < n; i++) {
        if(arr[i] < avg) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}