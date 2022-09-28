/* counttofive.cpp 
#include <iostream>

int main() {
	std::cout << 1 << '\n';
	std::cout << 2 << '\n';
	std::cout << 3 << '\n';
	std::cout << 4 << '\n';
	std::cout << 5 << '\n';
}
*/

/* iterativecounttofive.cpp
#include <iostream>

int main() {
	int count = 1; // initialize counter
	while (count <= 20) {
		std::cout << count << '\n'; // display counter, then
		count++; // increment counter
	}
}
 */

/* countup.cpp 
*	Counts up from zero. The user continues the court
	by entering 'Y'. The user discontinues the count by entering 'N'.
#include <iostream>

int main() {
	char input; // the users choice
	int count = 0; // the current count
	bool done = false; // we aren't done

	while (!done) {
		// print the current value of count
		std::cout << count << '\n';
		std::cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
		std::cin >> input;
		// check for "bad" input
		if (input != 'Y' && input != 'y' && input != 'N' && input != 'n')
			std::cout << "\"" << input << "\""
			<< " is not a valid choice" << '\n';
		else if (input == 'Y' || input == 'y')
			count++; // keep counting
		else if (input == 'N' || input == 'n')
			done = true; // quit the loop
	}
}
 */

/* addnonnegatives.cpp 
* allow the user to enter a sequence of nonnegative integers.
* the user ends the list with a negative integer.
* at the end of the sum of the nonegative integers entered is displayed.
* the program prints zero if the user enters no nonnegative integers. 
#include <iostream>

int main() {
	int input = 0, sum = 0; // ensure the loop is entered & initialize sum

	// request input from the user
	std::cout << "Enter numbers to sum, negative number ends list: ";
	while (input >= 0) { // a negative number exists the loop
		std::cin >> input; // get the value
		if (input >= 0)
			sum += input; // only add it if it's nonnegative
	}
	std::cout << "Sum = " << sum << '\n'; // display the sum
}
*/

/* addnumbers.cpp 
#include <iostream>

int main() {
	int input, sum = 0;
	std::cout << "Enter numbers to sum, type 'q' to end the list: ";
	while (std::cin >> input)
		sum += input;
	std::cout << "Sum = " << sum << '\n';
}
*/

/* powersof10.cpp
#include <iostream>

int main() {
	int power = 1;
	while (power <= 1000000000) {
		std::cout << power << '\n';
		power *= 10;
	}
}
 */

/* powersof10justified.cpp 
#include <iostream>
#include <iomanip>


int main() {
// print the powers of 10 from 1 to 1,000,000,000
	int power = 1;
	while (power <= 1000000000) {
		// right justify each number in a field 10 wide
		std::cout << std::setw(10) << power << '\n';
		power *= 10;
	}
}
*/

/* powersof10withcommas.cpp
#include <iostream>
#include <iomanip>

// print the powers of 10 from 1 to 1,000,000,000
int main() {
	int power = 1;
	std::cout.imbue(std::locale(""));
	while (power <= 1000000000) {
		// right justify each number in a field 10 wide
		std::cout << std::setw(13) << power << '\n';
		power *= 10;
	}
}
 */

/* troubleshootloop.cpp
#include <iostream>

int main() {
	std::cout << "Help! My computer doesn't work!\n";
	char choice;
	bool done = false; // initially, we aren't done
	while (!done) { // continue until we are done
	std::cout << "Does the computer make any sounds (fans, etc.) "
		<< "or show any lights? (y/n): ";
	std::cin >> choice;
	// the troubleshooting control logic
	if (choice == 'n') { // the computer doesn't have power
		std::cout << "Is it plugged in? (y/n): ";
		std::cin >> choice;
		if (choice == 'n') { // it isn't plugged in, plug it in
			std::cout << "Plug it in. If the problem persists, please run this program again.\n";
		}
		else { // it's plugged in
			std::cout << "Is the switch in the \"on\" position? (y/n): ";
			std::cin >> choice;
			if (choice == 'n') { // the switch is off, turn it on!
				std::cout << "Turn it on. If the problem persists, please run this program again.\n";
			}
			else { // the swtich is on
				std::cout << "Does the computer have a fuse? (y/n): ";
				std::cin >> choice;
				if (choice == 'n') { // no fuse
					std::cout << "Is the outlet OK? (y/n): ";
					std::cin >> choice;
					if (choice == 'n') { // fix outlet
						std::cout << "Check the outlet's circuit breaker of fuse. Move to a new outlet, "
							<< "if necessary. If the problem persists, please run this program again.\n";
					}
					else { // beats me!
						std::cout << "Please consult a service technician.\n";
					}
				}
				else { // check fuse
					std::cout << "Check the fuse. Replace if necessary. If the problem persists, then, please, run this program again.\n";
				}
			}
		}
	}
	else { // the computer has power
		std::cout << "Please, consult a service technician\n";
		done = true;
		}
	}
}
*/

