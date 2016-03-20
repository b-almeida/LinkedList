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
 * Prints the data in node1.
 */
void f1(node* node1)
{
	cout << node1->data << endl;
}


/**
 * Prints the data in head and the node it points to.
 */
void f2(node* head)
{
	cout << head->data << ", " << head->next->data << endl;
}


/**
 * Prints the data from a 3-node linked-list that starts with head.
 */
void f3(node* head)
{
	cout << head->data << ", " << head->next->data << ", " << head->next->next->data << endl;
}


/**
 * Prints the data from a linked-list of any length that starts with head.
 */
void f4(node* head)
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
 * Adds new_node to the end of a linked-list that starts with head.
 * Returns the head of the linked-list.
 */
node* f5(node* head, node* new_node)
{
	node* current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return head;
}


 /**
 * Adds new_node to the beginning of a linked-list that starts with head.
 * Returns the new head of the linked-list.
 */
node* f6(node* head, node* new_node)
{
	new_node->next = head;

	return new_node;
}


int main()
{
	// create first linked-list
	node n1 = {5, NULL};

	node n2 = {10, NULL};
	n1.next = &n2;


	// create second linked-list
	node n3 = {15, NULL};

	node n4 = {20, NULL};
	n3.next = &n4;

	node n5 = {25, NULL};
	n4.next = &n5;


	cout << "F1 Test:" << endl;
    f1(&n1);
    cout << endl;


    cout << "F2 Test:" << endl;
    f2(&n1);
    cout << endl;


    cout << "F3 Test:" << endl;
    f3(&n3);
    cout << endl;


    cout << "F4 Test:" << endl;
    f4(&n1);
    f4(&n3);
	cout << endl;


	cout << "F5 Test:" << endl;
	node new_node_tail = {30, NULL};
	f5(&n3, &new_node_tail);
	f4(&n3);
	cout << endl;


	cout << "F6 Test:" << endl;
	node new_node_head = {10, NULL};
	node* head = f6(&n3, &new_node_head);
	f4(head);
	cout << endl;


    return 0;
}
