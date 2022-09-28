//#include <iostream>
//#include <limits>
//
//int main() {
//	int x;
//	// i hope the user does the right thing!
//	std::cout << "Please, enter an integer: ";
//	// enter and remain in the loop as long as the user provides bad input
//	while (!(std::cin >> x)) {
//		// report error and re-prompt
//		std::cout << "Bad entry, please try again: ";
//		// clean up the input stream
//		std::cin.clear(); // clear the error state of the stream
//		// empty the keyboard buffer
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	}
//	std::cout << "You entered " << x << '\n';
//}