/* timestable-1st-try.cpp
#include <iostream>

int main() {
	int size; // the number of rows and columns in the table
	std::cout << "Please, enter the table size: ";
	std::cin >> size;
	// print a size x size multiplication table
	int row = 1;
	while (row <= size) { // table has 10 rows
		std::cout << "Row #" << row << '\n';
		row++; // next row
	}
}
 */

/* timestable-2nd-try.cpp
#include <iostream>

int main() {
	int size; // the number of rows and columns in the table
	std::cout << "Please, enter the table size: ";
	std::cin >> size;
	// print a size x size multiplication table
	int row = 1;
	while (row <= size) { // table has 10 rows
		int column = 1; // reset column for each row
		while (column <= size) { // table has size columns
			int product = row * column; // compute product
			std::cout << product << " "; // display product
			column++; // next element
		}
		std::cout << '\n';
		row++; // next row
	}
}
 */

/* timestable-3rd-try.cpp 
#include <iostream>
#include <iomanip>

int main() {
	int size; // the number of rows and columns in the table
	std::cout << "Please, enter the table size: ";
	std::cin >> size;
	// print a size x size multiplication table
	int row = 1;
	while (row <= size) { // table has 10 rows
		int column = 1; // reset column for each row
		while (column <= size) { // table has size columns
			int product = row * column; // compute product
			std::cout << std::setw(4) << product; // display product
			column++; // next element
		}
		std::cout << '\n';
		row++; // next row
	}
}
*/

/* timestable.cpp
#include <iostream>
#include <iomanip>

int main() {
	int size; // the number of rows and columns in the table
	std::cout << "Please, enter the table size: ";
	std::cin >> size;
	// print a size x size multiplication table
	// first, print heading: 1 2 3 4 5 etc.
	std::cout << "   ";
	// print column heading
	int column = 1;
	while (column <= size) {
		std::cout << std::setw(4) << column; // print heading for this column
		column++;
	}
	std::cout << '\n';

	// print line separator: +------------------
	std::cout << "   +";
	column = 1; // inner loop
	while (column <= size) {
		std::cout << "----"; // print line for this column
		column++;
	}
	std::cout << '\n';

	// print table contents
	int row = 1; // outer loop
	while (row <= size) { // table has 10 rows
		std::cout << std::setw(2) << row << " |"; // print heading for row.
		int column = 1; // reset column for each row
		while (column <= size) { // table has size columns
			int product = row * column; // compute product
			std::cout << std::setw(4) << product; // display product
			column++; // next element
		}
		row++; // next row
		std::cout << '\n';
	}
}
 */

/* premuteabc.cpp
#include <iostream>

int main() {
	char first = 'A'; // the first letter varies from A to C
	while (first <= 'C') {
		char second = 'A';
		while (second <= 'C') { // the second varies from A to C
			if (second != first) { // no duplicate letters
				char third = 'A';
				while (third <= 'C') { // the third varies from A to C
					// don't duplicate first or second letter
					if (third != first && third != second)
						std::cout << first << second << third << '\n';
					third++;
				}
			}
			second++;
		}
		first++;
	}
}
 */

/* addmiddleexit.cpp
#include <iostream>

int main() {
	int input = 0, sum = 0;
	std::cout << "Enter numbers to sum, negative number ends list: ";
	while (true) { 
		std::cin >> input;
		if (input < 0)
			break; // exit loop immediately
		sum += input;
	}
	std::cout << "Sum = " << sum << '\n';
}
 */

/* exitnested.cpp
#include <iostream>

int main() {
	// compute some products
	int op1 = 2;
	while (op1 < 100) {
		int op2 = 2;
		while (op2 < 100) {
			if (op1 * op2 == 3731)
				goto end;
			std::cout << "Product is " << (op1 * op2) << '\n';
			op2++;
		}
		op1++;
	}
end: // label-identifier that comes after and outside the nested while-loops
	std::cout << "The end" << '\n';
}
 */

