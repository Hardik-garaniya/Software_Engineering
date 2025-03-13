// 6. Find the Character Is Vowel or Not

#include<stdio.h>

void main(){

char c;

printf("Enter your character : ");
scanf("%c", &c);

if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
{

printf("\nThe character is %c is Vowel.", c);

}
else

printf("\nThe character is %c is Consonant.", c);





}