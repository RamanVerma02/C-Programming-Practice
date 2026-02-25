# include <stdio.h>
int main()
{
    //program to check maximum number amoung three numbers using nested if statements
    
    int num1,num2,num3;
    printf("enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2)
    {   
        if (num1>num3)
        {
            printf("num1 is greater");
        }
        else
        {
            printf("num3 is greater");
        }     
    }
    else
    {
        if (num2>num3)
        {
            printf("num2 is greater");
        }
        else
        { 
            printf("num3 is greater");
        }
    }
     
    return 0;
}