// 28. Convert years into days and months



#include<stdio.h>

void main(){

int  years, days, month;

printf("Enter Years : ");
scanf("%d", &years);

month = years * 12;
days = years * 365;

printf("Month = %d Days = %d", month ,days);


}