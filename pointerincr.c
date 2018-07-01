#include<stdio.h>

int main()
{
   int x = 10;
   int *ptr;
   int **pptr;

   ptr = x;
   pptr = &ptr;
   
   printf("Value in X is : %d\t value in ptr is : %d\t Value in ppa is :%d\n", x, *ptr, **pptr);

   printf("address in ptr is : %p\t address in ppa is :%p\n", ptr, pptr);

}
 
