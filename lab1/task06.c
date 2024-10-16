#include <stdio.h>

int main() {
    int t1, t2, t3, t4;
    int maxtime;

   
    printf("Enter duration for task 1: "); scanf("%d", &t1);
    printf("Enter duration for task 2: "); scanf("%d", &t2);
    printf("Enter duration for task 3: "); scanf("%d", &t3);
    printf("Enter duration for task 4: "); scanf("%d", &t4);

    
    maxtime= t1;
    if(t2 > maxtime) maxtime = t2;
    if(t3 > maxtime) maxtime = t3;
    if(t4 > maxtime) maxtime = t4;

    printf("the total time: %d\n", maxtime);

    return 0;
}