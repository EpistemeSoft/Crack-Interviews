#include<stdio.h>
#include<stdlib.h>

typedef struct employee_s{
   char name[20];
   float basicSalary;
   int hra;
   struct employee_s *pNext;
}employee_t;

employee_t* addEmpdata(void);
vioid printEmpList(void);

employee_t *pHead = NULL;

main()
{
   employee_t *emp1, *emp2,*emp3;
   
   emp1 = addEmpdata();
   emp2 = addEmpdata();
   emp3 = addEmpdata();

  // Link the employees as List

   pHead = emp1;
   emp1->pNext = emp2;
   emp2->pNext = emp3; 
   emp3->pNext = NULL; 

//   Print Employee Data
   printEmpList();
   
 
}

employee_t* addEmpdata(void)
{
   employee_t* emp;
   emp = (employee_t*)malloc(sizeof(employee_t));
   printf("Enter the name of Employee\n");
   scanf("%s", emp->name);
   printf("Enter Salary of Employee\n");
   scanf("%f", &emp->basicSalary);
   printf("Enter HRA of Employee\n");
   scanf("%d", &emp->hra);
   emp->pNext = NULL; 
   return emp;
}

void printEmpList(void)
{
   
   employee_t *pTemp = NULL;
   pTemp = pHead;
   while(pTemp != NULL)
   {
        printf("name of Employee is: %s\n", pTemp->name);
        printf("Salary of Employee is :%f\n", pTemp->basicSalary);
        printf("HRA of Employee is : %d\n", pTemp->hra);
      pTemp = pTemp->pNext;
   }
}

    
   



     
 







