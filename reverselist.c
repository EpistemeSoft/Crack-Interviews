// Iterative C++ program to reverse
// a linked list
#include<iostream>
using namespace std;

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
	Node (int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList
{
	Node *head;
	LinkedList()
	{
		head = NULL;
	}


	/* Function to reverse the linked list */
	void reverse()
	{
		// Initialize current, previous and
		// next pointers
		Node *pTemp1 = head;
		Node *pTemp2 = NULL, *pTemp3= NULL;


		while (pTemp1 != NULL)
		{
           head = pTemp1;
           pTemp2 = pTemp1->next;
           pTemp1->next = pTemp3;
           pTemp3 = pTemp1;
           pTemp1 = pTemp2;
		}
		
	}

	/* Function to print linked list */
	void print()
	{
		struct Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node *temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.reverse();

	cout << "\nReversed Linked list \n";
	ll.print();
	return 0;
}
