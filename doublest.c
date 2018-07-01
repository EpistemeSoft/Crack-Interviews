#include<stdio.h>
#include<string.h>

struct sciencesubject{
  int phy;
  int chem;
};
  
struct marks{
  struct sciencesubject science;
  int social;
  int math;
};

struct student{
  int rollno;
  char name[20];
  struct marks totalsubjects;
};

main()
{
   struct student raju;

   raju.rollno = 3;
   strcpy(raju.name, "Rajeswar Reddy");
   raju.totalsubjects.science.phy = 45;
   raju.totalsubjects.science.chem = 48;
   raju.totalsubjects.social = 55;
   raju.totalsubjects.math = 89;
    
   printf("Roll number: %d\n", raju.rollno);
   printf("Name: %s\n", raju.name);
   printf("Phy Marks: %d\n", raju.totalsubjects.science.phy);
   printf("Chem Marks: %d\n", raju.totalsubjects.science.chem);
   printf("Social Marks: %d\n", raju.totalsubjects.social);
   printf("Math Marks: %d\n", raju.totalsubjects.math);

}


