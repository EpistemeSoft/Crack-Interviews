#include<stdio.h>
#include<stdlib.h>

typedef struct emp_s{
   int index;
   char name[20];
   struct emp_s *pNext;
   struct emp_s *pPrev;
}emp_t;


emp_t* addEmpdata(emp_t *newnode);
int addAtFront(void);
int addAtEnd(void);
void displayList(void);
void deleteNode(int index);


emp_t *pHead = NULL;

main()
{

     int i;
     int index;
     while(1)
     {
       printf("Enter add at Front/add at End/Delete \n");
       printf("Case:1 Add at Front\n");
       printf("Case:2 Display nodes\n");
       printf("Case:3 Add at End\n");
       printf("Case:4 Delete Node\n");
       
       scanf("%d", &i);
       switch(i)
       {
          case 1: 
            addAtFront();
            break;
          case 2:
            displayList();
            break;
          case 3:
            addAtEnd();
            break;
          case 4:
            printf("Enter index you want to delete\n");
            scanf("%d", &index);
            deleteNode(index);
            break;
          default:
             exit(0);
       }
     }

}

emp_t* addEmpdata(emp_t *newnode)
{
   newnode = (emp_t*)malloc(sizeof(emp_t));
   printf("Enter index of Employee\n");
   scanf("%d", &newnode->index);
   printf("Enter name of Employee\n");
   scanf("%s", newnode->name);
   newnode->pNext = NULL;
   newnode->pPrev = NULL;
   return newnode;
}

int addAtFront(void)
{
  emp_t *new;

  new = addEmpdata(new);
 
  if(pHead == NULL)
  {
    pHead = new;
    
  }
  else
  {
     new->pNext = pHead;
     pHead->pPrev = new;
     pHead = new;
  }

}


void displayList(void)
{
   emp_t *pTemp;
   pTemp = pHead;
   
   while(pTemp != NULL)
   {
      printf("Index of Emp is: %d\n", pTemp->index);
      printf("Name of EMp is : %s\n", pTemp->name);
     
      pTemp = pTemp->pNext;
   }
}

int addAtEnd(void)
{
  emp_t *new;  
  emp_t *pTemp;
  pTemp = pHead;
  new = addEmpdata(new);

  if(pHead == NULL)
  {
     pHead = new;
  }
  else
  {
     while(pTemp->pNext != NULL)
        pTemp = pTemp->pNext;
     pTemp->pNext = new;
     new->pPrev = pTemp;
     
  }
}

void deleteNode(int index)
{
   emp_t *pTemp;
   emp_t *old;
   pTemp = pHead;
   while(pTemp != NULL)
   {
     if(pTemp->index == index)
     {
       if(pTemp == pHead)
       {
          if(pTemp->pNext != NULL)
          {
            pTemp->pNext->pPrev = NULL;
            pHead = pTemp->pNext;
            free(pTemp);
          }
          else
          {
            free(pTemp);
            pHead = NULL;
          }
       }
       else
       {
          old->pNext = pTemp->pNext;
          if(pTemp->pNext != NULL)
          {
             pTemp->pNext->pPrev = old;
          }
          free(pTemp);
       }
     }
     else
     {
        old = pTemp;
        pTemp = pTemp->pNext;
     }
  }
}




















  
  
