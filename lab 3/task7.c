#include <stdio.h>

int main() {
    int n, number, sumEven = 0, sumOdd = 0;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter thr element %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            sumEven += number; 
        } else {
            sumOdd += number;
        }
    }

    printf("sum of even elements: %d\n", sumEven);
    printf("sum of odd elements: %d\n", sumOdd);

    return 0;
}
