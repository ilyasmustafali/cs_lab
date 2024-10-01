#include <stdio.h>

int main() {
    int x0, y0, radius;
    int x, y;


    printf("enter the center of the circle (x0 y0): ");
    scanf("%d %d", &x0, &y0);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    
    int radius_squared = radius * radius;

   
    printf("Enter points (x y) and use Ctrl+D to end: \n");

    while (scanf("%d %d", &x, &y) != EOF) {
       
        int distance_squared = (x - x0) * (x - x0) + (y - y0) * (y - y0);

        if (distance_squared < radius_squared) {
            printf("Point (%d, %d) is INSIDE the circle.\n", x, y);
        } else if (distance_squared > radius_squared) {
            printf("Point (%d, %d) is OUTSIDE the circle.\n", x, y);
        } else {
            printf("Point (%d, %d) is ON the circle.\n", x, y);
        }
    }

    return 0;
}
