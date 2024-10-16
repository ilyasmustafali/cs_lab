#include <stdio.h>

int main() {
    int n;
    
    printf("enter positive integer n: ");
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n * n; j += n) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
