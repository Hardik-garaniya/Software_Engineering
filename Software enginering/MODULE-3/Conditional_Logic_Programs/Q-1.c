// 1. Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

void main(){

int num1, num2;

printf("Enter the value for Number 1 : ");
scanf("%d", &num1);

printf("\nEnter the value for Number 2 : ");
scanf("%d", &num2);

if(num1 == num2)
{
   printf("\nNumber 1 and Number 2 are equal");

}
else

printf("\nNumber 1 and Number 2 are not equal");


}

