// 30. WAP to convert years into days and days into years


#include<stdio.h>

void main(){
    
    float  days, year;
    
    printf("Enter Days : ");
    scanf("%f", &days);
    
    year = days / 365;
    
    
    
    printf("Years based on your entered days are: %.2f",year);
    
    
    
    printf("\nEnetr nubers of yeras: ");
    scanf("%f",&year);
    
    printf("\nDays based on your entered years are: %d", (int) year*365);
    



}
