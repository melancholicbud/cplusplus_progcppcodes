//#include "intlist1.h"
//#include <iostream>
//
//int main() {
//	bool done = false;
//	char command;
//	int value;
//	IntList1 list;
//	while (!done) {
//		std::cout << "I) nsert <item> P)rint L)ength E)rase Q)uit >>";
//		std::cin >> command;
//		switch (command)
//		{
//		case 'I': // Insert a new element into the list
//		case 'i':
//			if (std::cin >> value)
//				list.insert(value);
//			else
//				done = true;
//			break;
//		case 'P': // Print the contents of the list
//		case 'p':
//			list.print();
//			break;
//		case 'L': // Print the list's length
//		case 'l':
//			std::cout << "Number of elements: " << list.length() << '\n';
//			break;
//		case 'E': // Erase the list
//		case 'e':
//			list.clear();
//			break;
//		case 'Q': // Exit the loop (and the program)
//		case 'q':
//			done = true;
//			break;
//		}
//	}
//	list.clear(); // free up the space held by the linked list
//}