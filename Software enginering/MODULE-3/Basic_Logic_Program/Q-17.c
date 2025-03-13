// 17. Calculate person’s insurance premium based on salary 


#include <stdio.h>

void main() {
    
    float salary;
    float insurancePremium;
    float premiumRate = 0.05; 

   
    printf("Enter the salary: ");
    scanf("%f", &salary);

    
    insurancePremium = salary * premiumRate;

   
    printf("The insurance premium based on a salary of %.2f is: %.2f\n", salary, insurancePremium);

   
}
