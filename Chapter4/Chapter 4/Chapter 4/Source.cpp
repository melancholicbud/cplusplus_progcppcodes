/* adder.cpp 
#include <iostream>

int main() {
	int value1, value2, sum;
	std::cout << "Please enter two integer values: ";
	std::cin >> value1 >> value2;
	sum = value1 + value2;
	std::cout << value1 << " + " << value2 << " = " << sum << '\n';
	// std::cout << -(4 - 5) << '\n';
}
*/

/* badnarrow.cpp 
#include <iostream>

int main() {
	double d = 2200000000.0;
	int i = d;
	std::cout << "d = " << d << ", i = " << i << '\n';
}
*/

/* enumcast.cpp
#include <iostream>

int main() {
	enum class Color { Red, Orange, Yellow, Green, Blue, Violet};
	std::cout << static_cast<int>(Color::Orange) << " "
		<< static_cast<int>(Color::Green) << '\n';
}
 */

/* reformattedvariable.cpp
#include <iostream>
int
main
(
)
{
	int
		x
		;
	x
		=
		10
		;
	std
		::
		cout
		<<
		x
		<<
		'\n'
		;
}
 */

/* reformattedvariable2.cpp 
#include<iostream>
int main() { int x;x=10;std::cout<<x<<'\n'; }
*/

/* dividedanger.cpp 
#include <iostream>

int main() {
	int dividend, divisor;

	// Get two integers from the user
	std::cout << "Please, enter two integers to divide: ";
	std::cin >> dividend >> divisor;
	// Divide them and report the result
	std::cout << dividend << "/" << divisor << " = "
		<< dividend / divisor << '\n';
}
*/

/* uninitialized.cpp 
#include <iostream>

int main() {
	int n;
	std::cout << n << '\n';
}
*/

/* narrow.cpp 
#include <iostream>

int main() {
	int n;
	double d = 1.6;
	n = d;
	std::cout << n << '\n';
}
*/

/* assignfloat.cpp 
#include <iostream>

int main() {
	float number;
	number = 10.0; // OK, double literal assignable to a float
	std::cout << "number = " << number << '\n';
}
*/

/* tempconv.cpp 
#include <iostream>

int main() {
	double degreesF, degreesC;
	// prompt user for temperature to convert
	std::cout << "Enter the temperature in degrees F: ";
	// read in the user's input
	std::cin >> degreesF;
	// perform the conversion
	degreesC = 5.0 / 9 * (degreesF - 32);
	// report the result
	std::cout << degreesC << '\n';
}
*/

/* timeconv.cpp
#include <iostream>

int main() {
	int hours, minutes, seconds;
	std::cout << "Please, enter the number of seconds: ";
	std::cin >> seconds;
	//first, compute the number of hours in the
    // given number of seconds
	hours = seconds / 3600; // 3600 seconds = 1 hour
	// Compute the remaining seconds after the
	// hours are accounted for
	seconds = seconds % 3600;
	// next, compute the number of minutes in the
	// remaining number of seconds
	minutes = seconds / 60; // 60 seconds = 1 minute
	// Compute the remaining seconds after the minutes
	// are accounter for
	seconds = seconds & 60;
	// report the results
	std::cout << hours << " hr, " << minutes << " min, " << seconds << " sec\n";
}
*/

/* enhancedtimeconv.cpp 
#include <iostream>

int main() {
	int hours, minutes, seconds;
	std::cout << "Please, enter the number of seconds: ";
	std::cin >> seconds;
	//first, compute the number of hours in the
	// given number of seconds
	hours = seconds / 3600; // 3600 seconds = 1 hour
	// Compute the remaining seconds after the
	// hours are accounted for
	seconds = seconds % 3600;
	// next, compute the number of minutes in the
	// remaining number of seconds
	minutes = seconds / 60; // 60 seconds = 1 minute
	// Compute the remaining seconds after the minutes
	// are accounter for
	seconds = seconds & 60;
	// report the results
	std::cout << hours << ":";
	// Compute tens digit of minutes
	int tens = minutes / 10;
	std::cout << tens;
	// Compute ones digit of minutes
	int ones = minutes % 10;
	std::cout << ones << ":";
	// Compute tens digit of seconds
	tens = seconds / 10;
	std::cout << tens;
	// Compute ones digit of seconds
	ones = seconds % 10;
	std::cout << ones << '\n';
}
*/

/* unsignedoverflow.cpp 
#include <iostream>

int main() {
	unsigned x = 4294967293; // almost the largest possible unsigned value
	std::cout << x << " + 1 = " << x + 1 << '\n';
	std::cout << x << " + 2 = " << x + 2 << '\n';
	std::cout << x << " + 3 = " << x + 3 << '\n';
}
*/

