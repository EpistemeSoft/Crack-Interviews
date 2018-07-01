#include<stdio.h>

main()
{
   int number;
   char name[20];   
   
   number = 1;
    
   
   while(number <= 6)
   {
      printf("Enter student name:%d\n",number);
      scanf("%s", name);
      printf("Name of student : %s\n", name);
      if(number == 5)
        printf("Backlog guy\n");
      number++; 
   }
   printf("Total number of students %d\n", --number);

}
