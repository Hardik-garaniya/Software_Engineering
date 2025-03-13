// 35. Accept the input month number and print number of days in that month.

#include<stdio.h>

void main(){

    int monthnumber;

    printf("Enter month  (1-12) : ");
    scanf("%d", &monthnumber);

    switch(monthnumber){
       
       case 1:
       case 3:
       case 5:
       case 7:
       case 8:
       case 10:
       case 12:
       
       printf("31 Days.");
       
       break;
       
       case 4:
       case 6:
       case 9:
       case 11:
       
       printf("30 Days.");
       
       break;
       
       case 2:
       
       printf("28-29 Days.");
       
       break;
       
       default:
       
       printf("Invalid month number. Please enter a number between 1 and 12.\n");
     
     
     
    }




}
