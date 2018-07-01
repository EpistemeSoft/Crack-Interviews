#include<stdio.h>

main()
{
  int number, fact;

  printf("Enter the number for factorial\n");
  scanf("%d", &number);
 
  fact = factorial(number);
 
  printf("Value of factorial is: %d\n", fact);
}

int factorial(int num)
{
  int i;
  int fact = 1;

  for(i = num; i > 1; i--)
  {
     fact = fact*i;
  }
  return fact;
}

