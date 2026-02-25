#include<stdio.h>

int gstPrice(float value);

int main()
{
    float value;
    printf("Enter the amount\n");
    scanf("%f",&value);
    gstPrice(value);
    return 0;
}

int gstPrice(float value)
{
    value=value+(value*0.20);
    printf("The total price is %f",value);
}
