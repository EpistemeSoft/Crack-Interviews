#include<stdio.h>
#include<stdlib.h>

typedef struct student_s{
  int rollno;
  char name[20];
  int percentmarks;
}student_t;
 
void addinfo(void);
void printinfo(void);

student_t stuinfo[] = { 
                        { 3, "Chenna", 45 },
                        { 4, "Kesav", 34 },
                        { 5, "Reddy", 76 },
                        { 6, "Raju", 56 }
                       };
student_t *ptr = NULL;


main()
{
    int i;

#if 0
    ptr = stuinfo;
    for(i = 0; i < 4; i++)
    {
       addinfo();
       ptr++;
    }
#endif

    ptr = stuinfo;
    for(i = 0; i < 4; i++)
    {
       printinfo();
       ptr++;
    }

    ptr = stuinfo;
    printf("Name of Student:%s\n",(++ptr)->name);

}

  
void addinfo(void)
{

    printf("Enter student rollnumber\n");
    scanf("%d", &ptr->rollno);

    printf("Enter name of the Student\n");
    scanf("%s", ptr->name);
   
    printf("Enter percentage of Marks\n");
    scanf("%d", &ptr->percentmarks);

}

void printinfo(void)
{
   
    printf("student rollnumber: %d\n", ptr->rollno);
    printf("name of the Student: %s\n", ptr->name);
    printf("percentage of Marks: %d\n", ptr->percentmarks);
}


 


