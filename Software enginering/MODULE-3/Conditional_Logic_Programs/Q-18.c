//18. Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

void main(){

int sprice, cprice, amt;

printf("Enter cost price : ");
scanf("%d", &cprice);

printf("Enter selling price : ");
scanf("%d", &sprice);

if(sprice > cprice)

{

  amt = sprice - cprice;
  printf("profit = %d", amt);

}
else if(cprice > sprice)
{

  amt = cprice - sprice;
  printf("loss = %d", amt);

}
else
{

   printf("No loss No profit.");

}






}