#include <iostream>
#include "linkedlist.h"

using namespace std;


int main()
{
	cout << "Print and Print Backwards Test" << endl;

	node n1 = {"apple", NULL, NULL};
	print(&n1);
	printBackwards(&n1);
	cout << endl;

	node n2 = {"banana", NULL, NULL};
	n1.next = &n2;
	n2.prev = &n1;
	print(&n1);
	printBackwards(&n2);
	cout << endl;

	node n3 = {"cherry", NULL, NULL};
	n2.next = &n3;
	n3.prev = &n2;
	print(&n1);
	printBackwards(&n3);
	cout << endl;


	cout << "Add Test" << endl;

	node n4 = {"date", NULL, NULL};
	add(&n1, &n4);
	print(&n1);

	node n5 = {"egg", NULL, NULL};
	add(&n1, &n5);
	print(&n1);

	node n6 = {"fig", NULL, NULL};
	add(&n1, &n6);
	print(&n1);

	cout << endl;


	cout << "Insert Test" << endl;
	node* head = &n1;
	node* tail = &n6;

	node new_node_1 = {"almond", NULL, NULL};
	head = insert(tail, &new_node_1);
	print(head);

	node new_node_2 = {"grape", NULL, NULL};
	head = insert(head, &new_node_2);
	print(head);

	node new_node_3 = {"cabbage", NULL, NULL};
	head = insert(&n4, &new_node_3);
	print(head);

	cout << endl;


	cout << "Remove Test" << endl;

	head = remove(head, "almond");
	print(head);

	head = remove(head, "egg");
	print(head);

	head = remove(head, "grape");
	print(head);

	cout << endl;


    return 0;
}
