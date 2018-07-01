#include"tday.h"

static int add();
main()
{

    int i;
    
     i = add();
    printf("Return value of ADD is : %d\n", i);
     i = add();
    printf("Return value of ADD is : %d\n", i);
     i = add();
    printf("Return value of ADD is : %d\n", i);
     i = add();

    printf("Return value of ADD is : %d\n", i);
    printf("Return value of GLOBL is : %d\n", globalValue);
   

}

static int add()
{
   int a= 10;
   int b = 20;
    printf("I am in  ADD\n");

   return (a+b);
}




 
