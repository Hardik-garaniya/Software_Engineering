// 14.WAP to find the largest of three numbers.

#include<stdio.h>


void main(){

   int n1, n2, n3;

   printf("Enter number 1 : ");
   scanf("%d", &n1);
   
   printf("Enter number 2 : ");
   scanf("%d", &n2);
   
   printf("Enter number 3 :");
   scanf("\n%d", &n3);

   printf("-----------------------\n");

  if (n1 >= n2 && n1 >= n3) {
      
        printf("%d is the largest number.\n", n1);
    } else if (n2 >= n3) {
        
        printf("%d is the largest number.\n", n2);
    } else {
       
        printf("%d is the largest number.\n", n3);
    }
}