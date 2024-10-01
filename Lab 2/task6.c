#include <stdio.h>

int main() {
    int num;

    printf("enter integer: ");
    scanf("%d", &num);

    int divisor = 1;
    while (num / divisor >= 10) {
        divisor *= 10;
    }
    while (divisor > 0) {
        int digit = num / divisor;
        num %= divisor;
        divisor /= 10;

        if (digit != 0) {
            printf("%d", digit);
        }
    }

    printf("\n");
    return 0;
}