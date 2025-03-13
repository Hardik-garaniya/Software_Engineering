//  3. WAP to check if the given year is a leap year or not.

#include<stdio.h>

void main(){

int year;

printf("Enter a year : ");
scanf("%d", &year);

if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
{

printf("%d Is a leap year.", year);

}
else

printf("%d Is not leap year.", year);


}
