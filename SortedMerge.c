/* C/C++ program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};

/* pull off the front node of the source and put it in dest */
void MoveNode(struct Node** destRef, struct Node** sourceRef);

/* Takes two lists sorted in increasing order, and splices
their nodes together to make one big sorted list which
is returned. */
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node z;
    struct Node *pTemp = &z;
    
    while(a != NULL && b != NULL)
    {
        if(a->data <= b->data)
        {
            pTemp->next = a;
            pTemp = pTemp->next;
            a = a->next;
        }
        else
        {
            pTemp->next = b;
            pTemp = pTemp->next;
            b = b->next;
        }
    }
    if(a == NULL)
      pTemp->next = b;
    else
      pTemp->next = a;
    return z.next;
}
 
/* Function to insert a node at the beginging of the
linked list */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Drier program to test above functions*/
int main()
{
	/* Start with the empty list */
	struct Node* res = NULL;
	struct Node* a = NULL;
	struct Node* b = NULL;

	/* Let us create two sorted linked lists to test
	the functions
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