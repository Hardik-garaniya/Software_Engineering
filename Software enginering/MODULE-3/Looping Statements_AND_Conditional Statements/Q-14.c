// 14.Accept 5 numbers from user and find those numbers factorials 

#include <stdio.h>


unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

void main() {
    int numbers[5];
    
    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    printf("\nFactorials of the entered numbers are:\n");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] < 0) {
            printf("Factorial of negative numbers is not defined.\n");
        } else {
            printf("Factorial of %d is %llu\n", numbers[i], factorial(numbers[i]));
        }
    }

    
}

