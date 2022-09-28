//#include <iostream>
//#include <vector>
//
///*
//*	print
//*		Prints the contents of a vector of integers
//*		a is the vector to print; a is not modified
//*/
//void print(const std::vector<int>& a) {
//	int n = a.size();
//	std::cout << "{";
//	if (n > 0) {
//		std::cout << a[0]; // print the first element
//		for (int i = 1; i < n; i++)
//			std::cout << ',' << a[i]; // print the rest
//	}
//	std::cout << "}";
//}
//
///*
//*	Prints all the permutations of vector a in the index range
//*	begin...end, inclusive. The function's behavior is undefined if
//*	begin or end represents an index outside of the bounds of vector a.
//*/
//void permute(std::vector<int>& a, int begin, int end) {
//	if (begin == end) {
//		print(a);
//		std::cout << '\n';
//	}
//	else {
//		for (int i = begin; i <= end; i++) {
//			// interchange the element at the first position
//			// with the element at position i
//			std::swap(a[begin], a[i]);
//			// recursively permute the rest of the vector
//			permute(a, begin + 1, end);
//			// interchange the current element at the first position
//			// with the current element at position i
//			std::swap(a[begin], a[i]);
//		}
//	}
//}
//
///*
//*	Tests tjhe permutation functions
//*/
//int main() {
//	// get number of values from the user
//	std::cout << "Please, enter number of values to permute: ";
//	int number;
//	std::cin >> number;
//	// create the vector to hold all the values
//	std::vector<int> list(number);
//	// initialize the vector
//	for (int i = 0; i < number; i++)
//		list[i] = i;
//
//	// print original list
//	print(list);
//	std::cout << "\n----------\n";
//	// print all the permutations of list
//	permute(list, 0, number - 1);
//	std::cout << "\n----------\n";
//	// print list after all manipulations
//	print(list);
//}