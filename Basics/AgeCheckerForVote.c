# include <stdio.h>
int main ()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    
    printf("You have entered %d as your age\n",age);
    if (age>=18) 
    {
        printf("you can vote");
    }
    else if (age>=11)
    {
      printf("You can not vote since you are a teen ager");
    }
    else if (age>=3)
    {
        printf("you can not vote you are a child");
    }
    else 
    {
        printf("You can't Vote!");
    }
    return 0;
}
