#include<stdio.h>
#include<stdlib.h>

/* structure for a node */
struct Node
{
	int data;
	struct Node *next;
};

/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(struct Node **start_ref, int data);

/* Function to bubble sort the given linked list */
void bubbleSort(struct Node *start);

/* Function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b);

/* Function to print nodes in a given linked list */
void printList(struct Node *start);

int main()
{
	int arr[] = {12, 56, 2, 11, 1, 90};
	int list_size, i;

	/* start with empty linked list */
	struct Node *start = NULL;

	/* Create linked list from the array arr[].
	Created linked list will be 1->11->2->56->12 */
	for (i = 0; i< 6; i++)
		insertAtTheBegin(&start, arr[i]);

	/* print list before sorting */
	printf("\n Linked list before sorting ");
	printList(start);

	/* sort the linked list */
	bubbleSort(start);

	/* print list after sorting */
	printf("\n Linked list after sorting ");
	printList(start);

	getchar();
	return 0;
}


/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(struct Node **start_ref, int data)
{
	struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
	ptr1->data = data;
	ptr1->next = *start_ref;
	*start_ref = ptr1;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *start)
{
	struct Node *temp = start;
	printf("\n");
	while (temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

/* Bubble sort the given linked list */
void bubbleSort(struct Node *pHead)
{
   int tempIndex;
   struct Node *p, *q;
   int i, j;
   int k;
   int totalNodes;
   k = totalNodes = 6;

   for(i = 0; i <totalNodes -1; i++, k--)
   {
     p = pHead;
     q = p->next;
     for( j = 1; j < k; j++)
     {
        if(p->data > q->data)
        {
           tempIndex = p->data;
           p->data = q->data;
           q->data = tempIndex;
        }
        q = q->next;
        p = p->next;
     }
  }

}

/* function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}
