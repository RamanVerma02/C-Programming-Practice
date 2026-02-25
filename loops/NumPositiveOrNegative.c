# include <stdio.h>
int main()
{
    // program to find wheather a number is negative ,positive or 0 ,using if..else if
    
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Number is positive");
    }
    else if (num<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is 0");
    }
    return 0;
}
