// 7. WAP Find out length of string without using inbuilt function

#include <stdio.h>

int findLength(const char *str) {

    int length = 0;

    while (str[length] != '\0')
    {

        length++;

    }

    return length;

}

void main() {

    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';

            break;
        }
    }

    int length = findLength(str);

    printf("Length of the string: %d\n", length);


}
