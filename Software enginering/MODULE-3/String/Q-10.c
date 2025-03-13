// 10.Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>


void extractSubstring(const char *source, char *destination, int start, int length) {
    int i;
    if (start < 0 || length < 0 || start >= strlen(source)) {
        destination[0] = '\0'; 
        return;
    }
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; 
}

void main() {
    char source[256], substring[256];
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0'; 

    printf("Enter start index and length: ");
    scanf("%d %d", &start, &length);

    extractSubstring(source, substring, start, length);
    printf("Substring: \"%s\"\n", substring);
    

}
