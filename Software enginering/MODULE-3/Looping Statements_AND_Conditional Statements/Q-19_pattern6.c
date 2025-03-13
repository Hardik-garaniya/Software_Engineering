// pattern

// A
// A B
// A B C
// A B C D
// A B C D E

#include<stdio.h>

void main(){

int n;

printf("Enter number of rows : ");
scanf("%d", &n);

for(int i = 1; i <= n; i++)
{

  for(int j = 0; j < i; j++)
  {

    printf("%c", 'A' + j);

  }

   printf("\n");

}




}