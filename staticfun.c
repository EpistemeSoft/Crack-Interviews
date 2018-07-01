#include<stdio.h>

void staticfunc(void);
main()
{

   staticfunc();
   staticfunc();
   staticfunc();

}

void staticfunc(void)
{
   static int count = 10;
   
   printf("Value of count: %d\n", count);

}


