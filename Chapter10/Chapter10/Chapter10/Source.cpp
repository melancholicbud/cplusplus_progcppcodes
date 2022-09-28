/* globalcalculator.cpp 
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

// global variables used by several functions
double result = 0.0, arg1, arg2;

// get_input: assigns the globals arg1 and arg2 from user keyboard input
void get_input() {
	cin >> arg1 >> arg2;
}

// report: reports the value of the global result
void report() {
	cout << result << '\n';
}

// add: assign the sum of the globals arg1 and arg2 to the global variable result
void add() {
	result = arg1 + arg2;
}

// substract: assigns the difference of the globals arg1 and arg2 to the global variable result
void substract() {
	result = arg1 - arg2;
}

// main: runs a command loop that allows users to perform simbple arithmetic
int main() {
	bool done = false; // initially not done
	do {
		switch (menu()) {
		case 'A': // addition
		case 'a':
			get_input();
			add();
			report();
			break;
		case 'S': // substraction
		case 's':
			get_input();
			substract();
			report();
			// fall through, so it prints the result
		case 'P': // print result
		case 'p':
			report();
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

/* digitaltimer.cpp 
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// some conversions from seconds
const clock_t SEC_PER_MIN = 60,// 60 sec = 1 min
SEC_PER_HOUR = 60 * SEC_PER_MIN, // 60 min = 1 hr
SEC_PER_DAY = 24 * SEC_PER_HOUR; // 24 hr = 24 hr

// print_time: displays the time in hr:min:sec format
// seconds is the number of seconds to display

void print_time(clock_t seconds) {
	clock_t hours = 0, minutes = 0;

	// prepare to display time
	cout << '\n';
	cout << "		";

	// compute and display hours
	hours = seconds / SEC_PER_HOUR;
	cout << setw(2) << setfill('0') << hours << ":";

	// remove the hours from seconds
	seconds %= SEC_PER_HOUR;

	// compute and display minutes
	minutes = seconds / SEC_PER_MIN;
	cout << setw(2) << setfill('0') << minutes << ":";
	// remove the minutes from seconds
	seconds %= SEC_PER_MIN;

	// compute and display seconds
	cout << setw(2) << setfill('0') << seconds << '\n';
}

int main() {
	clock_t start = clock(); // record starting time
	clock_t elapsed = (clock() - start) / CLOCKS_PER_SEC, // elapsed time in sec
		previousElapsed = elapsed;
	// counts up to 24 hours (1 day), then stops
	while (elapsed < SEC_PER_DAY) {
		// update the display only every seconds
		if (elapsed - previousElapsed >= 1) {
			// remember when we last updated the display
			previousElapsed = elapsed;
			print_time(elapsed);
		}
		// update elapsed time
		elapsed = (clock() - start) / CLOCKS_PER_SEC;
	}
}
*/

/* counter.cpp 
#include <iostream>
#include <iomanip>

// count: keeps track on a count. return the current count.

int count() {
	// cnt's value is retained between calls because it is declared static
	static int cnt = 0;
	return ++cnt; // increment and return current count
}

int main() {
	// count to ten
	for (int i = 0; i < 10; i++)
		std::cout << count() << ' ';
	std::cout << '\n';
}
*/

/* promptwithstatic.cpp 
#include <iostream>

// prompt requests an integer from the user
// and keeps track of the cumulative number of entries.
// returns the value entered by the user.
int prompt() {
	static int count = 0;
	int value;
	std::cout << "Please enter integer#" << ++count << ": ";
	std::cin >> value;
	return value;
}

int main() {
	int value1, value2, sum;
	std::cout << "This program adds together two integers.\n";
	value1 = prompt(); // call the function
	value2 = prompt(); // call the function again
	sum = value1 + value2;
	std::cout << value1 << " + " << value2 << " = " << sum << "\n";
}
*/

/* countdown.cpp
#include <iostream>
// prints a countdown from n to zero. the default starting value is 10
void countdown(int n = 10) {
	while (n >= 0) // countdown from n to zero
		std::cout << n-- << '\n';
}

int main() {
	countdown(5);
	std::cout << "----------" << '\n';
	countdown();
}
 */

/* factorialtest.cpp
#include <iostream>
// factorial(n): computes n!
// returns the factorial of n.
int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	// try out the factorial function
	std::cout << "0! = " << factorial(0) << '\n';
	std::cout << "1! = " << factorial(1) << '\n';
	std::cout << "6! = " << factorial(6) << '\n';
	std::cout << "10! = " << factorial(10) << '\n';
}
 */

/* nonrecursfact.cpp 
#include <iostream>
// factorial(n): computes n!
// returns the factorial of n.
int factorial(int n) {
	int product = 1;
	for (int i = n; i > 0; i--)
		product *= i;
	return product;
}

int main() {
	// try out the factorial function
	std::cout << "0! = " << factorial(0) << '\n';
	std::cout << "1! = " << factorial(1) << '\n';
	std::cout << "6! = " << factorial(6) << '\n';
	std::cout << "10! = " << factorial(10) << '\n';
}
*/

