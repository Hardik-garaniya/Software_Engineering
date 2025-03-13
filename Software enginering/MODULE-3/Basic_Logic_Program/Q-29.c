// 29. Convert minutes into seconds and hours


#include<stdio.h>

void main(){

int  minutes, seconds, hours;

printf("Enter Minutes : ");
scanf("%d", &minutes);

seconds = minutes * 60;
hours = minutes / 60;

printf("Seconds = %d Hours = %d", seconds , hours);


}
