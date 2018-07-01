#include<stdio.h>

main()
{
   int x, y;
   int *ptr;
  
   x = 10;

   ptr = &x;
   
   printf("Ptr address: %p and value is :%d\n",ptr, *ptr);

  y = x;
  printf("value  of Y is :%d\n",y);

  y = *ptr;
  printf("value of Y is :%d\n", y);

  *ptr = 20;
  printf("value of X is :%d\n",x);

  ptr = &y;
  printf("value of ptr is :%d\n",*ptr);

  ptr++;
  printf("value of ptr is :%d\n",*ptr);

  



}


   
