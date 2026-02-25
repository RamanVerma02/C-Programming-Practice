#include<stdio.h>

int main()
{
    int a,i,c=0,d=0;
    printf("Enter a number:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            printf("Number %d is even\n",i);
            c++;
        }    
        else
        {
            printf("number %d is odd\n",i);
            d++;
        }
    }
    printf("Total Even number are=%d\nTotal Odd number are= %d",c,d);
    return 0;
}