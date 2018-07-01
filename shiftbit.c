#include<stdio.h>

main()
{
  unsigned int a; 
  unsigned int b; 
  
  printf("Enter the value of A\n");
  scanf("%d", &a);

  printf("Enter the value of B\n");
  scanf("%d", &b);
  if( a == b) 
     printf(" Both registers are equal  A: %d  B: %d\n", a,b);
  else
     printf(" Both registers are not equal  A: %d  B: %d\n", a,b);
 
}

