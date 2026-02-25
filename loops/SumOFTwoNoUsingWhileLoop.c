#include <stdio.h>
 
int main()
{
  // program to get sum of numbers given by user 31/12/2023
  
  int num,x,s=0;
  printf("Enter your number :");
  scanf("%d",&num);
  
  while(num>0)
  {
    x=num%10;
    s=s+x;
    num=num/10;
  }
  printf("sum of digits is = %d",s);
  
  return 0;
}

