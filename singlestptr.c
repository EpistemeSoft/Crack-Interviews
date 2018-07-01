#include<stdio.h>
#include<stdlib.h>

typedef struct totsubjuects_s{
  int english;
  int math;
  int social;
  int science;
  int hindi;
  }totsubjuects_t;  

typedef struct student_s{
  int rollno;
  char *name;
  totsubjuects_t totsubMarks;
}student_t;

main()
{

    student_t *rajuptr;
 
    printf("Storage space of Struct: %ld\n", sizeof(struct student_s));   
    rajuptr = (student_t*)malloc(sizeof(student_t));
    rajuptr->name = (char*)malloc(50);

    printf("Enter student roll number\n");
    scanf("%d",&rajuptr->rollno);
    printf("Enter student name\n");
    scanf("%s",rajuptr->name);

    printf("Enter English Marks\n");
    scanf("%d", &rajuptr->totsubMarks.english);
    printf("Enter Math Marks\n");
    scanf("%d", &rajuptr->totsubMarks.math);
    printf("Enter Social Marks\n");
    scanf("%d", &rajuptr->totsubMarks.social);
    printf("Enter Science Marks\n");
    scanf("%d", &rajuptr->totsubMarks.science);
    printf("Enter Hindi Marks\n");
    scanf("%d", &rajuptr->totsubMarks.hindi);

  
    printf("Roll number: %d\n", rajuptr->rollno);
    printf("Name : %s\n",rajuptr->name);
    printf("Marks: %d\n", rajuptr->totsubMarks.english);
    printf("Marks: %d\n", rajuptr->totsubMarks.math);
    printf("Marks: %d\n", rajuptr->totsubMarks.social);
    printf("Marks: %d\n", rajuptr->totsubMarks.science);
    printf("Marks: %d\n", rajuptr->totsubMarks.hindi);
}



