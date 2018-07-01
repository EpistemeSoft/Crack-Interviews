#include<stdio.h>

main()
{
   int array[] = { 20, 30, 40, 50 , 60};
   int *ip, *iq;

   ip = array;

   ip++;
   iq = ip;
   printf("Value in array is with IP :%d\n", *ip);
   printf("Value in array is with IQ :%d\n", *iq);

}


    
