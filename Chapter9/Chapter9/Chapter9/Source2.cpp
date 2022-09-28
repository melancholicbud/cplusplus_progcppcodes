/* customsquareroot.cpp
#include <iostream>
#include <iomanip>
#include <cmath>

// compute an approximation of the square root of x
double square_root(double x) {
	double diff;
	// compute a provisional square root
	double root = 1.0;

	do { // loop untile the provisional root is close enough to the actual root
		root = (root + x / root) / 2.0;
		// std::cout << "root is " << rot << '\n';
		// how bad is the approximation?
		diff = root * root - x;
	} while (diff > 0.0001 || diff < -0.0001);
	return root;
}

int main() {
	// compare the two ways of computing the square root
	for (double d = 1.0; d <= 10.0; d += 0.5)
		std::cout << std::setw(7) << square_root(d) << " : " << sqrt(d) << '\n';
}
 */

/* simplefunction.cpp
#include <iostream>

// definition of the prompt function
void prompt() {
	std::cout << "Enter an integer value, please: ";
}

int main() {
	int value1, value2, sum;
	std::cout << "This program adds together two integers.\n";
	prompt(); // call the function
	std::cin >> value1;
	prompt(); // call the function again
	std::cin >> value2;
	sum = value1 + value2;
	std::cout << value1 << " + " << value2 << " = " << sum << '\n';
}
 */

/* countto10.cpp 
#include <iostream>

int main() {
	for (int i = 1; i <= 10; i++) {
		std::cout << i << '\n';
	}
}
*/

/* counttot10func.cpp
#include <iostream>

// count to ten and print each number on its own line
void count_to_10() {
	for (int i = 1; i <= 10; i++)
		std::cout << i << '\n';
}

int main() {
	std::cout << "Going to count to ten...\n";
	count_to_10();
	std::cout << "Going to count to ten again...\n";
	count_to_10();
}
 */

/* countton.cpp
#include <iostream>

// count to ten and print each number on its own line
void count_to_n(int n) {
	for (int i = 1; i <= n; i++)
		std::cout << i << '\n';
}

int main() {
	std::cout << "Going to count to ten...\n";
	count_to_n(10);
	std::cout << "Going to count to ten five...\n";
	count_to_n(5);
}
 */

/* betterprompt.cpp
#include <iostream>
// definition of the prompt function
int prompt() {
	int result;
	std::cout << "Enter an integer value, please: ";
	std::cin >> result;
	return result;
}

int main() {
	int value1, value2, sum;
	std::cout << "This program adds together two integers.\n";
	value1 = prompt();; // call the function
	value2 = prompt(); // call the function again
	std::cin >> value2;
	sum = value1 + value2;
	std::cout << value1 << " + " << value2 << " = " << sum << '\n';
}
 */

/* evenbetterprompt.cpp 
#include <iostream>
// definition of the prompt function
int prompt(int n) {
	int result;
	std::cout << "Enter an integer value #" << n << ": ";
	std::cin >> result;
	return result;
}

int main() {
	int value1, value2, sum;
	std::cout << "This program adds together two integers.\n";
	value1 = prompt(1); // call the function
	value2 = prompt(2); // call the function again
	sum = value1 + value2;
	std::cout << value1 << " + " << value2 << " = " << sum << '\n';
}
*/

/* gcdprog.cpp 
#include <iostream>

int main() {
	// prompt user for input
	int num1, num2;
	std::cout << "Enter two integers, please: ";
	std::cin >> num1 >> num2;

	// determine the smaller of num1 and num2
	int min = (num1 < num2) ? num1 : num2;
	
	// 1 is definitely a common factor to all ints
	int largestFactor = 1;
	for (int i = 2; i <= min; i++)
		if (num1 % i == 0 && num2 % i == 0)
			largestFactor = i; // found larger factor
	std::cout << largestFactor << '\n';
}
*/

/* passbyvalue.cpp
#include <iostream>
using namespace std;
// increment(x) illustrates pass by value protocol
void increment(int x) {
	cout << "Beginning execution of increment, x = " << x << '\n';
	x++; // increment x
	cout << "Ending execution of increment, x = " << x << '\n';
}

int main() {
	int x = 5;
	cout << "Before increment, x = " << x << '\n';
	increment(x);
	cout << "After increment, x = " << x << '\n';
}
 */

