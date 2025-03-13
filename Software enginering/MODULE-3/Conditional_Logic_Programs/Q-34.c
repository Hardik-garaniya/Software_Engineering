// 34. Accept month number and display month name

#include<stdio.h>

void main(){

      int monthnumber;

      printf("Enter month number : ");
      scanf("%d", &monthnumber);

      switch(monthnumber){

        case 1:
     
        printf("\nJanuary");
     
        break;
     
        case 2:
     
        printf("\nFebruary");
     
        break;
     
        case 3:
     
        printf("\nMarch");
     
        break;
     
        case 4:
     
        printf("\nApril");
     
        break;
     
        case 5:
     
        printf("\nMay");
     
        break;
     
        case 6:
     
        printf("\nJune");
     
        break;
     
        case 7:
     
        printf("\nJuly");
     
        break;
     
        case 8:
     
        printf("\nAuegust");
     
        break;
     
        case 9:
     
        printf("\nSaptember");
     
        break;
     
        case 10:
     
        printf("\nOctomber");
     
        break;
     
        case 11:
     
        printf("\nNavember");
     
        break;
     
        case 12:
     
        printf("\nDecember");
     
        break;

        default:

            printf("Invalid month number. Please enter a number between 1 and 12.\n");

         break;
   
      }

}