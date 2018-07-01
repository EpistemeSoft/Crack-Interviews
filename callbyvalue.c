#include<stdio.h>

void swapfun(int*, int*);
main()
{
   int x = 10, y = 20;
    
    swapfun(&x,&y);

    printf("Value of X is : %d  Y is %d\n", x, y);
}

void swapfun(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

