# include <stdio.h>
int main()
{   
    //Author: Raman verma; Date:26/10/2023
    // program to find maximum between two numbers

    int num1,num2;
    //input numbers from user 
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);

    if (num1>num2)
    {
        printf("num1 %d is greater than num2",num1);
    }
    else 
    {
        printf("num2 %d is maximum",num2);
    }
    return 0;

}