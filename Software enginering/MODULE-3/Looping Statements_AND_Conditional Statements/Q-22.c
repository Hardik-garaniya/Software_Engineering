// 22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>

void main(){

    int n, original, remainder, reversed = 0;
    
    printf("Enter intezer number : ");
    scanf("%d", &n);

    original = n;
    
    while(n != 0)
    {
    
      remainder = n % 10;
      reversed = reversed * 10 +remainder;
      n = n / 10;
    
    }
    
    if(original == reversed)
    {
    
        printf("\n%d is a palindrome.", original);
    
    }
    else
    {
     
       printf("\n%d is not a palindrome.", original);
    
    
    }



}
