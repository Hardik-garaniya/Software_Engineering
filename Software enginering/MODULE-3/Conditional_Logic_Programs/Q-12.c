// 12.WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>

void main(){

   int n1, n2, n3, max;
   
   printf("Enter number 1 : ");
   scanf("%d", &n1);
   
   printf("Enter number 2 : ");
   scanf("%d", &n2);
   
   printf("Enter number 3 : ");
   scanf("%d", &n3);
   
   max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
   
   printf(" 1Number%d 2Number%d and 3Number%d is Maximum Number%d", n1, n2, n3, max);


}
