// 6. Write a program in C to count the total number of alphabets, digits and specialcharacters in a string.

#include <stdio.h>
#include <ctype.h>  

#define MAX_LEN 100

void main() {
    char str[MAX_LEN];
    int alphabets = 0, digits = 0, specialChars = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) {
            specialChars++;
        }
    }

    
    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialChars);
    

}

