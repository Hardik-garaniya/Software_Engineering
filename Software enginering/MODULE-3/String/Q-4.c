// 4. Write a program in C to count the total number of words in a string


#include <stdio.h>

#define MAX_SIZE 100 

void main()

{
    char str[MAX_SIZE];
    int i, words;

   
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;

   
    while(str[i] != '\0')
    {
       
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);


}