// pointerprint.cpp
/* 
#include <iostream>
using namespace std;

int main() {
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }, * p;
	p = &a[0]; // p points to first element of array a
	
	// print out the contents of the array
	for (int i = 0; i < 10; i++) {
		cout << *p << ' '; // print the element p points to
		p++; // increment p so it points to the next element
	}
	cout << '\n';
}
*/
// pointerprint2.cpp
/*
#include <iostream>
using namespace std;

int main() {
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }, * begin, * end, * cursor;
	begin = a; // begin points to first element of array a
	end = a + 10; // end points to just after the last element

	// print out the contents of the array
	cursor = begin;
	while (cursor != end) {
		cout << *cursor << ' '; // print the element
		cursor++; // increment cursor so it points to the next element
	}
	cout << '\n';
}
*/