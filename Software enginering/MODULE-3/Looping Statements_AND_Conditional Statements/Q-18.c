// 18.Write a C Program to Print the Multiplication Table of N

// i. E.g. 5 * 1 = 5
// ii. 5 * 2 = 10
// 1. .
// 2. .
// iii. 5 * 10 = 50


#include<stdio.h>

void main(){

   int num;
   
   printf("Enter a number to generate the table in C : ");
   scanf("%d", &num);
   
   printf("\n Table of  %d ", num);
   
   for(int i = 1; i <= 10; i++)
   {
   
      printf("\n %d * %d = %d", num, i, num *i);
   
   }


}