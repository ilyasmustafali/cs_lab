#include <stdio.h>
#include <string.h>

void checkPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            printf("The string is not a palindrome.\n");
            return; 
        }
        start++;
        end--;
    }
    printf("The string is a palindrome.\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    checkPalindrome(str);

    return 0;
}