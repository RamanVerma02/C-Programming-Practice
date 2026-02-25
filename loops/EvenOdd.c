# include <stdio.h>
int main()
{
    //program to find whether numbers is EVEN or ODD 
    
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("number %d is even",x);
    }
    else 
    {
        printf("Number %d is odd",x);
    }
return 0;
}