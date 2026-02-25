#include <stdio.h>
// program of any number Table by while loop  , pr no 2
// Date:2-3/11/2023

int main()
{
    int num, i=0;
    printf("Enter the number you want the multiplication of :");
    scanf("%d", &num);

    while (i < 10)
    {
        i = i + 1;
        printf("%d*%d=%d\n", num, i, num * i);
    }

    return 0;
}

/*

# include <stdio.h>
// while loops , Date:31/10/2023  , pr no 1
int main()
{
    int i=0;

    while(i<50)
    {
        i=i+1;
        printf("%d\n",i);
        
    }
    return 0;
}

*/