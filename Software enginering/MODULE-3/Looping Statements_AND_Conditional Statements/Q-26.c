// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

void main(){
    
    int n,  totalsum = 0;
    
    printf("Enter the number of n : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
      int sum = 0;
        for(int j = 1; j <= i ; j++)
        {
    
            sum = sum + j;
        }
    
        totalsum = totalsum + sum;
    }
    
    printf("number: %d", totalsum);
    
    

}