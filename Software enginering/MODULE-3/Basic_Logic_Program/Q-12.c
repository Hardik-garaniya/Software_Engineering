// 12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>

void main(){

int numberofstudent ;

printf("Enter the number of student : ");
scanf("%d" , &numberofstudent);

int appleperstudent = 5 ;
int totalapple = numberofstudent * appleperstudent ;

printf("Total number of apple required : %d" , totalapple);

}

