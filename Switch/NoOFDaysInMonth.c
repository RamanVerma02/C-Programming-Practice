# include <stdio.h>
int main()
{
    // program to find number of days in month 
    
    int month;
    printf("ENTER THE MONTH NUMBER FROM 1 TO 12 :");
    scanf("%d",&month);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          printf("31 Days ");
          break;

        case 2:
          printf("28/29 DaYS");
          break;

        case 4:
        case 6:
        case 9:
        case 11:
          printf("30 Days");
          break;

        default :
          printf("Invalid input! Please enter month number between 1-12");
    }
    return 0;
}