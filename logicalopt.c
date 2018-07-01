#include<stdio.h>

main()
{
   unsigned int a = 10;

   a += 10;
   printf("Greater number is %d\n", a);

   a |= 1;
   printf("Greater number is %d\n", a);

   a &= 1;
   printf("Greater number is %d\n", a);

   a %=10;
   printf("Greater number is %d\n", a);
  
}

