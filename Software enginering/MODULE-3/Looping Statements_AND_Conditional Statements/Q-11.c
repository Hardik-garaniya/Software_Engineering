// 11.Accept 5 names from user at run time.

#include<stdio.h>

void main(){

char name [5][20];

for(int i = 0; i < 5; i++)
{
    
printf("Enter name %d :", i + 1);
scanf("%99s",name[i]);

}

printf("\nEntered name :\n");
for(int i = 0; i < 5; i++)
{

printf("Name %d : %s\n",i + 1, name[i]);

}




    
}
