// pattern

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<stdio.h>

void main(){

  int n, number = 1;
  
  printf("Enter number of rows : ");
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++)
  {
  
      for(int j = 0; j < i; j++)
      {
  
          printf("%d", number++);
      }
  
      printf("\n");
  }
  
  

}