/* gcd.cpp
#include <iostream>
// gcd(m,n): uses Euclid's method to compute the greatest common divisor
// (also called greatest common factor) of m and n.
// returns the GCD of m and n.
int gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

int iterative_gcd(int num1, int num2) {
	// determine the smaller of num1 and num2
	int min = (num1 < num2) ? num1 : num2;
	// 1 is definitely a common factor to all ints
	int largestFactor = 1;
	for (int i = 1; i <= min; i++)
		if (num1 % i == 0 && num2 % i == 0)
			largestFactor = i; // found larger factor
	return largestFactor;
}

int main() {
	// try out the gcd functions
	const int BEGIN = 1000000000,
		END = 1000000003;
	for (int num1 = BEGIN; num1 <= END; num1++)
		for (int num2 = BEGIN; num2 <= END; num2++)
			std::cout << "iterative_gcd(" << num1 << ", " << num2 << ") = "
			<< iterative_gcd(num1, num2) << '\n';
	for (int num1 = BEGIN; num1 <= END; num1++)
		for (int num2 = BEGIN; num2 <= END; num2++)
			std::cout << "gcd(" << num1 << ", " << num2 << ") = "
			<< gcd(num1, num2) << '\n';
}
 */

/* histobar.cpp 
#include <iostream>
// draws a bar n segments long using iteration
void segments1(int n) {
	while (n > 0) {
		std::cout << "*";
		n--;
	}
	std::cout << '\n';
}

// draws a bar n segments long using recursion
void segments2(int n) {
	if (n > 0) {
		std::cout << "*";
		segments2(n - 1);
	}
	else
		std::cout << '\n';
}

int main() {
	segments1(3);
	segments1(10);
	segments1(0);
	segments1(5);
	std::cout << "-------------\n";
	segments2(3);
	segments2(10);
	segments2(0);
	segments2(5);
}
*/

/* prime.cpp 
#include <cmath> // neede for sqrt
#include "prime.h" // is_prime prototype

// is_prime(n): determines the primality of a given value n an integer to test for primality
// returns true if n is prime; otherwise, returns false
bool is_prime(int n) {
	bool result = true; // provisionally, n is prime
	double r = n, root = sqrt(r);
	// try all possible factors from 2 to the square root of n
	for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
		result = (n % trial_factor != 0);
	return result;
}

// primetester.cpp
#include <iostream>
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

/* timermodule.cpp
// timermodule.h implements the program timer module
#include <ctime>
#include "timermodule.h"

// global variable that keeps track of the elapsed time.
double elapsed;

// global variable that counts the number of the clock ticks since the most recent start time.
clock_t start_time;

// global flag that indicates whether or not the timer is running.
bool running;

// reset the time so it reads 0 seconds
void reset_timer() {
	elapsed = 0.0;
	running = false; // ensure timer isn't running
}

// start the timer. the timer will begin measuring elapsed time.
// starting the timer if it already is running has no effect
void start_timer() {
	// starting an already running timer has no effect
	if (!running) {
		running = true; // note that the timer is running
		start_time = clock(); // record start time
	}
}

// stop the timer. blah blah blah
// stopping the time if it's not currently running has no effect.
void stop_timer() {
	// stopping a non-running timer has no effect
	if (running) {
		clock_t stop_time = clock(); // record stop time
		running = false; // stop the clock
		// add to the elapsed time how long it has been since we last started the timer
		elapsed += static_cast<double>((stop_time - start_time)) / CLOCKS_PER_SEC;
	}
}

// return the cummulative time (in seconds) kept by the timer since it last was reset
double elapsed_time() {
	if (running) { // compute time since last reset
		clock_t current_time = clock(); // record current time
		return elapsed + static_cast<double>((current_time - start_time)) / CLOCKS_PER_SEC;
	}
	else // timer stopped; elapsed already computed in stop_timer
		return elapsed;
}

// bettertimeit.cpp
#include <iostream>

int main() {
	char letter;
	std::cout << "Enter a character: ";
	start_timer();
	std::cin >> letter;
	stop_timer(); 
	std::cout << elapsed_time() << " seconds" << '\n';
}
 */

/* referencevar.cpp
#include <iostream>

int main() {
	int x = 5;
	int y = x;
	int& r = x;
	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "r = " << r << '\n';
	std::cout << "Assign 7 to x\n";
	x = 7;
	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "r = " << r << '\n';
	std::cout << "Assign 8 to y\n";
	y = 8;
	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "r = " << r << '\n';
	std::cout << "Assign 2 to r\n";
	r = 2;
	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "r = " << r << '\n';
}
 */

