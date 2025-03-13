// 19. Write a program in C to calculate and print the electricity bill of a given  customer. The customer ID, name, and unit consumed 
//by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :

// 20. Unit 
// 21. Charge/unit
// 22. upto 350 
// 23. @1.20
// 24. 350 and above but less than 600 
// 25. @1.50
// 26. 600 and above but less than 800
// 27. @1.80
// 28. 800 and above
// 29. @2.00

#include<stdio.h>

void main(){

int customerid;
char name[50];
float unitsconsumed;
float billamount;
float MINIMUM_BILL = 256.00;

printf("Enter Customer ID : ");
scanf("%d", &customerid);

printf("Enter Customer Number : ");
scanf("%s", &name);

printf("Enter Customer Units Consumed : ");
scanf("%f", &unitsconsumed);

if(unitsconsumed <= 350)
{

 billamount = unitsconsumed * 1.20;

}
else if(unitsconsumed > 350 && unitsconsumed < 600)
{

  billamount = unitsconsumed * 1.50;

}
else if(unitsconsumed > 600 && unitsconsumed < 800)
{

 billamount = unitsconsumed * 1.80;

}
else
{

  billamount = unitsconsumed * 2.00;

}

if (billamount < MINIMUM_BILL) {
        billamount = MINIMUM_BILL;
    }

printf("\n Electricity Bill ");
printf("\nCustomer ID : %d", customerid);
printf("\nCustomer Name : %s", name);
printf("\nCustomer Units Consumed : %.2f ", unitsconsumed);
printf("\nTotal Bill Amount : %.2f ", billamount);


}