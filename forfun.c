#include<stdio.h>

main()
{
   int number;
   char name[20];   
   
   
   for(number = 1; number <= 6; number++)
   {
      printf("Enter student name:%d\n",number);
      scanf("%s", name);
      printf("Name of student : %s\n", name);
      if(number == 1)
        printf("Firstclass guy\n");

      if(number == 5)
        printf("Backlog guy\n");
   }
   printf("Total number of students %d\n", --number);

}
