# include <stdio.h>
int main()
{
    char name[50];
    int age;
    // Prompt the user for their name
    printf("Enter your Name:\n");
    scanf("%s",name);

    // Prompt the user for their age 
    printf("Enter your Age:\n");
    scanf("%d",&age);
    
    // Print the message
    printf("\nHello!,%s, you are %d years old",name,age);
    return 0;
}