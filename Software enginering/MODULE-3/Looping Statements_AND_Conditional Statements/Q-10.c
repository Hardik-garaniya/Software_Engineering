//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>

void main(){

int num, sum = 0, firstdigit, lastdigit;

printf("Enter any number to find sum of first and last digit : ");
scanf("%d", &num);

lastdigit = num % 10;

firstdigit = num;

while(num >= 10)
{

num = num / 10;

}

firstdigit = num;

sum = firstdigit + lastdigit;

printf("\nSum of first and last digit = %d", sum);



}

