// 23. C Program to Reverse a Number Using FOR Loop Series Program:

#include<stdio.h>

void main(){

int num, reversed = 0, remainder;

printf("Enter integer number : ");
scanf("%d", &num);

for(; num != 0; num /= 10)
{

  remainder = num % 10;
  reversed = reversed * 10 + remainder;

}


printf("\nReversed number : %d", reversed);



}