// 3. WAP to find reverse of string using recursion

#include<stdio.h>

int reverse(char *str)

{

  if (*str)

  {

    reverse(str + 1);

    printf("%c", *str);

  }

}
 

void main()
{

  char a[] = "Hello World";
  reverse(a);

}