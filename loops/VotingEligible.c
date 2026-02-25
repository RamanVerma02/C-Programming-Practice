#include <stdio.h>
int main()
{
  // program to check your voting age Eligiblity ny if esle
  // Date=30/10/2023
  int age, period;
  printf("Enter the AGE:\n");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("You are eligible to Vote");
  }
  
  else if  (period= 18 - age)
  {
    printf("You are not eligible right now,you can vote after %d year",period);
  }

  return 0;
}