//#include <iostream>
//#include <string>
//
//int main() {
//	// declare a string object and initialize it
//	std::string word = "fred";
//	// prints 4, since word contains four characters
//	std::cout << word.length() << '\n';
//	// prints "not emty", since word isn't empty
//	if (word.empty())
//		std::cout << "empty\n";
//	else
//		std::cout << "not empty\n";
//	// makes word empty
//	word.clear();
//	// prints "empty", since word now is empty
//	if (word.empty())
//		std::cout << "empty\n";
//	else
//		std::cout << "not empty\n";
//	// assign a string using operator= method
//	word = "good";
//	// prints "good"
//	std::cout << word << '\n';
//	// append another string using operator += method
//	word += "-bye";
//	// prints "good-bye"
//	std::cout << word << '\n';
//	// print first character using operator[] method
//	std::cout << word[0] << '\n';
//	// print last character
//	std::cout << word[word.length() - 1] << '\n';
//	// prints "od-by", the substring starting at index 2 of length 5
//	std::cout << word.substr(2, 5);
//	std::string first = "ABC", last = "XYZ";
//	// splice two strings with + operator
//	std::cout << first + last << '\n';
//	std::cout << "Compare " << first << " and ABC: ";
//	if (first == "ABC")
//		std::cout << "equal\n";
//	else
//		std::cout << "not equal\n";
//	std::cout << "Compare " << first << " and XYZ: ";
//	if (first == "XYZ")
//		std::cout << "equal\n";
//	else
//		std::cout << "not equal\n";
//}