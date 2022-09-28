//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <ctime>
//
///*
//*	binary_search(a, seek)
//*		Returns the index of element seek in vector a;
//*		returns -1 if seek isn't an element of a
//*		a is the vector to search; a's contents must be sorted in ascending order.
//*		seek is the element to find
//*/
//int binary_search(const std::vector<int>& a, int seek) {
//	int n = a.size();
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
//			}
//	return -1; // not there
//}
//
///*
//*	linear_search(a, seek)
//*		Returns the index of element seek in vector a.
//*		Returns -1 if seek is not an element of a.
//*		a is the vector to search.
//*		seek is the element to find.
//*		This version requires vector a to be sorted in ascending order.
//*/
//int linear_search(const std::vector<int>& a, int seek) {
//	int n = a.size();
//	for (int i = 0; i < n && a[i] <= seek; i++)
//		if (a[i] == seek)
//			return i; // return position immediately
//	return -1; // element not found
//}
//
///*
//*	Tests the execution speed of a given search function on a vector.
//*	search - the search function to test
//*	v	   - the vector to search
//*	trials - the number of trial runs to average
//*	Returns the elapsed time in seconds
//*	The C++ chrono library defines the types
//*	system_clock::time_point and microseconds.
//*/
//double time_execution(int(*search)(const std::vector<int>&, int), std::vector<int>& v, int trials) {
//	int n = v.size();
//	// average the time over a specified number of trials
//	double elapsed = 0.0;
//	for (int iters = 0; iters < trials; iters++) {
//		clock_t start_time = clock(); // start the timer
//		for (int i = 0; i < n; i++) // search for all elements
//			search(v, i);
//		clock_t end_time = clock(); // stop the timer
//		elapsed += static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
//	}
//	return elapsed / trials; // mean elapsed time per run
//}
//
//int main() {
//	std::cout << "---------------------------------------\n";
//	std::cout << "	Vector		Linear		Binary\n";
//	std::cout << "	Size		Search		Search\n";
//	std::cout << "---------------------------------------\n";
//
//	// Test the sorts on vectors with 1,000 elements up to 10,000 elements.
//	for (int size = 0; size <= 50000; size += 5000) {
//		std::vector<int> list(size); // Make a vector of the appropriate size
//
//		// ensure the elements are ordered low to high
//		for (int i = 0; i < size; i++)
//			list[i] = i;
//
//		std::cout << std::setw(7) << size;
//		// search for all the elements in list using linear search
//		// compute running time averaged over five runs
//		std::cout << std::fixed << std::setprecision(3) << std::setw(12)
//			<< time_execution(linear_search, list, 5) << " sec";
//		// search for all the elements in list binary search
//		// compute running time averaged over 25 runs
//		std::cout << std::fixed << std::setprecision(3) << std::setw(12)
//			<< time_execution(linear_search, list, 25) << " sec\n";
//	}
//}