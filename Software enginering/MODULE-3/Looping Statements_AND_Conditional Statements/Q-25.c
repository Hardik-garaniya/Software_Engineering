// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>

void main(){
   
   int  n, sum = 0, i;
   
   printf("Enter the number of n : ");
   scanf("%d",&n);
   
   for(i = 1; i <= n; i++)
    {
   
      sum = sum + i * i;
   
    }
   
   printf("\nSum of squares : %d", sum);
   
   

}