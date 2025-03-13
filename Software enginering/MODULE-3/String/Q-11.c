// 11.Write a program in C to read a sentence and replace lowercase characters withuppercase and vice versa.


#include <stdio.h>  
#include<ctype.h>

void main()  
{  
    int i, len = 0;  
    char str[] = "Assignment";  
      
    
    len = sizeof(str)/sizeof(str[0]);  
      
    
    for(i = 0; i < len; i++){  
          
        
        if(isupper(str[i])){  
           
            str[i] = tolower(str[i]);  
        }  
         
        else if(islower(str[i])){  
            
            str[i] = toupper(str[i]);  
        }  
    }  
    printf("String after case conversion : %s", str);  
    
}  