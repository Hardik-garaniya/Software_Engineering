// 27. Convert days into months


#include<stdio.h>

void main(){

int days , month;

printf("Enter Days : ");
scanf("%d", &days);

month = days / 30;
days = days % 30;

printf("Month = %d Days = %d", month ,days);




}