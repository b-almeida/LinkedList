#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


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
void print(node* head);

/**
 * Adds new_node to a linked-list that starts with head.
 * Returns the head of the linked-list.
 */
node* add(node* head, node* new_node);

/**
 * Removes the first node found with a data member equal to data in a linked-list that starts with head.
 * Returns the head of the linked-list.
 */
node* remove(node* head, int data);


#endif // LINKEDLIST_H_INCLUDED
