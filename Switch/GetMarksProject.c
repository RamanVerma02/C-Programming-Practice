/*  Author: Raman Verma
    Date:26/10/20223
    purpose: Learning Switch  */
# include <stdio.h>
int main()
{   
    int number,rollNumber;
    printf("Enter your marks\n");
    scanf("%d",&number);

    printf("Enter your roll number\n");
    scanf("%d",&rollNumber);


    switch (number)
    {
    case 30:
        printf("your marks are 30\n");
        switch (rollNumber)
        {
        case 17:    
            printf("She is priya\n");
            break;
        
        default:
            printf("She is not priya");
        }
        break;

    case 40:
        printf("your marks are 40\n");
        break;

    case 50:
        printf("your marks are 50\n");
        break;    

    default:
        printf("You have entered wrong marks");
        break;
    }
    return 0;
}

