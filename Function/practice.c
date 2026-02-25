#include<stdio.h>

int Sum()
{
    int a,b,sum;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);
    sum=a+b;
    printf("The Sum is %d\n",sum);
}

int Sub ()
{
    int a,b,sub;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);
    sub=a-b;
    printf("The diffrence is %d\n",sub);
}

int Mul ()
{
    int a,b,mul;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);
    mul=a*b;
    printf("The multiplication is %d\n",mul);
}

int Div()
{
    float a,b,div;

    
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);
    div=a/b;
    printf("the divide is %.2f",div);
}

int main()
{
    int x;
    printf("Enter a number between 1-4\n1 for addition\n2 for subtract\n3 for Multiplication\n4 for Divide\n");
    scanf("%d",&x);

    if (x==1)
    {
        Sum();
    }
    else if (x==2)
    {
        Sub();
    }
    else if(x==3)
    {
        Mul();
    }
    else if (x==4)
    {
        Div();
    }
    else 
    {
        printf("you have entered wrong number:");
    }
    
    return 0;
}