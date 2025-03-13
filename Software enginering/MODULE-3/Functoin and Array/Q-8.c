// 8. WAP to reverse a string and check that the string is palindrome or 
// notWrite a program of structure employee that provides the following

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 100

bool isPalindrome(const char *str) {

    int start = 0;

    int end = strlen(str) - 1;

    while (start < end) {

        if (str[start] != str[end])

            return false;

        start++;

        end--;

    }

    return true;

}

void main() {

    char str[MAX_LEN];

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
    {

        printf("The string is a palindrome.\n");

    }

    else
    {

        printf("The string is not a palindrome.\n");

    }

    
}
