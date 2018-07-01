#include<stdio.h>
#include<stdlib.h>

typedef struct emp_s{
   int index;
   char name[20];
   struct emp_s *pNext;
   struct emp_s *pPrev;
  }emp_t;

emp_t *pHead = NULL;
emp_t *pTail = NULL;

main()
{
    emp_t *pEmp1, *pEmp2, *pEmp3;
    emp_t *pTemp;

    pEmp1 = (emp_t*)malloc(sizeof(emp_t));
    printf("Enter index of Emp\n");
    scanf("%d",&pEmp1->index);
    printf("Enter Name of Emp\n");
    scanf("%s", pEmp1->name);
    pEmp1->pNext = NULL;
    pEmp1->pPrev = NULL;
    
    
    pEmp2 = (emp_t*)malloc(sizeof(emp_t));
    printf("Enter index of Emp\n");
    scanf("%d",&pEmp2->index);
    printf("Enter Name of Emp\n");
    scanf("%s", pEmp2->name);
    pEmp2->pNext = NULL;
    pEmp2->pPrev = NULL;

 
   
    pEmp3 = (emp_t*)malloc(sizeof(emp_t));
    printf("Enter index of Emp\n");
    scanf("%d",&pEmp3->index);
    printf("Enter Name of Emp\n");
    scanf("%s", pEmp3->name);
    pEmp3->pNext = NULL;
    pEmp3->pPrev = NULL;


   //Link all 3 nodes


   pHead = pEmp1;
   pEmp1->pNext = pEmp2;
   pEmp1->pPrev = NULL;
 
   pEmp2->pNext = pEmp3;
   pEmp2->pPrev = pEmp1;
  
   pEmp3->pNext = NULL;
   pEmp3->pPrev = pEmp2;

   pTail = pEmp3;

   
//   Forward printing

   pTemp = pHead;
   while(pTemp != NULL)
   {
      printf("Index of Emp is: %d\n", pTemp->index);
      printf("Name of Emp is : %s\n", pTemp->name);
      printf("\n");
     
      pTemp = pTemp->pNext;
   }


 //  Backword printing

   pTemp = pTail;
   while(pTemp != NULL)
   {
      printf("Index of Emp is: %d\n", pTemp->index);
      printf("Name of Emp is : %s\n", pTemp->name);
      printf("\n");
     
      pTemp = pTemp->pPrev;
   }


}










