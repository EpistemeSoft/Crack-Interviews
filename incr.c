#include<stdio.h>
 
extern globalValue;

void increment(int x)
{
   
  int factinInc;
  globalValue++;

  printf("Value of X is %d\n", x);
 
  factinInc = factorial();

  printf("Factorial of :%d is :%d\n", globalValue, factinInc);

}



  
    

