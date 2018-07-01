#include<stdio.h>
#include<string.h>

struct student{
  int rollno;
  char name[20];
  int percentmarks;
  struct student *pNext;
};


struct student addinfo(int rollnu, char *name, int pmarks);
main()
{
   int i;
   struct student stuinfo[4];
   struct student *pTemp = NULL;
   int rollnu;
   char name[20];
   int marks;
   
   for(i = 0; i < 4; i++)
   {

     printf("Enter student roll number\n");
     scanf("%d",&rollnu);
     printf("Enter student name\n");
     scanf("%s",name);
     printf("Enter student percentage of Marks\n");
     scanf("%d",&marks);
     stuinfo[i] = addinfo(rollnu,name,marks);

   }

    stuinfo[0].pNext = &stuinfo[1];
    stuinfo[1].pNext = &stuinfo[2];
    stuinfo[2].pNext = &stuinfo[3];
    stuinfo[3].pNext = NULL;

   pTemp = stuinfo;
  
   printf("\n");
   
   while(pTemp != NULL)
   {
      printf("Roll number: %d\n", pTemp->rollno);
      printf("Name : %s\n",pTemp->name);
      printf("Marks: %d\n",pTemp->percentmarks);
      pTemp = pTemp->pNext;
   }

}
struct student addinfo(int rollnu, char *name, int pmarks)
{
   struct student tempst;
   tempst.rollno = rollnu;
   strcpy(tempst.name,name);
   tempst.percentmarks = pmarks;
   return tempst;
}

   
  

