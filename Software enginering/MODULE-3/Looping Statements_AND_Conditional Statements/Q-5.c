// 5. WAP to print factorial of given number


#include<stdio.h>

void main(){

    long int i, fact = 1, number;
   
    printf("Enter a number : ");
    scanf("%ld", &number);
   
    for(i = 1; i <= number; i++)
    {
   
       fact = fact * i;
   
    }
   
    printf("\nFactorial %ld is : %ld",number, fact);



}