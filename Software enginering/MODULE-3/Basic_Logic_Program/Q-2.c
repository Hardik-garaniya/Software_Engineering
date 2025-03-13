// 2. Write a program to make Simple calculator (to make addition,subtraction,multiplication, division and modulo)

#include<stdio.h>

void main(){

int first_number, second_number, add, subtract, multiply;
float  divide;

printf("\nEnter Your Number");
scanf("%d%d", &first_number, &second_number);

add = first_number + second_number;
subtract = first_number - second_number;
multiply = first_number * second_number;
divide = first_number / (float) second_number;

printf("\nsum = %d",add);
printf("\ndifference = %d",subtract);
printf("\nmultiplication = %d",multiply);
printf("\ndivision = %f",divide);

}
