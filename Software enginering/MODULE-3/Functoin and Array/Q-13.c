// 13.WAP to accept 5 numbers from user and check entered number is even or oddusing of array

#include <stdio.h>

void main(){

    int numbers[5];

    int i;

    
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {

        printf("Number %d: ", i + 1);

        scanf("%d", &numbers[i]);

    }

    
    printf("\nChecking the numbers are even or odd:\n");

    for (i = 0; i < 5; i++) {

        if (numbers[i] % 2 == 0) {

            printf("Number %d is even.\n", numbers[i]);

        } 

        else {

            printf("Number %d is odd.\n", numbers[i]);

        }

    }
    

}
