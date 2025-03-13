//12.Write a program in C to find the number of times a given word 'is' appears inthe given string.


#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, const char *word) {
    int count = 0;
    char *pos = str;
    int word_len = strlen(word);

    while ((pos = strstr(pos, word)) != NULL) {
        
        if ((pos == str || *(pos - 1) == ' ') && 
            (*(pos + word_len) == ' ' || *(pos + word_len) == '\0')) {
            count++;
        }
        pos += word_len;
    }
    return count;
}

void main() {
    char str[100];
    const char *word = "is";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';

    int result = countOccurrences(str, word);
    printf("The word '%s' appears %d times.\n", word, result);

    
}
