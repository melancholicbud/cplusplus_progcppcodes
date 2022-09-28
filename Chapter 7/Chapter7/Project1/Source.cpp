/* switchdigittoword.cpp 
#include <iostream>

int main() {
	int value;
	std::cout << "Please enter an integer in the range 0...5: ";
	std::cin >> value;
	switch (value) {
	case 0:
		std::cout << "zero";
		break;
	case 1:
		std::cout << "one";
		break;
	case 2:
		std::cout << "two";
		break;
	case 3:
		std::cout << "three";
		break;
	case 4:
		std::cout << "four";
		break;
	case 5:
		std::cout << "five";
		break;
	default:
		if (value < 0)
			std::cout << "Too small";
		else
			std::cout << "Too large";
		break;
	}
	std::cout << '\n';
}
*/

/* goodinputonly.cpp 
#include <iostream>

int main() {
	int in_value = -1;
	std::cout << "Please, enter an integer in the range 0-10: ";
	// insist on values in the range 0...10
	while (in_value < 0 || in_value > 10)
		std::cin >> in_value;
	// in_value at this point is guaranteed to be within range
	std::cout << "Legal value entered was " << in_value << '\n';
}
*/

/* betterinputonly.cpp
#include <iostream>

int main() {
	int in_value;
	std::cout << "Please, enter an integer in the range 0-10: ";
	// insist on values in the range 0...10
	do
		std::cin >> in_value;
	while (in_value < 0 || in_value > 10);
	// in_value at this point is guaranteed to be within range
	std::cout << "Legal value entered was " << in_value << '\n';
}
 */

/* forcounttofive.cpp 
#include <iostream>

int main() {
	for (int count = 1; count <= 5; count++)
		std::cout << count << '\n'; // display counter
}
*/

/* bettertimestable.cpp 
#include <iostream>
#include <iomanip>

int main() {
	int size; // the number of rows and columns in the table
	std::cout << "Please, enter the table size: ";
	std::cin >> size;
	// print a size x size multiplication table

	// first, print heading
	std::cout << "     ";
	for (int column = 1; column <= size; column++)
		std::cout << std::setw(4) << column; // print heading for this column
	std::cout << '\n';
	// print line separator
	std::cout << "    +";
	for (int column = 1; column <= size; column++)
		std::cout << "----"; // print separator for this column.
	std::cout << '\n';
	// print table contents
	for (int row = 1; row <= size; row++) {
		std::cout << std::setw(4) << row << " |"; // print row label
		for (int column = 1; column <= size; column++)
			std::cout << std::setw(4) << row * column; // display product
		std::cout << '\n'; // move cursor to next row
	}
}
*/

/* permuteabcd.cpp 
#include <iostream>

int main() {
	for (char first = 'A'; first <= 'D'; first++)
		for (char second = 'A'; second <= 'D'; second++)
			if (second != first) // no duplicate letters
				for (char third = 'A'; third <= 'D'; third++)
					if (third != first && third != second)
						for (char fourth = 'A'; fourth <= 'D'; fourth++)
							if (fourth != first && fourth != second && fourth != third)
								std::cout << first << second << third << fourth << '\n';
}
*/

/* forprintprimes.cpp 
#include <iostream>

int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	for (int value = 2; value <= max_value; value++) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		// try all possible factors from 2 to value - 1
		for (int trial_factor = 2; is_prime && trial_factor < value; trial_factor++)
			is_prime = (value % trial_factor != 0);
		if (is_prime)
			std::cout << value << " "; // display the prime number
	}
	std::cout << '\n'; // move cursor down to next line
}
*/

/* 7.5.1 
#include <iostream>

int main() {
	int x;
	std::cin >> x;
	switch (x + 3) {
	case 5:
		std::cout << x << '\n';
		break;
	case 10:
		std::cout << x - 3 << '\n';
		break;
	case 20:
		std::cout << x + 3 << '\n';
		break;
	}
}
*/

/* 7.5.2 
#include <iostream>

int main() {
	char ch;
	std::cin >> ch;
	switch (ch) {
	case 'a':
		std::cout << "*\n";
		break;
	case 'A':
		std::cout << "**\n";
		break;
	case 'B':
	case 'b':
		std::cout << "***\n";
	case 'C':
	case 'c':
		std::cout << "****\n";
		break;
	default:
		std::cout << "*****\n";
	}
}
*/

/* 7.5.3 
#include <iostream>

int main() {
	int x = 0;
	do {
		std::cout << x << " ";
		x++;
	} while (x < 10);
	std::cout << '\n';
}
*/

/* 7.5.4 
#include <iostream>

int main() {
	int x = 20;
	do {
		std::cout << x << " ";
		x++;
	} while (x < 10);
	std::cout << '\n';
}
*/

/* 7.5.5
#include <iostream>

int main() {
	for (int x = 0; x < 10; x++)
		std::cout << "*";
	std::cout << '\n';
}
 */

/* 7.5.6
#include <iostream>

int main() {
	int value;;
	char ch;
	std::cin >> ch;
	switch (ch) {
	case 'A':
		std::cout << 10;
		break;
	case 'P':
		std::cout << 20;
		break;
	case 'T':
		std::cout << 30;
		break;
	case 'V':
		std::cout << 40;
		break;
	default:
		std::cout << 50;
	}
	std::cout << '\n';
}
 */

/* 7.5.7 
#include <iostream>

int main() {
	int value;
	char ch;
	std::cin >> ch;
	if (ch == 'A')
		value = 10;
	else if (ch == 'P')
		value = 20;
	else if (ch == 'T')
		value = ch;
	else if (ch == 'V')
		value = 1000;
	else
		value = 50;
	std::cout << value << '\n';
}
*/

/* 7.5.8 
#include <iostream>

int main() {
	int value;
	char ch;
	std::cin >> ch;
	if (ch == 'A') {
		std::cout << ch << '\n';
		value = 10;
	}
	else if (ch == 'P') {}
	else if (ch == 'E') {
		std::cin >> value;
	}
	else if (ch == 'T') {
		std::cin >> ch;
		value = ch;
	}
	else if (ch == 'C') {
		value = ch;
		std::cout << "value = " << value << ", ch = " << ch << '\n';
	}
	else if (ch == 'V')
		value = ch + 1000;
	else
		std::cout << value << '\n';
}
*/

/* 7.5.9 
#include <iostream>

int main() {
	int i = 100;
	while (i > 0) {
		i--;
		std::cout << i << '\n';
	}
}
*/

/* 7.5.12 */
#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;
	if (x < 10)
		y = 10;
	else if (x == 5)
		y = 5;
	else if (x == y)
		y = 0;
	else if (y > 10)
		x = 10;
	else
		x = y;

}