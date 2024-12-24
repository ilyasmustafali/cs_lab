#include <stdio.h>


int main() {

    char str[1000];  
    int length = 0;  
     
 printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

         while (str[length] != '\0') {
        length++;
    }

     if (str[length - 1] == '\n') {
        length--;   
    }
    printf("The length of the string is: %d\n", length);

    return 0;
}