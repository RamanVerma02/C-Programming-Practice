#include <stdio.h>

int main()
{
   int x,length,width;
   printf("Program for calculate the area of rectangle:\n");
   printf("Enter the length:\n");
   scanf("%d",&length);
   printf("Enter the width:\n");
   scanf("%d",&width);
    
   x=length*width; 
   printf("Area of rectangle is %d",x);

   return 0;
}
