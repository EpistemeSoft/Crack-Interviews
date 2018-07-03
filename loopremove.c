#include<stdio.h>
#include<stdlib.h>

/* Link list node */
typedef struct node_s 
{
	int data;
	struct node_s *pNext;
}node_t;

/* Function to remove loop */
void removeLoop(node_t *, node_t *);

/* This function detects and removes loop in the list
If loop was there in the list then it returns 1,
otherwise returns 0 */
int detectAndRemoveLoop(node_t *list)
{
  node_t *ptr1 = list;
  node_t *ptr2 = list->pNext;

  while (ptr2 != NULL && ptr1 != ptr2)
  {
    ptr1 = ptr1->pNext;
    ptr2 = ptr2->pNext;

    if (ptr2 != NULL)
    {
      ptr2 = ptr2->pNext;
    }
  }
  if(ptr2 == NULL)
    printf("No loop\n");
  else
    removeLoop(ptr1, list);
  return 0;
}

void removeLoop(node_t *loopNode, node_t *pHead)
{
  node_t *ptr1;
  node_t *ptr2;

  ptr1 = pHead;
  while (1)
  {
    ptr2 = loopNode;
    while (ptr2->pNext != loopNode && ptr2->pNext != ptr1)
		ptr2 = ptr2->pNext;
    if (ptr2->pNext == ptr1)
      break;
    ptr1 = ptr1->pNext;
  }
  ptr2->pNext = NULL;
}

/* Function to print linked list */
void printList(node_t *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->pNext;
  }
}

struct Node *newNode(int key)
{
  node_t *temp = (node_t*)malloc(sizeof(node_t));
  temp->data = key;
  temp->pNext = NULL;
  return temp;
}

/* Drier program to test above function*/
int main()
{
  node_t *head = newNode(50);
  head->pNext = newNode(20);
  head->pNext->pNext = newNode(15);
  head->pNext->pNext->pNext = newNode(4);
  head->pNext->pNext->pNext->pNext = newNode(10);

  printList(head);
	/* Create a loop for testing */
  head->next->next->next->next->next = head->next->next;
  detectAndRemoveLoop(head);

  printf("\n Linked List after removing loop \n");
  printList(head);
  return 0;
}
