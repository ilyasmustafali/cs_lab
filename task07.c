#include <stdio.h>

int main() {
    int length, width, height, radius;
    
    // Input dimensions of the box
    printf("Enter length: "); scanf("%d", &length);
    printf("Enter width: "); scanf("%d", &width);
    printf("Enter height: "); scanf("%d", &height);
    
    printf("Enter radius: "); 
    scanf("%d", &radius);
    

    if (2 * radius <- length && 2 * radius <- width && 2 * radius <- height) {
        printf("basketball can fit.\n");
    } else {
        printf("basketball cannot fit.\n");
    }

    return 0;
}
