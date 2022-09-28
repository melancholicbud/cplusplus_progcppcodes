/* computesquareroot.cpp 
#include <iostream>

int main() {
	double input;

	// get value from the user
	std::cout << "Enter number: ";
	std::cin >> input;
	double diff;
	// compute a provisional square root
	double root = 1.0;

	do { // loop untile the provisional root is close enough to the actual root
		root = (root + input / root) / 2.0;
		std::cout << "root is " << root << '\n';
		// how bad is the approximation?
		diff = root * root - input;
	} while (diff > 0.0001 || diff < -0.0001);

	// report approximate square root
	std::cout << "Square root of " << input << " = " << root << '\n';
}
*/

/* standardsquareroot.cpp 
#include <iostream>
#include <cmath>

int main() {
	double input;

	// get value from the user
	std::cout << "Enter number: ";
	std::cin >> input;

	// compute the square root
	double root = sqrt(input);

	// report result
	std::cout << "Square root of " << input << " = " << root << '\n';
}
*/

/* usingsqrt.cpp 
#include <iostream>
#include <cmath>

int main() {
	double x = 16.0;
	// pass a literal value and display the result
	std::cout << sqrt(16.0) << '\n';
	// pass a variable and display the result
	std::cout << sqrt(x) << '\n';
	// pass an expression
	std::cout << sqrt(2 * x - 5) << '\n';
	// assign result to variable
	double y = sqrt(x);
	// use result in an expression
	y = 2 * sqrt(x + 16) - 4;
	// use result as argument to a function call
	y = sqrt(sqrt(256.0));
	std::cout << y << '\n';
}
*/

/* orbitdist.cpp 
#include <iostream>
#include <cmath>

int main() {
	// location of orbiting point is (x, y)
	double x; // these values change as the
	double y; // satellite moves
	const double PI = 3.14159;
	// location of fixed point is always (100, 0), aka (p_x, p_y). change these as necessary.
	const double p_x = 100;
	const double p_y = 0;

	// radians in 10 degrees
	const double radians = 10 * PI / 180;

	// precompute the cosine and sine of 10 degrees
	const double COS10 = cos(radians);
	const double SIN10 = sin(radians);

	// get starting point from user
	std::cout << "Enter initial satellite coordinates (x,y): ";
	std::cin >> x >> y;

	// compute the inital distance
	double d1 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y));

	// let the satellite orbit 10 degrees
	double x_old = x; // remember x's original value
	x = x * COS10 - y * SIN10; // compute new x value
	// x's value has changed, but y's calculate depends on x's original value, so use x_old instead of x
	y = x_old * SIN10 + y * COS10;

	// compute the new distance
	double d2 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y));

	// print the difference in the distances
	std::cout << "Difference in distances: " << d2 - d1 << '\n';
}
*/

/* moreefficientprimes.cpp 
#include <iostream>
#include <cmath>

int main() {
	int max_value;
	std::cout << "Display primes up to what value? ";
	std::cin >> max_value;
	for (int value = 2; value <= max_value; value++) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		double r = value, root = sqrt(r);
		// try all possible factors from 2 to the square root of value
		for (int trial_factor = 2; is_prime && trial_factor <= root; trial_factor++)
			is_prime = (value % trial_factor != 0);
		if (is_prime)
			std::cout << value << " "; // display the prime number
	}
	std::cout << '\n'; // move cursor down to next line
}
*/

/* maxmin.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int value1, value2;
	cout << "Please, enter two integer values: ";
	cin >> value1 >> value2;
	cout << "max = " << max(value1, value2) << ", min = " << min(value1, value2) << '\n';
}
 */

/* timeit.cpp 
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	char letter;
	cout << "Enter a character: ";
	clock_t seconds = clock(); // record starting time
	std::cin >> letter;
	clock_t other = clock(); // record ending time
	cout << static_cast<double>(other - seconds) / CLOCKS_PER_SEC << " seconds\n";
}
*/

