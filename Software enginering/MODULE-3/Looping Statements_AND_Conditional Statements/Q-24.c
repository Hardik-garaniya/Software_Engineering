// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

void main(){

   int n, sum = 0;
   
   printf("Enter the value n : ");
   scanf("%d",&n);
   
   for(int i = 1; i <= n; i++)
   {
   
   sum = sum + i;
   
   
   }
   
   printf("\nSum of series : %d", sum);
   
   

}

