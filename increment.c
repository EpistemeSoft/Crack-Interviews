#include<stdio.h>

main()
{
   int a, x;
   
   a = 20;
 
   a++;
   printf("Value of A is: %d\n", a);

   ++a;
   printf("Value of A is: %d\n", a);

   x = a++;
   printf("Value of A is: %d\n", a);
   printf("Value of X is: %d\n", x);

   x = ++a;
   printf("Value of A is: %d\n", a);
   printf("Value of X is: %d\n", x);

}

