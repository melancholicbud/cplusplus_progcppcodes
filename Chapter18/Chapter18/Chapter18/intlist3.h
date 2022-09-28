#pragma once
#pragma once
class IntList3 {
	// The nested private Node class from before
	struct Node
	{
		int data; // A data element of the list
		Node* next; // The node that follows this one in the list
		Node(int d); // Constructor
		~Node(); // Destructor
	};

	Node* head; // Points to the first item in the list
	Node* tail; // Points to the last item in the list

	int len; // the number of elements in the list

public:
	/*
	*	The constructor makes an initially empty list
	*/
	IntList3();

	// The destructor that reclaims the list's memory
	~IntList3();

	/*
	*	insert(n)
	*		Inserts n onto the back of the list.
	*		n is the element to insert.
	*/
	void insert(int n);

	/*
	*	print()
	*		Prints the contents of the linked list of integers.
	*/
	void print() const;

	/*
	*	Returns the length of the linked list.
	*/
	int length() const;

	/*
	*	clear()
	*		Removes all the elements in the linked list.
	*/
	void clear();
};