/* measureprimespeed.cpp
#include <iostream>
#include <ctime>
#include <cmath>

// diplay the prime numbers between 2 and 500,000 and time how long it takes

int main() {
	clock_t start_time = clock(), end_time; // record start time
	for (int value = 2; value <= 500000; value++) {
		// see if value is prime
		bool is_prime = true; // provisionally, value is prime
		double r = value, root = sqrt(r);
		// try all possible factors from 2 to n - 1
		for (int trial_factor = 2; is_prime && trial_factor <= root; trial_factor++)
			is_prime = (value % trial_factor != 0);
		if (is_prime)
			std::cout << value << " "; // display the prime number
	}
	std::cout << '\n'; // move cursor down to next line
	end_time = clock();
	// print the elapsed time
	std::cout << "Elapsed time: " << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC
		<< " sec." << '\n';
}
*/

/* touppercase.cpp 
#include <iostream>
#include <cctype>

int main() {
	for (char lower = 'a'; lower <= 'z'; lower++) {
		char upper = static_cast<char>(toupper(lower));
		std::cout << lower << " => " << upper << '\n';
	}
}
*/

/* simplerandom.cpp
how a sequence of 100 pseudorandom numbers can be printed
#include <iostream>
#include <cstdlib>

int main() {
	srand(23);
	for (int i = 0; i < 100; i++) {
		int r = rand();
		std::cout << r << " ";
	}
	std::cout << '\n';
}
 */

/* betterrandom.cpp 
// how a sequence of 100 pseudorandom numbers can be printed
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(static_cast<unsigned>(time(0)));
	for (int i = 0; i < 100; i++) {
		int r = rand();
		std::cout << r << " ";
	}
	std::cout << '\n';
}
*/

/* die.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	// Set the random seed value
	srand(static_cast<unsigned>(time(0)));

	// Roll the die three times
	for (int i = 0; i < 3; i++) {
		// Generate random number in the range 1...6
		int value = rand() % 6 + 1;


		// Show the die
		std::cout << "+-------+\n";
		switch (value) {
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
}
 */

/* 8.7.8 
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
	std::cout << sqrt(4.5) << '\n';
	// std::cout << sqrt(4.5, 3.1) << '\n';
	// std::cout << rand(4) << '\n';
	double d = 16.0;
	std::cout << sqrt(d) << '\n';
	// std::cout << srand() << '\n';
	std::cout << rand() << '\n';
	int i = 16;
	std::cout << sqrt(i) << '\n';
	// std::cout << srand(55) << '\n';
	std::cout << tolower('A') << '\n';
	// std::cout << exp() << '\n';
	// std::cout << sqrt() << '\n';
	std::cout << toupper('E') << '\n';
	std::cout << toupper('e') << '\n';
	// std::cout << toupper("e") << '\n';
	std::cout << exp(4.5) << '\n';
	// std::cout << toupper('h', 5) << '\n';
	std::cout << ispunct('!') << '\n';
	// std::cout << tolower("F") << '\n';
	char ch = 'D';
	std::cout << tolower(ch) << '\n';
	// std::cout << exp(4.5, 3) << '\n';
	std::cout << toupper('7') << '\n';
	// double a = 5, b = 3;
	// std::cout << exp(a, b) << '\n';
	// std::cout << exp(3, 5, 2) << '\n';
	std::cout << tolower(70) << '\n';
	// double a = 5;
	// std::cout << exp(a, 3) << '\n';
	// double a = 5;
	/// std::cout << exp(3, a) << '\n';
}
*/

/* 8.7.9 
#include <iostream>
#include <iomanip>
using namespace std;

// function to return the hypotenuse of the right angled triangle
double findHypotenuse(double side1, double side2) {
	double h = sqrt((side1 * side1) + (side2 * side2));
	return h;
}

int main() {
	int side1, side2;
	cout << "Enter the size of legs: ";
	cin >> side1 >> side2;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << findHypotenuse(side1, side2);
}
*/