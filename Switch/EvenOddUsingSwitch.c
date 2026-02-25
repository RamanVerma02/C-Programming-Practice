# include <stdio.h>
int main()
{
    // program to find even odd using switch
    
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    switch (number%2)
    {
    case 0:
        printf("Number is even\n");
        break;

    case 1:
        printf("Number is odd\n");
        break;
    
    }
    return 0;
}