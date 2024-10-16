#include <stdio.h>
#include <limits.h>  

int main() {
    int n;
    scanf("%d", &n);
    
    int num, sum = 0;
    int min = INT_MAX; 
    int max = INT_MIN; 

    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
        

        if(num < min) {
            min = num;
        }
        if(num > max) {
            max = num;
        }
    }

    int result = sum - min - max;

   
    printf("%d\n", result);

    return 0;
}