// 10. find the area of a rectangular prism formula : A=2(wl+hl+hw

#include<stdio.h>

void main(){



float width , lenth , height , area;

printf("Enter the width of the rectangular prism : ");
scanf("%f" , &width);

printf("Enter the lenth of the rectangular prism : ");
scanf("%f" , &lenth);

printf("Enter the height of the rectangular prism : ");
scanf("%f" , &height);

area = 2 * (width * lenth + height * lenth + height * width);

printf("The surface area of the rectangular prism is: %.2f\n", area);

}


