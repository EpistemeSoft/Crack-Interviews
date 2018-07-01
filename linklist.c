#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct emp_s{
   int index;
   char name[20];
   struct emp_s *pNext;
}emp_t;


emp_t* addEmpdata(emp_t *newnode);
int addAtFront(void);
int addAtEnd(void);
int delete(int index);
void displayList(void);
int insertnode(void);
emp_t* linearSerach(int index);
emp_t* findMiddle(emp_t *startNode, emp_t *endNode);
emp_t* binarySerach(int index);
void selectionSort(void);
void bubbleSort(void);
void pushStack(void);
void popStack(void);
void enque(void);
void deque(void);
void removeDuplicates(emp_t* head);


emp_t *pHead = NULL;
emp_t *pTail = NULL;
int totalNodes = 0;

main()
{

     int i;
     int index;
     emp_t *pTemp;
     emp_t *startNode, *endNode;
     while(1)
     {
       printf("Enter add at Front/add at End/Delete \n");
       printf("Case:1 Add at Front\n");
       printf("Case:2 Add at End\n");
       printf("Case:3 Delete given node\n");
       printf("Case:4 Display nodes\n");
       printf("Case:5 insert nodes\n");
       printf("Case:6 linear search \n");
       printf("Case:7 binary search \n");
       printf("Case:8 selection sort \n");
       printf("Case:9 Bubble sort \n");
       printf("Case:10 Push to the Stack \n");
       printf("Case:11 pop from stack\n");
       printf("Case:12 Enque\n");
       printf("Case:13 Deque\n");
       printf("Case:14 Remove duplicates on Sorted list\n");
       
       scanf("%d", &i);
       switch(i)
       {
          case 1: 
            addAtFront();
            break;
          case 2:
            addAtEnd();
            break;
          case 3:
            printf("Enter index of employee to delete\n");
            scanf("%d", &index);
            delete(index);
            break;
          case 4:
            displayList();
            break;
          case 5:
            insertnode();
            break;
          case 6:
            printf("Enter index of employee to search in list\n");
            scanf("%d", &index);
            pTemp = linearSerach(index);
            if(pTemp == NULL)
               printf("Given index not avilable\n");
            else
            {
               printf("Index of Employee: %d\n", pTemp->index);
               printf("Name of Employee: %s\n",pTemp->name);
            }
            break;
          case 7:
            printf("Enter index of employee to search in list\n");
            scanf("%d", &index);
            pTemp =  binarySerach(index);
            if(pTemp == NULL)
               printf("Given index not avilable\n");
            else
            {
               printf("Index of Employee: %d\n", pTemp->index);
               printf("Name of Employee: %s\n",pTemp->name);
            }
            break;
          case 8:
            selectionSort();
            break;
          case 9:
            bubbleSort();
            break;
           
          case 10:
            pushStack();
            break;

          case 11:
            popStack();
            break;

          case 12:
            enque();
            break;

          case 13:
            deque();
            break;

          case 14:
            removeDuplicates(pHead);
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
   totalNodes++;
   return newnode;
}

int addAtFront(void)
{
   emp_t *new;
   new = addEmpdata(new);
   if(pHead == NULL)
   {
     pHead = new;
     return;
   }
   else
   {
     new->pNext = pHead;
     pHead = new;
   }
   return;
}
 
int addAtEnd(void)
{
   emp_t *new;
   emp_t *pTemp;

   new = addEmpdata(new);
   if(pHead == NULL)
   {
      pHead = new;
      return;
   }
   else
   {
      pTemp = pHead;
      while(pTemp->pNext != NULL)
      {
         pTemp = pTemp->pNext;
      }
      pTemp->pNext = new;
      new->pNext = NULL;
   }
   return;
}



void displayList(void)
{
   
   emp_t *pTemp = NULL;

   pTemp = pHead;
   while(pTemp != NULL)
   {
      printf("Index of Employee is : %d\n", pTemp->index);
      printf("name of Employee is: %s\n", pTemp->name);
      pTemp = pTemp->pNext;
   }
}


int delete(int index)
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
           pTemp = pTemp->pNext;
           free(pHead);
           totalNodes--;
           pHead = pTemp;
           return;
        }
        else
        {
           old->pNext = pTemp->pNext;
           free(pTemp);
           totalNodes--;
           return;
        }

     
     }
     else
     {
        old = pTemp;
        pTemp = pTemp->pNext;
     }
  }
  printf("Given index not found\n");
  return;
}
     

