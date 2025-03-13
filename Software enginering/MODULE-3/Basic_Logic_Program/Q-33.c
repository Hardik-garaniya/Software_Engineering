// 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>

void main(){

int number;

printf("Enter your number : ");
scanf("%d", &number);

printf("The first three powers of %d are:\n", number);

printf("N^1 = %d\n", number);

printf("\nN^1 = %d\n", number * number);

printf("\nN^1 = %d\n", number * number * number);



}