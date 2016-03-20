#include <iostream>
#include "linkedlist.h"

using namespace std;


/**
 * Prints the data from a doubly linked-list (e.g. 2, 5, -12, 0, 5).
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
 * Prints the data from a doubly linked-list backwards (e.g. 5, 0, -12, 5, 2).
 */
void printBackwards(node* tail)
{
	node* current = tail;
	while (current->prev != NULL)
	{
		cout << current->data << ", ";
		current = current->prev;
	}
	cout << current->data << endl;
}


/**
 * Adds new_node to a doubly linked-list that starts with head.
 * Returns the head of the doubly linked-list.
 */
node* add(node* head, node* new_node)
{
	node* current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return head;
}


/**
 * Inserts new_node in a doubly linked-list that contains node1.
 * Returns the head of the doubly linked-list.
 */
node* insert(node* node1, node* new_node)
{
	node* current = node1;	// current node being examined for entire function


	// find head of linked-list
	while (current->prev != NULL)
		current = current->prev;
	node* head = current;


	// insert node in sorted list

	if (new_node->data < head->data)
	{
		new_node->next = head;
		head->prev = new_node;

		return new_node;
	}

	while (current->next != NULL)
	{
		if (current->data <= new_node->data && new_node->data <= current->next->data)
		{
			new_node->next = current->next;
			current->next->prev = new_node;

			current->next = new_node;
			new_node->prev = current;

			return head;
		}

		current = current->next;
	}

	if (current->data < new_node->data)
	{
		current->next = new_node;
		new_node->prev = current;

		return head;
	}
}


/**
 * Removes the first node found with a data member equal to data in a doubly linked-list that starts with head.
 * Returns the head of the doubly linked-list.
 */
node* remove(node* head, string data)
{
	if (head->data == data)
	{
		head->next->prev = NULL;

		return head->next;
	}

	node* current = head;
	while (current->next != NULL)
	{
		if (current->next->data == data)
		{
			current->next = current->next->next;
			if (current->next != NULL)
				current->next->prev = current;

			return head;
		}

		current = current->next;
	}
}
