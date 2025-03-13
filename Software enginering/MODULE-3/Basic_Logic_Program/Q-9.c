// 9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

void main(){

float a , b , c , perimeter;

printf("Enter lenth of side a : ");
scanf("%f" , &a);

printf("Enter lenth of side b : ");
scanf("%f" , &b);

printf("Enter lenth of side c : ");
scanf("%f" ,&c);

perimeter = a + b + c ;

printf("The perimeter of the triangle is: %.2f\n", perimeter);

}