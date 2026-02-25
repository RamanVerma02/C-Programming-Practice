# include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you want multiplication of:",a);
    scanf("%d",&a);

    printf("The Table of %d\n",a);
    printf("%d*1=%d\n",a,a*1);
    printf("%d*2=%d\n",a,a*2);
    printf("%d*3=%d\n",a,a*3);
    printf("%d*4=%d\n",a,a*4);
    printf("%d*5=%d\n",a,a*5);
    printf("%d*6=%d\n",a,a*6);
    printf("%d*7=%d\n",a,a*7);
    printf("%d*8=%d\n",a,a*8);
    printf("%d*9=%d\n",a,a*9);
    printf("%d*10=%d\n",a,a*10);
  /*  
    // method 1
    printf("%d*1=%d",a,a*1);   

    // method 2
    printf("%d\n",a*1-------*10);
  */

    return 0;
}