/* faultyswap.cpp 
#include <iostream>

// swap(a,b): attempts to interchange the values of its parameters a and b.
// that it does, but unfourtunately it only affects the local copies.
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// main: attempts to interchange the values of two variables using a faulty swap function
int main() {
	int var1 = 5, var2 = 19;
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
	swap(var1, var2);
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
}
*/

/* swapwithpointers.cpp 
#include <iostream>

// swap(a,b): attempts to interchange the values of its parameters a and b.
// that it does, but unfourtunately it only affects the local copies.
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// main: attempts to interchange the values of two variables using a faulty swap function
int main() {
	int var1 = 5, var2 = 19;
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
	swap(&var1, &var2);
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
}
*/

/* swapwithreferences.cpp 
#include <iostream>

// swap(a,b): attempts to interchange the values of its parameters a and b.
// that it does, but unfourtunately it only affects the local copies.
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// main: attempts to interchange the values of two variables using a faulty swap function
int main() {
	int var1 = 5, var2 = 19;
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
	swap(var1, var2);
	std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
}
*/

/* arithmeticeval.cpp
#include <iostream>

int add(int x, int y) {
	return x + y;
}

int multiply(int x, int y) {
	return x * y;
}

int evaluate(int(*f)(int, int), int x, int y) {
	return f(x, y);
}

int main() {
	std::cout << add(2, 3) << '\n';
	std::cout << multiply(2, 3) << '\n';
	std::cout << evaluate(&add, 2, 3) << '\n';
	std::cout << evaluate(&multiply, 2, 3) << '\n';
}
 */

/* 10.11.1 
#include <iostream>
int sum1(int n) {
	int s = 0;
	while (n > 0) {
		s++;
		n--;
	}
	return s;
}
int input;
int sum2() {
	int s = 0;
	while (input > 0) {
		s++;
		input--;
	}
	return s;
}
int sum3() {
	int s = 0;
	for (int i = input; i > 0; i--)
		s++;
	return s;
}
int main() {
	input = 5;
	std::cout << sum2() << '\n';
	std::cout << sum1(input) << '\n';
	std::cout << sum3() << '\n';

}
*/

/* 10.11.2 
#include <iostream>
int next_int1() {
	static int cnt = 0;
	cnt++;
	return cnt;
}
int next_int2() {
	int cnt = 0;
	cnt++;
	return cnt;
}
int global_count = 0;
int next_int3() {
	global_count++;
	return global_count;
}
int main() {
	for (int i = 0; i < 5; i++)
		std::cout << next_int1() << " "
		<< next_int2() << " "
		<< next_int3() << '\n';
}
*/

/* 10.11.3 
#include <iostream>
#include "сounter.h"
// counter.cpp
static int count;
int read() {
	return count;
}
int increment() {
	if (count < 5)
		count++;
	return count;
}
int decrement() {
	if (count > 0)
		count--;
	return count;
}

// main.cpp
int main() {
	increment();
	decrement();
	std::cout << read() << '\n';
}
*/

/* 10.11.4 
#include <iostream>
int max(int n) {
	return n;
}
int max(int m, int n) {
	return (m >= n) ? m : n;
}
int max(int m, int n, int r) {
	int x = m;
	if (n > x)
		x = n;
	if (r > x)
		x = r;
	return x;
}
int main() {
	std::cout << max(4) << '\n';
	std::cout << max(4, 5) << '\n';
	std::cout << max(5, 4) << '\n';
	std::cout << max(1, 2, 3) << '\n';
	std::cout << max(2, 1, 3) << '\n';
	std::cout << max(2, 1, 2) << '\n';
}
*/

/* 10.11.5
#include <iostream>
using namespace std;

int proc(int n) {
	if (n < 1)
		return 1;
	else
		return proc(n / 2) + proc(n - 1);
}
int main() {
	cout << proc(0) << '\n';
	cout << proc(1) << '\n';
	cout << proc(2) << '\n';
	cout << proc(3) << '\n';
	cout << proc(5) << '\n';
	cout << proc(10) << '\n';
	cout << proc(-10) << '\n';
}
 */

/* 10.11.8 
#include <iostream>

int main() {
	int x = 5, y = 3, * p = &x, * q = &y;
	std::cout << "x = " << x << ", y = " << y << '\n';
	x = y;
	std::cout << "x = " << x << ", y = " << y << '\n';
	x = 7;
	std::cout << "x = " << x << ", y = " << y << '\n';
	*p = 10;
	std::cout << "x = " << x << ", y = " << y << '\n';
	p = q;
	*p = 20;
	std::cout << "x = " << x << ", y = " << y << '\n';
}
*/

/* 10.11.9 */
#include <iostream>
int x, y, * p, * q;

int main() {
	x = 5;
	y = 10;
	p = q = &x;
	*p = *q = y;
	std::cout << x << ' ' << y << '\n';
}

/* 10.11.1 */
/* 10.11.1 */
/* 10.11.1 */
