#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("enter side1: "); scanf("%d", &side1);
    printf("enter side2: "); scanf("%d", &side2);
    printf("enter side3: "); scanf("%d", &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("Yes, the sticks can triangle.\n");
    } else {
        printf("No, the sticks cannot form triangle.\n");
    }

    return 0;
}
