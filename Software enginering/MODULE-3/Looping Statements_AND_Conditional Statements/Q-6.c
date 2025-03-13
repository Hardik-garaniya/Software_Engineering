// 6. WAP to print Fibonacci series up to given numbers

#include <stdio.h>

void main() {

    int maxNum, a = 0, b = 1, next;

    
    printf("Enter the maximum number for the Fibonacci series: ");
    scanf("%d", &maxNum);

    printf("Fibonacci series up to %d:\n", maxNum);

    while (a <= maxNum) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

   
}
