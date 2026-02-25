# include <stdio.h>
int main ()
{
    //program to check maximum number amoung three numbers using if..else..if statements
    
    int num1,num2,num3;
    printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num2)
    {
        printf("Number1 %d is greater",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("Number2 %d is greater",num2);
    }
    else 
    {
        printf("Number3 %d is greater",num3);
    }
    return 0;
}