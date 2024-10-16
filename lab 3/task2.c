#include <stdio.h>

int main() {
    int a, b, k, temp, sum = 0;

    printf("Enter the 1st number (a): ");
    scanf("%d", &a);
    printf("Enter the 2nd number (b): ");
    scanf("%d", &b);
    printf("Enter the divisor (k): ");
    scanf("%d", &k);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }

    printf("The sum of elements in the range [%d, %d] divisible by %d is: %d\n", a, b, k, sum);
    return 0;
}
