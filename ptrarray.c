#include<stdio.h>

main()
{
   int a = 10;
   int *ptr;
   int y;
   int z[] = { 20, 30, 40, 50, 60};
   int *ptr2;


   ptr = &a;
   y = *ptr;
   ptr2 = ptr;

   ptr = &z[1];


   printf("Value of A is :%d  by ptr is :%d Value of Y is %d\n", a, *ptr, y);

  ptr++;

  *ptr = *ptr+1;

   printf("Value of ptr is :%d\n", *ptr);
   printf("Value of ptr is :%d\n", *ptr2);

}

   
