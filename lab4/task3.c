#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);

        
        if((i + 1) % k == 0) {
            printf("\n");
        }
    }

    
    if (n % k != 0) {
        printf("\n");
    }

    return 0;
}