// 8. Find circumference of Rectangle formula : C = 4 * a

#include<stdio.h>

void main(){

float circumference, lenth, width;

printf("Enter the lenth of ractangle : ");
scanf("%f" ,&lenth);

printf("Enter the width of ractangle : ");
scanf("%f" ,&width);

circumference = 2 * (lenth + width);

printf("The circumference (perimeter) of the rectangle is : %.2f\n" ,circumference);


}