/* integeroverflow.cpp
#include <iostream>

int main() {
	int x = 2147483645; // almost the largest possible int value
	std::cout << x << " + 1 = " << x + 1 << '\n';
	std::cout << x << " + 2 = " << x + 2 << '\n';
	std::cout << x << " + 3 = " << x + 3 << '\n';
}
*/

/* imprecisedifference.cpp
#include <iostream>
#include <iomanip>

int main() {
	double d1 = 2000.5;
	double d2 = 2000.0;
	std::cout << std::setprecision(16) << (d1 - d2) << '\n';
	double d3 = 2000.58;
	double d4 = 2000.0;
	std::cout << std::setprecision(16) << (d3 - d4) << '\n';
}
*/

/* precise8th.cpp
#include <iostream>

int main() {
	double one = 1.0,
		one_eighth = 1.0 / 8.0,
		zero = one - one_eighth - one_eighth - one_eighth
		- one_eighth - one_eighth - one_eighth
		- one_eighth - one_eighth;

	std::cout << "one = " << one << ", one_eighth = " << one_eighth
		<< ", zero = " << zero << '\n';
}
*/

/* imprecise5th.cpp
#include <iostream>

int main() {
	double one = 1.0, one_fifth = 1.0 / 5.0,
		zero = one - one_fifth - one_fifth - one_fifth
		- one_fifth - one_fifth;

	std::cout << "one = " << one << ", one_fifth = " << one_fifth
		<< ", zero = " << zero << '\n';
}
 */

/* prevspost.cpp 
#include <iostream>

int main() {
	int x1 = 1, y1 = 10, x2 = 100, y2 = 1000;
	std::cout << "x1=" << x1 << ", y1=" << y1
		<< ", x2=" << x2 << ", y2=" << y2 << '\n';
	y1 = x1++;
	std::cout << "x1=" << x1 << ", y1=" << y1
		<< ", x2=" << x2 << ", y2=" << y2 << '\n';
	y2 = ++x2;
	std::cout << "x1=" << x1 << ", y1=" << y1
		<< ", x2=" << x2 << ", y2=" << y2 << '\n';
}
*/

/* bitwiseoperators.cpp 
#include <iostream>

int main() {
	int x, y;
	std::cout << "Please enter two integers: ";
	std::cin >> x >> y;
	std::cout << x << " & " << y << " = " << (x & y) << '\n';
	std::cout << x << " | " << y << " = " << (x | y) << '\n';
	std::cout << x << " ^ " << y << " = " << (x ^ y) << '\n';
	std::cout << "~" << x << " = " << ~x << '\n';
	std::cout << x << " << " << 2 << " = " << (x << 2) << '\n';
	std::cout << x << " >> " << 2 << " = " << (x >> 2) << '\n';
}
*/

/* faultytempconv.cpp 
#include <iostream>

int main() {
	double degreesF = 0, degreesC = 0;
	// Define the relationship between F and C
	degreesC = 5.0 / 9 * (degreesF - 32);
	// Prompt user for degrees F
	std::cout << "Enter the temperature in degrees F: ";
	// Read in the user's input
	std::cin >> degreesF;
	// Report the result
	std::cout << degreesC << '\n';
}
*/

/* exercise 4.12.6 
#include <iostream>

int main() {
	int num1, num2;
	std::cout << "Please, enter the first number: ";
	std::cin >> num1;
	std::cout << "Please, enter the second number: ";
	std::cin >> num2;
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
	std::cout << num1 << " % " << num2 << " = " << num1 % num2 << '\n';
}
*/

/* exercise 4.12.7 
#include <iostream>

int main() {
	double num1, num2;
	std::cout << "Please, enter the first number: ";
	std::cin >> num1;
	std::cout << "Please, enter the second number: ";
	std::cin >> num2;
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
	std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
}
*/

/* exercise-practise 4.12.8 
#include <iostream>

int main() {
	int x = 2;
	std::cout << "x" << '\n';
	std::cout << 'x' << '\n';
	std::cout << x << '\n';
	std::cout << "x + 1" << '\n';
	std::cout << 'x' + 1 << '\n';
	std::cout << x + 1 << '\n';
}
*/

/* exercise 4.12.10
#include <iostream>

int main() {
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;
	std::cout << i1 + i2 << '\n';
	std::cout << i1 / i2 << '\n';
	std::cout << i2 / i1 << '\n';
	std::cout << i1 * i3 << '\n';
	std::cout << d1 + d2 << '\n';
	std::cout << d1 / d2 << '\n';
	std::cout << d2 / d1 << '\n';
	std::cout << d3 * d1 << '\n';
	std::cout << d1 + i2 << '\n';
	std::cout << i1 / d2 << '\n';
	std::cout << d2 / i1 << '\n';
	std::cout << i2 / d1 << '\n';
	std::cout << i1 / i2 * d1 << '\n';
	std::cout << d1 * i1 / i2 << '\n';
	std::cout << d1 / d2 * i1 << '\n';
	std::cout << i1 * d1 / d2 << '\n';
	std::cout << i2 / i1 * d1 << '\n';
	std::cout << d2 * i2 / i1 << '\n';
	std::cout << d2 / d1 * i1 << '\n';
	std::cout << i1 * d2 / d1 << '\n';
}
 */

