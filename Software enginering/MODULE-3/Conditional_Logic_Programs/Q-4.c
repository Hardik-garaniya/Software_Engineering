// 4. WAP to make simple calculator (operation include Addition,Subtraction,Multiplication, Division, modulo) using conditional statement

#include<stdio.h>

void main(){

    int first, second, add, subtract, multiply;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);

    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;   

    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    
    
}




