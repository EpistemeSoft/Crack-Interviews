#include<stdio.h>
#include<string.h>

#define INT 1
#define FLOAT 2
#define LONG 3


struct stuinfo {
  char name[20];
  int marks;
  int utype;
  union utag {
    int rollnu;
    float tag;
    long value;
   }tagvariable;
}rajustu;



main()
{

     strcpy(rajustu.name, "Rajeswr Reddy");
     rajustu.marks = 55;
     rajustu.utype = LONG; 
     rajustu.tagvariable.value = 20L;

     if(rajustu.utype == INT)
        printf("Filled with INT :%d\n", rajustu.tagvariable.rollnu);

     if(rajustu.utype == FLOAT)
        printf("Filled with FLOAT :%f\n", rajustu.tagvariable.tag);

     if(rajustu.utype == LONG)
        printf("Filled with LONG :%ld\n", rajustu.tagvariable.value);

     printf("Name: %s\n", rajustu.name);
     printf("Marks : %d\n", rajustu.marks);

}


      
  
     
  