/* exercise-practise 4.12.11
#include <iostream>

int main() {
	std::cout << /* 5 3 << '\n';
 }
*/

/* exercise 4.12.12 
#include <iostream>

int main() {
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;
	std::cout << i1 + (i2 * i3) << '\n';
	std::cout << i1 * (i2 + i3) << '\n';
	std::cout << i1 / (i2 + i3) << '\n';
	std::cout << i1 / i2 + i3 << '\n';
	std::cout << 3 + 4 + 5 / 3 << '\n';
	std::cout << (3 + 4 + 5) / 3 << '\n';
	std::cout << d1 + (d2 * d3) << '\n';
	std::cout << d1 + d2 * d3 << '\n';
	std::cout << d1 / d2 - d3 << '\n';
	std::cout << d1 / (d2 - d3) << '\n';
	std::cout << d1 + d2 + d3 / 3 << '\n';
	std::cout << (d1 + d2 + d3) / 3 << '\n';
	std::cout << d1 + d2 + (d3 / 3) << '\n';
	std::cout << 3 * (d1 + d2) * (d1 - d3) << '\n';
}
*/

/* exercise-practise 4.12.19

#include <iostream>
int main() {
	int n1, n2, d1; // logic error
	// Get two numbers from the user
	cin << n1 << n2; // compile-time
	// Compute sum of the two numbers
	std::cout << n1 + n2 << '\n'; // everything is fine
	// Compute average of the two numbers
	std::cout << n1 + n2 / 2 << '\n'; // everything if fine
	// Assign some variables
	d1 = d2 = 0; // compile-time
	// Compute a quotient
	std::cout << n1 / d1 << '\n'; // everything is fine
	// Compute a product
	n1* n2 = d1; // logic
	// Print result
	std::cout << d1 << '\n'; // 8
}
 */

/* exercise-practise 4.12.23 
#include <iostream>

int main() {
	int x1 = 2, y1, x2 = 2, y2;
	y1 = ++x1;
	y2 = x2++;
	std::cout << x1 << " " << x2 << '\n';
	std::cout << y1 << " " << y2 << '\n';
}
*/

/* exercise-practise 4.12.24 WRONG CODE
#include <iostream>

int main() {
	double C, r;
	const double PI = 3.14159;
	std::cout >> "Please enter the circle's radius: ";
	std::cin << r;
	// Formula for the area of a circle given its radius
	C = 2 * PI * r;
	// Get the radius from the user
	// Print the circumference
	std::cout << "Circumference is " << C << '\n';
}
*/

/* exercise-practise 4.12.24 RIGHT CODE 
#include<bits/stdc++.h>
using namespace std;

#define PI 3.1415

double circumference(double r)
{
	double cir = 2 * PI * r;
	return cir;
}

// driver function
int main()
{
	double r = 5;
	cout << "Circumference = "
		<< circumference(r);
	return 0;
}
*/

/* exercise 4.12.25 NOT EXACTLY CODE THAT I NEED BUT IT'S OKAY
#include <iostream>
#include <utility>

// return true if the next character extracted and discarded is the expected character
bool got_expected( std::istream& stm, char expected )
{
	char c = 0 ;
	return stm >> c && c == expected ;
}

// extract and discard the next character if it is to_be_discarded
// return true if to_be_discarded was extracted and discarded
bool ignore_if( std::istream& stm, char to_be_discarded )
{
	char c = 0 ;

	// read the next char, discard it if it is to_be_discarded, otherwise put it back
	if( stm >> c && c != to_be_discarded ) stm.putback(c) ;

	return c == to_be_discarded ;
}

// accepts input of the following forms: (x,y) or x,y or (x y) or x y
// the input format is free: extra white spaces may be present anywhere
std::istream& get_coordinates( std::istream& stm, std::pair<double,double>& coords )
{
	// true if an open parenthesis at the beginning was found and discarded
	const bool open_paren = ignore_if( stm, '(' ) ;

	// try to read the two floating point values separated by either a comma or white space
	stm >> coords.first ; // read the first number
	ignore_if( stm, ',' ) ; // ignore a comma, if it is present
	if( stm >> coords.second ) // if a second number was also successfully read
	{
		// if there was an open parenthesis, there must be a close parenthesis at the end
		// if not, place the stream into a failed state
		if( open_paren && !got_expected( stm, ')' ) ) stm.clear( stm.failbit ) ;
	}

	return stm ;
}
*/

