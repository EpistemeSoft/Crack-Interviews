#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main()
{
   char *ptr;
   char *cptr;

   ptr = malloc(20);
   cptr = calloc(1,20);

   strcpy(ptr, "Episteme Soft");
   strcpy(cptr, "Software Development");

   printf("String in ptr is: %s\n", ptr);

   printf("String in cptr is: %s\n", cptr);

   free(ptr);
   free(cptr);

}


