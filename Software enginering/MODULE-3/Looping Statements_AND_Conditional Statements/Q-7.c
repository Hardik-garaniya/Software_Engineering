// 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

#include<stdio.h>

void main(){

int n, reverse = 0, rem;

printf("Enter a Number : ");
scanf("%d",&n);

while(n != 0)
{

rem = n % 10;
reverse = reverse * 10 + rem;
n = n / 10;


}

printf("Reverse Number : %d", reverse);


}
