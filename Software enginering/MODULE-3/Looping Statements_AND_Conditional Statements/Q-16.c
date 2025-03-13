// 16.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>

void main(){

int n, sum = 0, i = 1;

printf("Enter a  natural number : " );
scanf("%d",&n);

if(n <= 0)
{
   
   printf("Please enter a positive integer.\n");

}

while(i <= n)
{

    sum = sum + i;
    i++;
}

printf("\nSum of natural numbers up to %d is %d\n", n, sum);




}