#include <stdio.h>
int main()
{
    // program to check number postive,negative or zero using switch
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("The number is positive");
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("The number is Negative");
            break;

        case 0:
            printf("the number is Zero");
            break;
        }
    }
    return 0;
}