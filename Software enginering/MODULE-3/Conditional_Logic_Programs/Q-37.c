// 37. WAP to show

// i. Monday to Sunday using switch case


#include<stdio.h>

void main(){

    int week;

    printf("Enter the week number(1-7) : ");
    scanf("%d", &week);
    
    if(week == 1)
    {
    
      printf("\nMonday.");
    
    }
    else if(week == 2)
    {
    
      printf("\nTuesday.");
    
    }
    else if(week == 3)
    {
    
      printf("\nWednesday.");
    
    }
    else if(week == 4)
    {
    
      printf("\nThursday.");
    
    }
    else if(week == 5)
    {
    
      printf("\nFriday.");
    
    }
    else if(week == 6)
    {
    
      printf("\nSaturday.");
    
    }
    else if(week == 7)
    {
    
      printf("\nSunday.");
    
    }
    else
    {
    
            printf("\nInvalid Input! Please enter week number between 1-7.");
    
    }



}


