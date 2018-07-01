#include<stdio.h>
#include<string.h>

void stringcopy(char *src, char *dst);
main()
{
   char str[] = "Episteme";
   char str1[10];
   char *ptr;
   int i = 0;

   ptr = str;
   while(*ptr != '\0') 
   {
       printf("Value in string chars are : %c\n", *ptr);
       ptr++;
   }
   ptr = str;
   i = stringlengh(ptr);
   stringcopy(str,str1);
 
   
   printf("new string is : %s\n", str1);

   printf("String length is : %d\n", i);

}
 
int stringlengh(char *cptr)
{
   int i = 0;
   while(*++cptr != '\0') 
   {
       i++;
   }
   return i;
}
   

void stringcopy(char *src, char *dst)
{
    while((*dst++ = *src++) != '\0')
    *dst = '\0';
}




