/* gotoloop.cpp
#include <iostream>

int main() {
	int count = 1; // initialize counter
top:
	if (count > 5)
		goto end;
	std::cout << count << '\n'; // display counter, then
	count++; // increment counter
	goto top;
end:
	; // target is an empty statement
}
 */

/* continueexample.cpp 
#include <iostream>

int main() {
	int input, sum = 0;
	bool done = false;
	while (!done) {
		std::cout << "Enter positive integer (999 units): ";
		std::cin >> input;
		if (input < 0) {
			std::cout << "Negative value " << input << " ignored\n";
			continue; // skip rest of body for this iteration
		}
		if (input != 999) {
			std::cout << "Tallying" << input << '\n';
			sum += input;
		}
		else
			done = (input == 999); // 999 entry exists loop
	}
	std::cout << "sum = " << sum << '\n';
}
*/

/* nocontinueexample.cpp 
#include <iostream>

int main() {
	int input, sum = 0;
	bool done = false;
	while (!done) {
		std::cout << "Enter positive integer (999 units): ";
		std::cin >> input;
		if (input < 0) {
			std::cout << "Negative value " << input << " ignored\n";
		}
		if (input != 999) {
			std::cout << "Tallying" << input << '\n';
			sum += input;
		}
		else
			done = (input == 999); // 999 entry exists loop
	}
	std::cout << "sum = " << sum << '\n';
}
*/

/* findfactors.cpp 
#include <iostream>

int main() {
	// list of the factors of the numbers up to 20
	int n = 1;
	const int MAX = 20;
	while (n <= MAX) {
		int factor = 1;
		std::cout << n << ": ";
		while (factor <= n) {
			if (n % factor == 0) 
				std::cout << factor << " ";
				factor++;
			}
		std::cout << '\n'; // go to next line for next n
		n++;
	}
}
*/

/* startree.cpp 
#include <iostream>

int main() {
	int height; // height of tree
	std::cout << "Enter height of tree: ";
	std::cin >> height; // get height from user
	int row = 0; // first row, from the top, to draw
	while (row < height) { // draw one row for every unit of height
		// print leading spaces
		int count = 0;
		while (count < height - row) {
			std::cout << " ";
			count++;
		}
		// print out stars, twice the current row plus one:
		// 1. number of stars on left side of tree = current row value
		// 2. exaclty one star in the center of tree
		// 3. number of stars on right side of tree = current row value
		count = 0;
		while (count < 2 * row + 1) {
			std::cout << "*";
			count++;
		}
		// move cursor down to next line
		std::cout << '\n';
		// change to the next row
		row++;
	}
}
*/

/* printprimes.cpp 
#include <iostream>

int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	int value = 2; // smalles prime number
	while (value <= max_value) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		// try all possible factors from 2 to value - 1
		int trial_factor = 2;
		while (trial_factor < value) {
			if (value % trial_factor == 0) {
				is_prime = false; // found a factor
				break; // no need to continue; it's NOT prime
			}
			trial_factor++;
		}
		if (is_prime)
			std::cout << value << " "; // display the prime number
		value++; // try the next potential prime number
	}
	std::cout << '\n'; // move cursor down to next line
}
*/

/* printprimeswithoutbreak.cpp
#include <iostream>

int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	int value = 2; // smalles prime number
	while (value <= max_value) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		// try all possible factors from 2 to value - 1
		int trial_factor = 2;
		while (is_prime && trial_factor < value) {
			is_prime = (value % trial_factor != 0);
			trial_factor++;
		}
		if (is_prime)
			std::cout << value << " "; // display the prime number
		value++; // try the next potential prime number
	}
	std::cout << '\n'; // move cursor down to next line
}
*/

/* printprimeswithoutbreakbutrefactored.cpp
#include <iostream>

int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	int value = 2; // smalles prime number
	while (value <= max_value) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		// try all possible factors from 2 to value - 1
		int trial_factor = 2;
		while (is_prime && trial_factor < value)
			is_prime = (value % trial_factor++ != 0);
		if (is_prime)
			std::cout << value << " "; // display the prime number
		value++; // try the next potential prime number
	}
	std::cout << '\n'; // move cursor down to next line
}
*/

