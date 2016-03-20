#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


using namespace std;

/**
 * Linked-list node with a string data member and pointer to the previous and next nodes.
 */
struct node
{
	string data;
	node* prev;
	node* next;
};

/**
 * Prints the data from a doubly linked-list (e.g. 2, 5, -12, 0, 5).
 */
void print(node* head);

/**
 * Prints the data from a doubly linked-list backwards (e.g. 5, 0, -12, 5, 2).
 */
void printBackwards(node* tail);

/**
 * Adds new_node to a doubly linked-list that starts with head.
 * Returns the head of the doubly linked-list.
 */
node* add(node* head, node* new_node);

/**
 * Inserts new_node in a doubly linked-list that contains node1.
 * Returns the head of the doubly linked-list.
 */
node* insert(node* node1, node* new_node);

/**
 * Removes the first node found with a data member equal to data in a doubly linked-list that starts with head.
 * Returns the head of the doubly linked-list.
 */
node* remove(node* head, string data);


#endif // LINKEDLIST_H_INCLUDED
