// 19.Calculate compound interest

#include<stdio.h>


void main(){

float principal , rate , time , ci ;

printf("Enter your principal amount : ");
scanf("%f" , &principal);

printf("Enter rate : ");
scanf("%f" , &rate);

printf("Enter time : ");
scanf("%f" , &time);

ci = principal * (pow((1 + rate / 100), time));

printf("Compound Interest Is : %f" , ci);




}