int insertnode(void)
{
   emp_t *newnode, *currentnode;
   newnode = addEmpdata(newnode);

   if(pHead == NULL || pHead->index > newnode->index)
   {
      newnode->pNext = pHead;
      pHead = newnode;
   }

   else
   {
     currentnode = pHead;
     while(currentnode->pNext != NULL && currentnode->pNext->index < newnode->index)
     {
        currentnode = currentnode->pNext;
     }
     
     newnode->pNext = currentnode->pNext;
     currentnode->pNext = newnode;
  }
}
      
emp_t* linearSerach(int index)
{
   emp_t *pTemp;

   pTemp = pHead;
   while(pTemp != NULL)
   {
      if(pTemp->index == index)
      {
         return pTemp;
      }
      else
      {
         pTemp = pTemp->pNext;
      }
   }
   return NULL;
}
emp_t* findMiddle(emp_t *startNode, emp_t *endNode)
{
   int i;
   emp_t *pTemp = startNode;
   emp_t *pMiddle = NULL;
   
   for(i = 1; pTemp != endNode; pTemp = pTemp->pNext, i++)
   {
      if(i == 1)
        pMiddle = pTemp;
      else if(i%2 == 1)
        pMiddle = pMiddle->pNext;
   }
   return pMiddle;
}

emp_t* binarySerach(int index)
{
   emp_t *pMiddle = NULL;
   emp_t *startNode = pHead; 
   emp_t *endNode = NULL;
  
   do{
        pMiddle = findMiddle(startNode,endNode);
        if(pMiddle == NULL)
        {
           return NULL;
        }
        else if(pMiddle->index == index)
        {
           return pMiddle;
           break;
        }
        else if(pMiddle->index < index)
        {
          startNode = pMiddle->pNext;
        }
        else
        {
          endNode = pMiddle;
        }
     }while(endNode == NULL || endNode != pMiddle->pNext);
}


void selectionSort(void)
{
   int tempIndex;
   char tempName[20];
   emp_t *p, *q;
   int i, j;

   p = pHead;
   for(i = 0; i <totalNodes -1; i++)
   {
     q = p->pNext;
     for( j = i+ 1; j < totalNodes; j++)
     {
        if(p->index > q->index)
        {
           tempIndex = p->index;
           strcpy(tempName, p->name);

           p->index = q->index;
           strcpy(p->name, q->name);
           
           q->index = tempIndex;
           strcpy(q->name, tempName);
        }
        q = q->pNext;
     }
     p = p->pNext;
  }

}

           
      
void bubbleSort(void)
{
   int tempIndex;
   char tempName[20];
   emp_t *p, *q;
   int i, j;
   int k;
   k = totalNodes;

   for(i = 0; i < totalNodes -1; i++, k--)
   {
     p = pHead;
     q = p->pNext;
     for( j = 1; j < k; j++)
     {
        if(p->index > q->index)
        {
           tempIndex = p->index;
           strcpy(tempName, p->name);

           p->index = q->index;
           strcpy(p->name, q->name);
           
           q->index = tempIndex;
           strcpy(q->name, tempName);
        }
        q = q->pNext;
        p = p->pNext;
     }
  }

}

void pushStack(void)
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
      pHead = new;
   }
}
 
void popStack(void)
{
   emp_t *pTemp;
   if(pHead == NULL)
     printf("No list\n");
   else
   {
     pTemp = pHead;
     pHead = pHead->pNext;
     free(pTemp);
   }
}

     
void enque(void)
{
   emp_t *new;
   new = addEmpdata(new);

   if(pHead == NULL)
   {
      pHead = pTail = new;
   }
   else
   {
      pTail->pNext = new;
      pTail = new;
   }
}
   
void deque(void)
{
  emp_t *pTemp;
  if(pHead == NULL)
    printf("Que is empty\n");
  else
  { 
    pTemp = pHead;
    pHead = pHead->pNext;
    free(pTemp);
  }
}

void removeDuplicates(emp_t* pHead)
{
  emp_t* pTemp = pHead;
  emp_t* nextNode; 
  
  if(pTemp == NULL) 
     return; 

  while(pTemp->pNext != NULL) 
  {
    if(pTemp->index == pTemp->pNext->index) 
    {
      nextNode = pTemp->pNext->pNext;
      free(pTemp->pNext);
      pTemp->pNext = nextNode;  
    }
    else
    {
      pTemp = pTemp->pNext; 
    }
  }
}

 
   









               


   


     
  
   
   




















