// 2. WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)

#include<stdio.h>

void main(){



  char op;

  double first, second;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':

      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);

      break;

    case '-':

      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);

      break;

    case '*':

      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);

      break;

    case '/':

      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);

      break;
    
    default:

      printf("operator is not correct");
  }



    
 }

