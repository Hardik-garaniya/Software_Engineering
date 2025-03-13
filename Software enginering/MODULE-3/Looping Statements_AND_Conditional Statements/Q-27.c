// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6............n

#include<stdio.h>

void main(){

    int n;
    
    float result = 0.0;
    
    printf("Enter the number of n : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
    
      if(i % 2 == 0)
        {
    
          result -= (float) i / (i + 1); 
    
        }
        else
        {
    
          result += (float) i / (i + 1);
    
        }
    
    
      
    }
    
    
    printf("Result of the series: %.4f\n", result);
    
    
    
}