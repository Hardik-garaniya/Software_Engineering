// 24.Accept 5 employees name and salary and count average and total salary

#include<stdio.h>

void main(){

  char name[5][20];
  float salary[5];
  float totalsalary;
  float averagesalary;

   for(int i = 0; i < 5; i++) {
  
      printf("Enter name of employee %d: ", i + 1);
      scanf("%s", name[i]); 
      
      printf("Enter salary of %s: ", name[i]);
      scanf("%f", &salary[i]);
      
      totalsalary += salary[i]; 
  
    }

  averagesalary = totalsalary / 5 ;

  printf("\nTotal Salary : %f " , totalsalary);
  printf("\naverage Salary : %f " , averagesalary);





}
