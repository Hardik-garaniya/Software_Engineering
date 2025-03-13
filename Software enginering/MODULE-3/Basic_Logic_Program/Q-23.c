// 23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

void main(){


    int a , b ;

    printf("Enter A : ");
    scanf("%d" , &a);

    printf("Enter B : ");
    scanf("%d" , &b);

    printf("Before swap a=%d b=%d",a,b);       

    a = a * b;
    b = a / b;
    a = a / b;

     printf("\nAfter Swapping: a = %d, b = %d", a, b);
           


}





