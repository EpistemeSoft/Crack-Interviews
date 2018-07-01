#include<stdio.h>

int add(int a, int b);
int multiply(int x, int y);

main()
{
   int c= 2, d=3, f=4;
   int z;
 

   int (*funptr)(int, int);

   funptr = add;

   z = funptr(c, d);
  
   printf("Value of Add is : %d\n", z);

   funptr = multiply;

   z = funptr(c, d);
  
   printf("Value of Add is : %d\n", z);

}

int add( int a, int b)
{
   return(a+b);
}


int multiply(int x, int y)
{
  return(x*y);
}

   
   
