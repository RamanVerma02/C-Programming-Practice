# include <stdio.h>
int main()
{
    //program to find the given number is divided by 5and 11 or not

    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number % 5==0 && number % 11==0)
    {
        printf("Number %d is divisible by 5 and 11",number);
    }
    else if (number%5==0)
    {
        printf("Number %d is divisible by 5",number);
    }
    else if(number%11==0)
    {
        printf("Number %d is divisible by 11",number);
    }
    else 
    {
        printf("Number is nither divisible by 5 nor 11");
    }
    return 0;
}
