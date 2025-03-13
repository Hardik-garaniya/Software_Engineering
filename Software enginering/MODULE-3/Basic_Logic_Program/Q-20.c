// 20.Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.


#include<stdio.h>

void main(){

float monthlysalary , insurancePremium = 10 , loanpremium = 10 , total;

printf("enter salary : ");
scanf("%f",&monthlysalary);

insurancePremium = monthlysalary / 10 ;
loanpremium = monthlysalary / 10;

total = monthlysalary - (insurancePremium + loanpremium) ;

printf("Your insurancepremium is : %f\n" , insurancePremium);
printf("Your loanpremium is : %f\n" , loanpremium);
printf("Your monthlysalary is : %f\n" , total);

}