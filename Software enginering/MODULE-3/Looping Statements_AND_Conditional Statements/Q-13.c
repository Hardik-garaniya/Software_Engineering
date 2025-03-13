// 13.calculate the Factorial of a Given Number using while loop


#include<stdio.h>

void main(){

     int number, factorial = 1;
     
     printf("Enter number : ");
     scanf("%d", &number);
     if(number < 0)
     {
     
       printf("Factorial of a negative number doesn't exist.\n");
     
     }
     else
     
     while(number > 0)
     {
        int num2 = number;
         factorial = factorial * number;
         number--;
     
     }
     
     printf("Factorial of %d is %d\n", number, factorial);
     
     

}