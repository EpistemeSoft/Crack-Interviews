#include<stdio.h>

int bitcount(unsigned x)
{
  int count = 0;
  
  while(x != 0)
  {
     if(x & 1)
       count++;
     x = x >> 1;
  }
  return count; 
}

main()
{
   unsigned in x= 10;
   int ret = 0;
   
   ret = bitcount(x);
   printf("Number of bits in x is: %d\n", ret);
 }
 
