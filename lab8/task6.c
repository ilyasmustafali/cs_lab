#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;  // Move to the end of str1
    }

    
    while (*str2 != '\0') {
        *str1 = *str2;  
        str1++;         // move to  next position in str1
        str2++;         // move to next character in str2
    }

   
    *str1 = '\0';
}

int main() {
    char str1[200], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}