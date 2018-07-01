#include<stdio.h>
#include<stdlib.h>

main()
{
   int *ptr;
   int *ptr1;
   int *ptr2;
   int i;

   
   ptr = (int*)malloc(10*sizeof(int));
   ptr1 = ptr;
   ptr2 = ptr;

   for(i = 0; i < 10; i++)
   {
     *ptr1 = i+1;
      ptr1++;
   }
  
   for(i = 0; i < 10; i++)
   {
      printf("Values in memory: %d\n", *ptr2);
      ptr2++;
   }
  
   free(ptr);

}


