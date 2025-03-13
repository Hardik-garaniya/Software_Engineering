// 22.Calculate compound interest(Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P

#include<stdio.h>


void main(){

float principal , rate , time , ci , amount ;

printf("Enter your principal amount : ");
scanf("%f" , &principal);

printf("Enter rate : ");
scanf("%f" , &rate);

printf("Enter time : ");
scanf("%f" , &time);

amount = principal * (pow((1 + rate / 100), time));

ci = amount - principal;

printf("Compound Interest Is : %f" , ci);




}