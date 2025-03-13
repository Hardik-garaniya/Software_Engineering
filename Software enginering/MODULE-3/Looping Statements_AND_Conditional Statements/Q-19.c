// pattern

// 1
// 10
// 101
// 1010
// 10101

#include<stdio.h>

void main(){

   int i, j, num;
   
   printf("Enter number of pattern : ");
   scanf("%d", &num);
   
   for(i = 1; i <= num; i++)
    {
   
      for(j = 1; j <= i; j++)
        {
      
          if(j % 2 == 1)
          {
          
           printf("1");
          
          }
          else
          {
          
              printf("0");
          }
      
        }
      
       printf("\n");
       
    }
   
   

}

