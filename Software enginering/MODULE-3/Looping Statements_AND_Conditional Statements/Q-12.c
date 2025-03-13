// 12. Program of Armstrong Number in C Using For Loop & While

#include<stdio.h>

void main(){

int num, originalnum, remainder, result = 0;

printf("Enter a three digit integer : ");
scanf("%d", &num);

originalnum = num;

while(originalnum != 0)
{

        remainder = originalnum % 10;
        
        result = result + remainder * remainder * remainder;

        originalnum /= 10;
}

if(result == num)
{

    printf("\n%d is an Armstrong number.", num);
}
else
{

    printf("\n%d is not an Armstrong number.", num);

}






}