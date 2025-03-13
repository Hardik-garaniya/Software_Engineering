// 9. Write a program in C to find the maximum number of characters in a string.


#include <stdio.h>

int findLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    int length = findLength(str);
    printf("Length of the string: %d\n", length);


}
