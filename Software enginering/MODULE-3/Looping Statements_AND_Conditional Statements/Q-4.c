// 4. WAP to print table up to given numbers

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