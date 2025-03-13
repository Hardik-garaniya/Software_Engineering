// 28. 1 2 3 6 9 18 27 54...

#include<stdio.h>

void main(){

    int n;
    
    printf("Enter the number of n : ");
    scanf("%d", &n);
    
    int t = 1;
    
    for(int i = 1; i <= n; i++)
    {
    
        printf("%d ", t);
    
        if(i % 2 == 0)
        {
    
         t *= 3;
    
        }
        else
        {
    
            t *= 2;
    
        }
    }
    
    
    printf("\n");
    
    
}