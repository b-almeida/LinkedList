#include <iostream>

using namespace std;


/**
 * Linked-list node with an int data member and pointer to the next node.
 */
struct node
{
	int data;
	node* next;
};


/**
 * Prints the data from a linked-list (e.g. 2, 5, -12, 0, 5).
 */
void print(node* head)
{
	node* current = head;
	while (current->next != NULL)
	{
		cout << current->data << ", ";
		current = current->next;
	}
	cout << current->data << endl;
}


/**
 * Adds new_node to a linked-list that starts with head.
 * Returns the head of the linked-list.
 */
node* add(node* head, node* new_node)
{
	node* current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return head;
}


/**
 * Removes the first node found with a data member equal to data in a linked-list that starts with head.
 * Returns the head of the linked-list.
 */
node* remove(node* head, int data)
{
	if (head->data == data)
		return head->next;

	node* current = head;
	while (current->next != NULL)
	{
		if (current->next->data == data)
		{
			current->next = current->next->next;

			return head;
		}

		current = current->next;
	}
}


int main()
{
	cout << "Print Test" << endl;

	node n1 = {1, NULL};
	print(&n1);

	node n2 = {2, NULL};
	n1.next = &n2;
	print(&n1);

	node n3 = {3, NULL};
	n2.next = &n3;
	print(&n1);

	cout << endl;


	cout << "Add Test" << endl;

	node n4 = {3, NULL};
	add(&n1, &n4);
	print(&n1);

	node n5 = {7, NULL};
	add(&n1, &n5);
	print(&n1);

	node n6 = {8, NULL};
	add(&n1, &n6);
	print(&n1);

	cout << endl;


	cout << "Remove Test" << endl;
	node* head = &n1;

	head = remove(head, 1);
	print(head);

	head = remove(head, 3);
	print(head);

	head = remove(head, 8);
	print(head);

	cout << endl;


    return 0;
}
