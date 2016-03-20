#include <iostream>
#include "linkedlist.h"

using namespace std;


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
