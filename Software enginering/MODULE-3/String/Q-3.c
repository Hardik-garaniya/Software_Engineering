// 3. Write a program in C to print individual characters of a string in reverse order


#include<stdio.h>

void reverse(char *str)
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