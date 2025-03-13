// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>

void main(){

char c;

printf("Enter a character : ");
scanf("%c", &c);

if(isupper(c))
{

 printf("This character is an uppercase latter.");

}
else if (islower(c))
{

 printf("This character is an lowercase latter.");

}
else if (isdigit(c))
{

printf("This character is a digit.");


}
else

printf("The character is a special character.");




}
