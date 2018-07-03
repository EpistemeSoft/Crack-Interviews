#include<stdio.h>

void extract3rdbit( unsigned x)
{
    if(( x >> 3) & 1) == 1)
      printf("3rd bit set to 1\n");
    else
      printf("3rd bit set to zero\n");
}

void set3rdbit(unsigned x)
{
   x = x | (1 << 3);
   printf("Value of X is: %d\n", x);
}

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

