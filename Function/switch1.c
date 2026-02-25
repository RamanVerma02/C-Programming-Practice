#include<stdio.h>

int main()
{
    // Prorgram to check greatest number amoung three number using switch 
    // date 7-aug-2024
    int a,b,c;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);

    switch(a>b && a>c)
    {
        case 1:
            printf("a(%d) is greater than b and c",a);
            break;
        case 0:
            switch(b>a && b>c)
            {
                case 1:
                    printf("b(%d) is greater than a and c",b);
                    break;
                case 0:
                    printf("c(%d) is greater than a and b",c);
                    break;
            }
        break;

    }
    return 0;
}

/*
#include<stdio.h>
    // same program using if else
        
int main()
{
    int a,b,c;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("a(%d) is greater than b & c",a);
    }
    else if(b>a && b>c)
    {
        printf("b(%d) is greater than a & c",b);
    }
    else if(c>a && c>b)
    {
        printf("c(%d) is greatest number",c);
    }
    else 
    {
        printf("all are equal numbers");
    }
    return 0;
}
*/