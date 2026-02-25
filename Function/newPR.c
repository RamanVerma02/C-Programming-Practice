#include<stdio.h>

int main()
{
    // program to convert kg into grams
    int y;
    float x;

    printf("enter the number in kilogram :");
    scanf("%f",&x);

    y=1000*x;

    printf("%f kg = %d grams", x,y);

    return 0;
}