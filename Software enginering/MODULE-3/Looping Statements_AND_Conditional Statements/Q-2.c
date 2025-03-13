// 2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>

void main(){

int number[5];
int i;

for(i = 0; i < 5; i++){

printf("Enter number %d : ", i + 1);
scanf("%d",&number[i]);
}


printf("The number you entered are :\n");
for(i = 0; i < 5; i++){

printf("%d\n", number[i]);
}







}
