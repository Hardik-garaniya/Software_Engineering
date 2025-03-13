// 8. WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>

void main(){

int height;

printf("Enter your height : ");
scanf("%d", &height);

if(height < 150)
{

    printf("Category : short");

}
else if (height >= 150 && height <= 180)
{

  printf("Category : average");

}
else

printf("Category : tall");

}