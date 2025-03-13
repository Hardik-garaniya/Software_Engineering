//15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>

void main(){

       int number, sum =0, count =0;       

       printf("Enter number\n");       

       while(count < 10)
       {
         printf("\nNumber %d :", count + 1);
         scanf("%d", &number);       
  
         sum = sum + number;
         count++;       
       }       
       

        printf("\nSum of the 10 numbers is: %d\n", sum);



}