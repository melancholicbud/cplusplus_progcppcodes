//#include <iostream>
//#include <vector>
//#include <iomanip>
//
///* 
//*	binary_search(a, seek)
//*		Returns the index of element seek in vector a;
//*		Returns -1 if seek is not an element of a.
//*		a is the vector to search; a's contents must be sorted in ascending order
//*		seek is the element to find.
//*/
//int binary_search(const std::vector<int>& a, int seek) {
//	int first = 0, // initially the first position 
//		last = a.size() - 1, // initially the last position
//		mid; // the middle of the vector
//	while (first <= last) {
//		mid = first + (last - first + 1) / 2;
//		if (a[mid] == seek)
//			return mid; // found it
//		else if (a[mid] > seek)
//			last = mid - 1; // continue with 1st half
//		else // a[mid] < seek
//			first = mid + 1; // continue with 2nd half
//	}
//	return -1; // not there
//}
//
///* 
//*	format(i)
//*		Prints integer i right justified in a 4-space field.
//*		Prints "****" if i > 9,999.
//*/
//void format(int i) {
//	if (i > 9999)
//		std::cout << "****" << '\n'; // too big
//	else
//		std::cout << std::setw(4) << i;
//}
//
///*
//*	print(v)
//*		Prints the contents of an int vector.
//*		v is the vector to print.
//*/
//void print(const std::vector<int>& v) {
//	for (int i : v)
//		format(i);
//}
//
///*
//*	display(a, value)
//*		Draws an ASCII art arrow showing where the given value is within the vector
//*		a is the vector.
//*		value is the element to locate.
//*/
//void display(const std::vector<int>& a, int value) {
//	int position = binary_search(a, value);
//	if (position >= 0) {
//		print(a); // print contents of the vector
//		std::cout << '\n';
//		position = 4 * position + 7; // compute space for arrow
//		std::cout << std::setw(position);
//		std::cout << "   ^   " << '\n';
//		std::cout << std::setw(position);
//		std::cout << "   |   " << '\n';
//		std::cout << std::setw(position);
//		std::cout << "   +-- " << value << '\n';
//	}
//	else {
//		std::cout << value << " not in ";
//		print(a);
//		std::cout << '\n';
//	}
//	std::cout << "======" << '\n';
//}
//
//int main() {
//	// check binary search on even- and odd-length vecotrs and an empty vector
//	std::vector<int> even_list{ 1, 2, 3, 4, 5, 6, 7, 8},
//		odd_list{ 1, 2, 3, 4, 5, 6, 7, 8, 9},
//		empty_list;
//	for (int i = -1; i <= 10; i++)
//		display(even_list, i);
//	for (int i = -1; i <= 10; i++)
//		display(odd_list, i);
//	for (int i = -1; i <= 10; i++)
//		display(empty_list, i);
//}