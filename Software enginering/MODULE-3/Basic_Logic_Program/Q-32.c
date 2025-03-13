// 32. Accept 2 numbers and find out its sum check it size

#include<stdio.h>

void main(){

  int num1, num2, sum, size;

    printf("Enter Number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    
    size = num1 *num2;
    
    printf("Sum is : %d",sum);
    printf("\nSize is : %d",size);


}