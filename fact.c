#include<stdio.h>

int globalValue = 5;

int factorial(int x);
main()
{

  int fact;
   
  fact = factorial(globalValue);
  printf("Factorial of :%d is :%d\n", globalValue, fact);


}
 
int factorial( int x)
{
    int i;
    int retValue = 1;

    printf("Value of X is %d\n", x); 

    for(i = globalValue; i > 1; i--)
    {
       retValue = retValue * i;
    }

    return retValue;
}


      
  

   

   
