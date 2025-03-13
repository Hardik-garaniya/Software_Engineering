// 26. Convert temperature Fahrenheit to Celsius


#include<stdio.h>

void main (){

float Fahrenheit , Celsius;

printf("Enter fahrenhite : ");
scanf("%f", &Fahrenheit);

Celsius = (Fahrenheit - 32) * 5 / 9;

printf("Celsius : %.2f",Celsius);


}