/* primefunc.cpp 
#include <iostream>
#include <cmath>

// is_prime(n) determines the primality of a given value n an integer to test for primality
// return true if n is prime; otherwise, return false
bool is_prime(int n) {
	bool result = true; // provisionally, n is prime
	double r = n, root = sqrt(r);
	// try all possible factors from 2 to the square root of n
	for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
		result = (n % trial_factor != 0);
	return result;
}

// main tests for primality each integer from 2 up to a value provided by the user.
// if an integer is prime, it prints it; otherwise, the number is not printed.
int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	for (int value = 2; value <= max_value; value++)
		if (is_prime(value)) // see if value is prime
			std::cout << value << " "; // display the prime number
	std::cout << '\n';
}
*/

/* calculator.cpp
#include <iostream>
#include <cmath>
using namespace std;
// help_screen displays information about how the program works
// accepts no parameters
// returns nothing
void help_screen() {
	cout << "Add: Adds two numbers\n";
	cout << "	  Example: a 2.5 8.0\n";
	cout << "Substract: Substracts two numbers\n";
	cout << "			Example: s 10.5 8.0\n";
	cout << "Print: Displays the result of the latest operation\n";
	cout << "		Example: p\n";
	cout << "Help: Displays this help screen\n";
	cout << "	   Example: h\n";
	cout << "Quit: Exists the program, suprise\n";
	cout << "      Example: q\n";
}

// menu: display a menu
// accepts no parameters
// returns the character entered by the user.
char menu() {
	// display a mnu
	cout << "=== A)dd S)ubstract P)rint H)elp Q)uit ===\n";
	// return the char entered by user
	char ch;
	cin >> ch;
	return ch;
}

// main: runs a command loop that allows users to perform simbple arithmetic
int main() {
	double result = 0.0, arg1, arg2;
	bool done = false; // initially not done
	do {
		switch (menu()) {
		case 'A': // addition
		case 'a':
			cin >> arg1 >> arg2;
			result = arg1 + arg2;
			cout << result << '\n';
			break;
		case 'S': // substraction
		case 's':
			cin >> arg1 >> arg2;
			result = arg1 - arg2;
			// fall through, so it prints the result
		case 'P': // print result
		case 'p':
			cout << result << '\n';
			break;
		case 'H': // display help screen
		case 'h':
			help_screen();
			break;
		case 'Q': // quit the program
		case 'q':
			done = true;
			break;
		}
	} while (!done);
}
 */

/* betterinputfunc.cpp 
#include <iostream>
using namespace std;
// get_int_range(first, last) forces the user to enter an integer within a specified range
// fist is either a minimum or maximum acceptable value
// last is the corresponding other end of the range,
// either a maximum or minimum * value returns an acceptable value from the user
int get_int_rage(int first, int last) {
	// if the larger number is provided first, switch the parameters
	if (first > last) {
		int temp = first;
		first = last;
		last = temp;
	}
	// insist on value in the range first...last
	cout << "Please, enter a value in the range " << first << "..." << last << ": ";
	int in_value; // user input value
	bool bad_entry;
	do {
		cin >> in_value;
		bad_entry = (in_value < first || in_value > last);
		if (bad_entry) {
			cout << in_value << " isn't in the range " << first << "..." << last << '\n';
			cout << "Please try again: ";
		}
	} while (bad_entry);
	// in_value at this point is guaranteed to be within range
	return in_value;
}

// main: tests the ge_int_ragne function
int main() {
	cout << get_int_rage(10, 20) << '\n';
	cout << get_int_rage(20, 10) << '\n';
	cout << get_int_rage(5, 5) << '\n';
	cout << get_int_rage(-100, 100) << '\n';
}
*/

