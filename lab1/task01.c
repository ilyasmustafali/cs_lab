#include <stdio.h>

int main() {
    int x;
    int y;


    printf ("enter the value for x:");
    scanf("%d", &x);

    if(x > 0){
    y = x * x + 2 * x + 3 * x;
    }
    else if (x == 0){
        y = x - 5;
    }
    else {
        y = x * x + 2 * x - 3;
    }
return 0;

    }
