// 10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>


int isPalindrome(int num) {

    int originalNum, reversedNum = 0, remainder;

    originalNum = num;
    
    while (num != 0) {
        
        remainder = num % 10;

        reversedNum = reversedNum * 10 + remainder; 

        num /= 10;

    }

    
    if (originalNum == reversedNum)
    {

        return 1; 

    } 

    else
    {

        return 0; 

    }
}

void main() {
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isPalindrome(number))
    {

        printf("%d is a palindrome.\n", number);

    }

    else
    {

        printf("%d is not a palindrome.\n", number);

    }

   
}