/* betterdie.cpp 
#include <iostream>
#include <cstdlib>
#include <ctime>

// initialize_die
// Initializes the randomness of the die
void initialize_die() {
	// Set the random seed value
	srand(static_cast<unsigned>(time(0)));
}

//show_die(spots)
 //     Draws a picture of a die with number of spots
 //    indicated
 //    spots is the number of spots on the top face

void show_die(int spots) {
	std::cout << "+-------+\n";
	switch (spots) {
	case 1:
		std::cout << "|       |\n";
		std::cout << "|   *   |\n";
		std::cout << "|       |\n";
		break;
	case 2:
		std::cout << "| *     |\n";
		std::cout << "|       |\n";
		std::cout << "|     * |\n";
		break;
	case 3:
		std::cout << "|     * |\n";
		std::cout << "|   *   |\n";
		std::cout << "| *     |\n";
		break;
	case 4:
		std::cout << "| *   * |\n";
		std::cout << "|       |\n";
		std::cout << "| *   * |\n";
		break;
	case 5:
		std::cout << "| *   * |\n";
		std::cout << "|   *   |\n";
		std::cout << "| *   * |\n";
		break;
	case 6:
		std::cout << "| * * * |\n";
		std::cout << "|       |\n";
		std::cout << "| * * * |\n";
		break;
	default:
		std::cout << " ***  Error: illegal die value ***\n";
		break;
	}
	std::cout << "+-------+\n";
}

//  roll
// Returns a pseudorandom number in the range 1...6
int roll() {
	return rand() % 6 + 1;
}

//main
// Simulates the roll of a die three times
int main() {

	// Initialize the die
	initialize_die();

	// Roll the die three times
	for (int i = 0; i < 3; i++)
		show_die(roll());
}
*/

/* treefunc.cpp 
#include <iostream>

// tree(height): draws a tree of a given height
// height is the height of the displayed tree
void tree(int height) {
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
		// 2. exactly one star in the center of tree
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

// main: allows users to draw trees of various heights
int main() {
	int height; // height of tree
	std::cout << "Enter height of tree: ";
	std::cin >> height; // get height from user
	tree(height);
}
*/

/* simplefloataddition.cpp 
#include <iostream>

int main() {
	double x = 0.9;
	x += 0.1;
	if (x == 1.0)
		std::cout << "OK\n";
	else
		std::cout << "NOT OK\n";
}
*/

/* badfloatcheck.cpp
#include <iostream>

int main() {
	// count to ten by tenths
	for (double i = 0.0; i != 1.0; i += 0.1)
		std::cout << "i = " << i << '\n';
}
 */

/* floatequals.cpp
#include <iostream>
#include <cmath>

// equals(a, b, tolerance): returns true if a = b or |a-b|<tolerance.
// if a and b differ by only a small amount (specified by tolerance), a and b are considered 'equal'.
// useful to account for floating-point round-off error.
// the == operator is checked first since some special floating-point values such as HUGE_VAL require an exact equality check.
bool equals(double a, double b, double tolerance) {
	return a == b || fabs(a - b) < tolerance;
}

int main() {
	for (double i = 0.0; !equals(i, 1.0, 0.0001); i += 0.1)
		std::cout << "i = " << i << '\n';
}
 */

/* timestablefunction.cpp
#include <iostream>
#include <iomanip>

// print the column labels for an n x n multiplication table.
void col_numbers(int n) {
	std::cout << "			";
	for (int column = 1; column <= n; column++)
		std::cout << std::setw(4) << column; // print heading for this column.
	std::cout << '\n';
}

// print the table's horizontal line at the top of the table beneath the column labels.
void col_line(int n) {
	std::cout << "			+";
	for (int column = 1; column <= n; column++)
		std::cout << "------"; // print separator for this row.
	std::cout << '\n';
}

// print the title of each column across the top of the table including the line separator.
void col_header(int n) {
	// print column titles
	col_numbers(n);

	// print line separator
	col_line(n);
}

// print the title that appears before each row of the table's body
void row_header(int n) {
	std::cout << std::setw(8) << n << "   |"; // print row label.
}

// print the line of text for row n
// this includes the row number an the contents of each row
void print_row(int row, int columns) {
	row_header(row);
	for (int col = 1; col <= columns; col++)
		std::cout << std::setw(4) << row * col; // display product
	std::cout << '\n'; // move cursor to next row
}

// print the body of the n x n multiplication table
void print_contents(int n) {
	for (int current_row = 1; current_row <= n; current_row++)
		print_row(current_row, n);
}

// print a multiplication table of size n x n.
void timestable(int n) {
	// first, print column heading
	col_header(n);

	// print tanle contents
	print_contents(n);
}

// forces the user to enter an integer within a specified range first is either a minimum or maximum
// acceptable value last is the corresponding other end of the range, either a maximum or minimum value.
// returns an acceptable value from the user.
int get_int_range(int first, int last) {
	// if the larger number is provided first, switch the parameters
	if (first > last) {
		int temp = first;
		first = last;
		last = temp;
	}
	// insist on values in the range first...last
	std::cout << "Please enter a value in the range " << first << "..." << last << ": ";
	int in_value; // user input value
	bool bad_entry;
	do {
		std::cin >> in_value;
		bad_entry = (in_value < first || in_value > last);
		if (bad_entry) {
			std::cout << in_value << " isn't in the range " << first << "..." << last << '\n';
			std::cout << "Please, try again: ";
		}
	} while (bad_entry);
	// in_value at this point is guaranteed to be within range
	return in_value;
}

int main() {
	// get table size from user; allow values in the range 1...18
	int size = get_int_range(1, 18);

	// print a size x size multiplication table
	timestable(size);
}
 */

