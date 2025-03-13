// 8. Write a program to find out the max from given number (E.g., No: - 1562Max number is 6)


 #include <stdio.h>

void main() {
    int num, maxDigit = 0;

   
    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num < 0) num = -num;

    
    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit) maxDigit = digit;
        num /= 10;
    }

   
    printf("Max number is %d\n", maxDigit);

    
}
