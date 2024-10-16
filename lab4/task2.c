#include <stdio.h>

int main() {
    int n, i;
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Elements that are less: ");
    
    for(i = 1; i < n - 1; i++) {
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
            printf("%d ", arr[i]);
        }
    }
    
    if(arr[0] < arr[1]) {
        printf("%d ", arr[0]);
    }
    if(arr[n-1] < arr[n-2]) {
        printf("%d ", arr[n-1]);
    }
    
    printf("\n");
    
    return 0;
}