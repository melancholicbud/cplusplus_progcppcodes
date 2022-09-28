#pragma once
#include <memory> // for std::shared_ptr

class IntList6 {
	// The nested private Node class from before
	struct Node
	{
		int data; // A data element of the list
		std::shared_ptr<Node> next; // The node that follows this one
		Node(int d); // Constructor
		Node(const Node&) = default; // Copy constructor
		Node(Node&&) = default; // Move constructor
		~Node(); // Destructor
		Node& operator=(const Node&) = default; // copy assignment
		Node& operator=(Node&&) = default; // Move assignment
	};

	std::shared_ptr<Node> head; // Points to the first item in the list
	std::shared_ptr<Node> tail; // Points to the last item in the list

	int len; // the number of elements in the list

public:
	/*
	*	The constructor makes an initially empty list
	*/
	IntList6();

	// The destructor that reclaims the list's memory
	~IntList6();

	// Copy constructor
	IntList6(const IntList6& other);

	// Move constructor
	IntList6(IntList6&& other);

	// Assignment operator
	IntList6& operator=(const IntList6& other);
	// Move assignment operator
	IntList6& operator=(IntList6&& other);

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