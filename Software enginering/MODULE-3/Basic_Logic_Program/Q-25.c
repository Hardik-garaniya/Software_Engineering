// 25.Accept 5 expense from user and find average of expense

#include<stdio.h>

void main (){

  float expense[5];
  float totalexpense;
  float averageexpense;

   for(int i = 0 ; i < 5 ; i++){
     
        printf("Enter expense %d : ", i + 1);
        scanf("%f", &expense[i]);
        
        totalexpense += expense[i];
     
    }

     averageexpense = totalexpense / 5;

     printf("\nTotal expense : %f", totalexpense);
     printf("\nAvarage expense : %f", averageexpense);
     




}