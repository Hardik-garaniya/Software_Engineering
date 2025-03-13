// 17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

void main(){

int num, count = 0, evencount = 0, oddcount = 0;

while(count < 5)
{

printf("Enter a number : ");
scanf("%d", &num);

if(num % 2 == 0)
{
    evencount++;
}
else
{

 oddcount++;

}

count++;


}


  printf("Number of even numbers: %d\n", evencount);
  printf("Number of odd numbers: %d\n", oddcount);



    
}