/* organization1.cpp 
// Function definition precedes main where the function is called
#include <iostream>

int twice(int n) {
	return 2 * n;
}

int main() {
	std::cout << twice(5) << '\n';
}
*/

/* organization2.cpp
// Function declaration precedes main; function definition follows main
#include <iostream>

int twice(int); // declare function named twice

int main() {
	std::cout << twice(5) << '\n';
}

int twice(int n) { // define function named twice
	return 2 * n;
}
 */

/* organization3.cpp 
// Function declaration local to main; function definition follows main
#include <iostream>



int main() {
	int twice(int); // twice function available anywhere in main
	std::cout << twice(5) << '\n';
}

int twice(int n) { // define function named twice
	return 2 * n;
}
*/

/* localfuncdef1.cpp 
#include <iostream>
// global declarations available to all functions that follow the declarations
int two_times(int);
int three_times(int);

int main() {
	std::cout << two_times(5) << '\n';
	std::cout << three_times(5) << '\n';
}

int three_times(int n) {
	return two_times(n) + n; // 3n = 2n + n
}

int two_times(int n) {
	return 2 * n;
}
*/

/* localfuncdef2.cpp 
// local declaration in main 
#include <iostream>

int main() {
	// these function declarations are local to main
	int two_times(int);
	int three_times(int);
	std::cout << two_times(5) << '\n';
	std::cout << three_times(5) << '\n';
}

// the two_times function is not declared for three_timesfunction!!
int three_times(int n) {
	return two_times(n) + n; // Compiler error
}

int two_times(int n) {
	return 2 * n;
}
*/

/* squarerootfunction.cpp
#include <iostream>

double square_root(double x) {
	double diff;
	// compute a provisional square root
	double root = 1.0;

	do { // loop until the provisional root is close enough to the actual root
		root = (root + x / root) / 2.0;
		std::cout << "root is " << root << '\n';
		// how bad is the approximation?
		diff = root * root - x;
	} while (diff > 0.0001 || diff < -0.0001);
	return root;
}

int main() {
	double input;
	// get value from the user
	std::cout << "Enter number: ";
	std::cin >> input;
	// report square root
	std::cout << "Square root of " << input << " = " << square_root(input) << '\n';
}
 */

/* squarerootcomparison.cpp 
#include <iostream>
#include <cmath>

// consider two floating-point numbers equal when the difference between them is very small
bool equals(double a, double b, double tolerance) {
	return a == b || fabs(a - b) < tolerance;
}

double square_root(double x) {
	// compute a provisional square root
	double root = 1.0;
	do { // loop until the provisional root is close enough to the actual root
		root = (root + x / root) / 2.0;
	} while (!equals(root * root, x, 0.0001));
	return root;
}

int main() {
	for (double d = 0.0; d < 100000.0; d += 0.0001) {
		if (!equals(square_root(d), sqrt(d), 0.001))
			std::cout << d << ": Expected " << sqrt(d) << ", but computed " << square_root(d) << '\n';
	}
}
*/

