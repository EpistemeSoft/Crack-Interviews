/* C/C++ program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
typedef struct node_s{
  int data;
  struct node_s *pNext;
}node_t;

node_t* SortedMerge(node_t *a, node_t *b)
{
    node_t z;
    node_t *pTemp = &z;
    
    while(a != NULL && b != NULL)
    {
        if(a->data <= b->data)
        {
            pTemp->pNext = a;
            pTemp = pTemp->pNext;
            a = a->pNext;
        }
        else
        {
            pTemp->pNext = b;
            pTemp = pTemp->pNext;
            b = b->pNext;
        }
    }
    if(a == NULL)
      pTemp->pNext = b;
    else
      pTemp->pNext = a;
    return z.pNext;
}
 
/* Function to insert a node at the beginging of the linked list */
void push(node_t  **pHead, int newData)
{
  /* allocate node */
  node_t *newNode = (node_t*)malloc(sizeof(node_t));
  new_node->data = newData;
  newNode->pNext = (*pHead);
  *pHead = newNode;
}

/* Function to print nodes in a given linked list */
void printList(node_t *node)
{
  while (node!=NULL)
  {
    printf("%d ", node->data);
    node = node->pNext;
  }
}

/* Drier program to test above functions*/
int main()
{
  /* Start with the empty list */
  node_t *res = NULL;
  node_t *a = NULL;
  node_t *b = NULL;
  Created lists, a: 5->10->15, b: 2->3->20 */
  push(&a, 15);
  push(&a, 10);
  push(&a, 5);
  push(&b, 20);
  push(&b, 3);
  push(&b, 2);

  /* Remove duplicates from linked list */
  res = SortedMerge(a, b);

  printf("Merged Linked List is: \n");
  printList(res);

  return 0;
}
