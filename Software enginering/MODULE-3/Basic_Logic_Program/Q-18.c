// 18. Calculate person’s Annual salary 


#include<stdio.h>

void main(){

float monthlysalary , annualsalary ;

printf("Enter your monthly salary : ");
scanf("%f" , &monthlysalary);

annualsalary = monthlysalary * 12 ;

printf("Your annual salary is : %f" , annualsalary);



}