//  16.Accept 5 numbers from user and perform sum of array

#include<stdio.h>

void main()

{
    
    int arr[100], size, i, sum = 0;
    
    
    printf("Enter array size\n");

    scanf("%d",&size);
    
    
    printf("Enter array elements\n");

    for(i = 0; i < size; i++)

          scanf("%d",&arr[i]);
          
   
    for(i = 0; i < size; i++)

          sum = sum + arr[i]; 
    
   
    printf("Sum of the array = %d\n",sum);
    
    
}
