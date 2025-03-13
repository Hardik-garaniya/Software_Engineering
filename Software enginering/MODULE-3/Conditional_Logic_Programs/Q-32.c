// 32. Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>

void main(){

float basicsalary, da, hra, gross;

printf("Enter your basic salary : ");
scanf("%f", &basicsalary);


if(basicsalary <= 10000)
{

   hra = basicsalary * 0.2;
   da = basicsalary * 0.8;

}
else if(basicsalary <= 20000)
{

  hra = basicsalary * 0.25;
  da = basicsalary * 0.9;

}
else
{

 hra = basicsalary * 0.3;
 da = basicsalary * 0.95;

}

gross = basicsalary + hra + da;

printf("\nGross Salary Of Employee = %.2f", gross);



}