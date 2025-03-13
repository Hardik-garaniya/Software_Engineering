// 37. WAP to show

// ii. Vowel or Consonant using switch case

#include<stdio.h>
#include <ctype.h>

void main(){
char ch;

printf("Enter character : ");
scanf("%c", &ch);

ch = tolower(ch);

switch(ch){

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':

printf("%c is vowel.",ch);

break;

case 'b':
case 'c':
case 'd':
case 'f':
case 'g':
case 'h':
case 'j':
case 'k':
case 'l':
case 'm':
case 'n':
case 'p':
case 'q':
case 'r':
case 's':
case 't':
case 'v':
case 'w':
case 'x':
case 'y':
case 'z':

printf("%c is a Consonant.",ch);

break;




}
}