/* 9.8.1 
#include <iostream>
int proc(int x) {
	return x + 2;
}
int proc(int n) {
	return 2 * n + 1;
}
int main() {
	int x = proc(5);
}
*/

/* 9.8.2
#include <iostream>
int proc(int x) {
	return x + 2;
}
int main() {
	int x = proc(5),
		y = proc(4);
}
*/

/* 9.8.3 
#include <iostream>
void proc(int x) {
	std::cout << x + 2 << '\n';
}
int main() {
	int x = proc(5);
}
*/

/* 9.8.4
#include <iostream>
void proc(int x) {
	std::cout << x + 2 << '\n';
}
int main() {
	proc(5);
}
*/

/* 9.8.5 
#include <iostream>
int proc(int x, int y) {
	return 2 * x + y * y;
}
int main() {
	std::cout << proc(5, 4) << '\n';
}
*/

/* 9.8.6 
#include <iostream>
int proc(int x, int y) {
	return 2 * x + y * y;
}
int main() {
	std::cout << proc(5) << '\n';
}
*/

/* 9.8.7 
#include <iostream>
int proc(int x) {
	return 2 * x * x;
}
int main() {
	std::cout << proc(5, 4) << '\n';
}
*/

/* 9.8.8 
#include <iostream>
proc(int x) {
	std::cout << 2 * x * x << '\n';
}
int main() {
	proc(5);
}
*/

/* 9.8.9 
#include <iostream>
void proc(int x) {
	x = 2 * x * x;
}
int main() {
	int num = 10;
	proc(num);
	std::cout << num << '\n';
}
*/

/* 9.8.10 
#include <iostream>
int proc(int x) {
	return 2 * x * x;
}
int main() {
	int x = 10;
	std::cout << proc(x) << '\n';
}
*/

/* 9.8.11
#include <iostream>
int proc(int x) {
	return 2 * x * x;
}
int main() {
	int y = 10;
	std::cout << proc(y) << '\n';
}
 */
/* 9.8.16 */
#include <iostream>
int fun1(int n) {
	int result = 0;
	while (n) {
		result += n;
		n--;
	}
	return result;
}
void fun2(int stars) {
	for (int i = 0; i < stars; i++)
		std::cout << "*";
	std::cout << '\n';
}
double fun3(double x, double y) {
	return 2 * x * x + 3 * y;
}
bool fun4(char ch) {
	return ch >= 'A' && ch <= 'Z';
}
bool fun5(int a, int b, int c) {
	return (a <= b) ? (b <= c) : false;
}
int fun6() {
	return rand() % 2;
}

int main() {
	std::cout << fun1(5) << '\n'; // 15
	// std::cout << fun1() << '\n';
	// std::cout << fun1(5, 2) << '\n';
	// std::cout << fun2(5) << '\n';
	fun2(5); // *****
	std::cout << fun3(5, 2) << '\n'; // 56
	std::cout << fun3(5.0, 2.0) << '\n'; // 56
	std::cout << fun3('A', 'B') << '\n'; // 8648
	// std::cout << fun3(5.0) << '\n';
	// std::cout << fun3(5.0, 0.5, 1.2) << '\n';
	std::cout << fun4('T') << '\n'; // 1
	std::cout << fun4('t') << '\n'; // 0
	std::cout << fun4(5000) << '\n'; // 0
	fun4(5000); // 1
	std::cout << fun5(2, 4, 6) << '\n'; // 0
	std::cout << fun5(4, 2, 6) << '\n'; // 1
	std::cout << fun5(2, 2, 6) << '\n'; // nothing?
	// std::cout << fun5(2, 6) << '\n';
	if (fun5(2, 2, 6))
		std::cout << "Yes\n";
	else
		std::cout << "No\n"; // YES
	std::cout << fun6() << '\n'; // 1
	// std::cout << fun6(4) << '\n';
	std::cout << fun3(fun1(3), 3) << '\n'; // 81
	std::cout << fun3(3, fun1(3)) << '\n'; // 36
	std::cout << fun1(fun1(fun1(3))) << '\n'; // 231
	// std::cout << fun6(fun6()) << '\n';
}