#include<stdio.h>

void stringcopy(char *src, char *dest);
main()
{
   char str1[] = "Episteme Soft";
   char str2[20];
   int count = 0;

   char *ptr1;
   char *ptr2;

   ptr1 = str1;
   ptr2 = str2;

   
   while(*ptr1 != '\0')
   {
     printf(" Chars in Str1 are :%c\n", *ptr1);
     ptr1++;
     count++;
   }

   printf("String length of Str1 is :%d\n", count);

   stringcopy(str1, str2);
   printf(" Chars in Str2 are :%s\n", str2);
   

}

void stringcopy(char *src, char *dest)
{
   while(*src != '\0')
   {
      *dest = *src;
       dest++;
       src++;
   }
   *dest = '\0';
}


   
