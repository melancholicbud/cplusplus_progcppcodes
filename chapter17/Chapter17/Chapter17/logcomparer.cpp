//#include "logcomparer.h"
//#include <cstdlib>
//#include <iostream>
//// Method that actually performs the comparison
//// Derived classes may override this method
//bool LogComparer::compare_impl(int m, int n) {
//	fout << "Comparing " << m << " to " << n << '\n';
//	// Base class method does the comparision
//	return Comparer::compare_impl(m, n);
//}
//// Method that actually performs the swap
//// Derived classes may override this method
//void LogComparer::swap_impl(int& m, int& n) {
//	fout << "Swapping " << m << " and " << n << '\n';
//	int temp = m;
//	m = n;
//	n = temp;
//}
//// The client must initialize a LogComparer object with a suitable comparison function
//// and the file name of a text file to which the object will direct logging messages
//LogComparer::LogComparer(bool (*f)(int, int), const std::string& filename) :
//	Comparer(f) {
//	fout.open(filename);
//	if (!fout.good()) {
//		std::cout << "Could not open log file " << filename
//			<< " for writing\n";
//		exit(1); // Terminate the program
//	}
//	// fout is an instance variable, not a local variable,
//	// so the file stays open when the constructor finishes
//}