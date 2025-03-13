// 17. Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>

void main(){

  int ang1, ang2, ang3;
  
  printf("Enter three angles of tringles :\n");
  scanf("%d %d %d",&ang1, &ang2, &ang3);
  
  if((ang1 + ang2 + ang3) == 180)
  {
  
  printf("\nThe tringles is valid.");
  
  }
  else
  {
  
  printf("The tringles is not valid.");
  
  }



}

