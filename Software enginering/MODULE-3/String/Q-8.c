// 8. Write a program in C to count the total number of vowels or consonants in astring.


#include <stdio.h>
#include <ctype.h>  

#define MAX_LEN 100

void main() {
    char str[MAX_LEN];
    int vowels = 0, consonants = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]); 

        if (isalpha(ch)) { 

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { 

                vowels++;

            } else {

                consonants++;

            }

        }

    }

    
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

}
