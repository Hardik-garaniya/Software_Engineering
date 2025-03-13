// 21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>

void main(){

    int a , b ;

    printf("Enter A : ");
    scanf("%d" , &a);

    printf("Enter B : ");
    scanf("%d" , &b);

    a = a + b;
    b = a - b;
    a = a - b;

     printf("After Swapping: a = %d, b = %d", a, b);
           


}
