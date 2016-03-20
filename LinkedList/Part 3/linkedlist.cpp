#include <iostream>
#include "linkedlist.h"

using namespace std;


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
