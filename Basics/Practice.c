# include <stdio.h>
int main()
{
    int a;
    printf("please choose the subject in which you are passed\n");
    printf("if you are pass in math type= 1\n");
    printf("if you are pass in science type= 2\n");
    printf("if you are pass in math & science type= 3\n");
    scanf("%d",&a);

    if (a==1)
    {
        printf("You are passed in math and you got 15 marks");
    }
    else if (a==2)
    {
        printf("You are passed in science and you got 15 marks");
    }
    else if (a==3)
    {
        printf("You are passed in math and science so you got 45 marks");
    }
    else 
    {
        printf("you have typed wrong number");
    }

return 0;

}