#include<stdio.h>
main()
{
  int i, fact = 1, number = 5;
  for(i = number; i > 1; i--)
  {
       fact = fact * i;
  }
  printf("Factorial of :%d is :%d\n", number, fact);
}