/* exercises-practise 6.6.5-6.6.13 
#include <iostream>

int main() {
	// 6.5

	int a = 0;
	while (a < 100) {
		std::cout << "*";
		a++;
	}
	std::cout << '\n';


	// 6.6
	int a = 0;
	while (a < 100)
		std::cout << "*";
	std::cout << '\n';


	// 6.7

	int a = 0;
	while (a > 100) {
		std::cout << "*";
		a++;
	}
	std::cout << '\n';


	// 6.8
	int a = 0;
	while (a < 100) {
		int b = 0;
		while (b < 55) {
			std::cout << "*";
			b++;
		}
		std::cout << '\n';
	}


	// 6.9
	int a = 0;
	while (a < 100) {
		if (a % 5 == 0)
			std::cout << "*";
		a++;
	}
	std::cout << '\n';


	// 6.10
	int a = 0;
	while (a < 100) {
		int b = 0;
		while (b < 40) {
			if ((a + b) % 2 == 0)
				std::cout << "*";
			b++;
		}
		std::cout << '\n';
		a++;
	}


	// 6.11

	int a = 0;
	while (a < 100) {
		int b = 0;
		while (b < 100) {
			int c = 0;
			while (c < 100) {
				std::cout << "*";
				c++;
			}
			b++;
		}
		a++;
	}
	std::cout << '\n';


	// 6.12
	
	int a = 0;
	while (a < 100)
		std::cout << a++;
	std::cout << '\n';
	

	// 6.13
	int a = 0;
	while (a > 100)
		std::cout << a++;
	std::cout << '\n';

}
*/

/* exercise 6.6.14 
#include <iostream>

int main() {
	bool done = false;
	int n = 0, m = 100;
	while (!done && n != m) {
		std::cin >> n;
		if (n < 0)
			break;
		std::cout << "n = " << n << '\n';
	}
}
*/

/* exercise 6.6.15 
#include <iostream>

int main() {
	int x = 100, y;
	while (x > 0) {
		std::cin >> y;
		if (y == 25) {
			x--;
		}
		std::cin >> x;
		std::cout << "x = " << x << '\n';
	}
}
*/

/* exercise 6.6.16 
#include <iostream>

int main() {
	int i = 0;
	while (i <= 10) {
		std::cout << i << '\n';
		i++;
	}
}
*/

/* exercise-practice 6.6.17
#include <iostream>

int main() {
	int a = 0;
	while (a < 100);
	std::cout << a++;
	std::cout << '\n';
}
 */

/* exercise 6.6.18 NOT EXACLTY CODE
#include <iostream>
using namespace std;

int main() {
	int boxsize;
	cout << "enter an integer value for the size of box: ";
	cin >> boxsize;

	for (int i = 0; i < boxsize; i++) {
		for (int j = 0; j < boxsize; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
*/

/* exercise 6.6.19 idk
#include <iostream>
using namespace std;

int main() {
	double max, min, num = 0, first = 1, sum = 0, count = 0;
	while (1) {
		// count = 
	}
}
 */

/* exercise 6.6.20 ffs */

/* exercise 6.6.21 
#include<iostream> 
#include<iomanip> 
using namespace std; 
int main() { 
	int a, i, c; 
	cout << "enter a integer" << endl; 
	cin >> a; 
	for (c = 1; c <= a; c++) { 
		for (i = 1; i <= c; i++) 
			cout << "*"; 
		cout << endl; 
	} 
	for (c = a; c >= 1; c--) { 
		for (i = 1; i <= c; i++) 
			cout << "*"; 
		cout << endl; 
	} 
	system("pause"); 
}
*/


/* exercise 6.6.22 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, i, c, s;
	cout << "enter a integer" << endl;
	cin >> a;
	for (s = a, c = 1; c <= a; s--, c++)
	{
		cout << setw(s);
		for (i = 1; i <= c; i++)
			cout << "*";
		cout << endl;
	}
	for (s = 1, c = 1; c <= a; s++, c++)
	{
		cout << setw(s);
		for (i = a; i >= c; i--)
			cout << "*";
		cout << endl;
	}
	system("pause");
}

/* exercie 6.6.3 
#include <iostream>
using namespace std;

int main() {
	unsigned int x;
	cin >> x;
	while (x <= 16) {
		cout << x << endl;
	}
	x = x + 2;
}
*/

/* exercise 6.6.18 RIGHT CODE
#include<iostream> 
#include<iomanip> 
using namespace std; 
int main() { 
	int x, r, c, product; 
	cout << "enter a table size" << endl; 
	cin >> x; 
	c = 1; 
	while (c <= x) {
		r = 1; 
		while (r <= x) { 
			product = r * c; 
			cout << "*";
			r++; 
		} 
		cout << endl;
		c++;
	} 
	system("pause");
}
 */