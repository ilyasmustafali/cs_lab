#include <stdio.h>

int main() {
    char text[1000];
    int count = 1; 
    int i = 0;   


    printf("Enter the text: ");
    scanf("%s", text);

    while (text[i] != '\0') {
        if (text[i] == '#') {
            count++;
        }
        i++;
    }
    
    printf("Number of tokens: %d\n", count);

    return 0;
}