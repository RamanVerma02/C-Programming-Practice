#include <stdio.h>

int main()
{
    // program to find prime number 31/12/2023
    int y,i,c=0;
    printf("Enter any number: ");
    scanf("%d",&y);

    for(i=2; i<y; i++)
    {
        if (y%i==0)
        {
            c=c+1;
            // printf("%d\n",i);
            // printf("%d\n",c);
            // break;
        }
    }
    if (c == 0)
    {
        printf("%d is a prime number",y);
    }
    else
    {
        printf("%d is non-prime number",y);
    }
    return 0;
}