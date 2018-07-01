/* Program to remove duplicates in an unsorted
linked list */
#include<bits/stdc++.h>
using namespace std;

/* A linked list node */
struct Node
{
	int data;
	struct Node *next;
};

// Utility function to create a new Node
struct Node *newNode(int data)
{
Node *temp = new Node;
temp->data = data;
temp->next = NULL;
return temp;
}

/* Function to remove duplicates from a sorted linked list */
void removeDuplicates(struct Node *pHead)
{
  struct Node* pTemp = pHead;
  struct Node* nextNode; 
  
  if(pTemp == NULL) 
     return; 

  while(pTemp->next != NULL) 
  {
    if(pTemp->data == pTemp->next->data) 
    {
      nextNode = pTemp->next->next;
      free(pTemp->next);
      pTemp->next = nextNode;  
    }
    else
    {
      pTemp = pTemp->next; 
    }
  }
}


/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Druver program to test above function */
int main()
{
	/* The constructed linked list is:
	10->12->11->11->12->11->10*/
	struct Node *start = newNode(10);
	start->next = newNode(11);
	start->next->next = newNode(11);
	start->next->next->next = newNode(11);
	start->next->next->next->next = newNode(12);
	start->next->next->next->next->next =
									newNode(12);
	start->next->next->next->next->next->next =
									newNode(13);

	printf("Linked list before removing duplicates ");
	printList(start);

	removeDuplicates(start);

	printf("\nLinked list after removing duplicates ");
	printList(start);

	return 0;
}
