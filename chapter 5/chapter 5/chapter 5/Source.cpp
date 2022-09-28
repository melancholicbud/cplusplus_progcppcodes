/* boolvars.cpp 
#include <iostream>

int main() {
	// declare some boolean variables
	bool a = true, b = false;
	std::cout << "a = " << a << ", b = " << b << '\n';
	// reassign a
	a = false;
	std::cout << "a = " << a << ", b = " << b << '\n';
	// mix integers and Booleans
	a = 1;
	b = 1;
	std::cout << "a = " << a << ", b = " << b << '\n';
	// assign Boolean value to an integer
	int x = a, y = true;
	std::cout << "a = " << a << ", b = " << b
		<< ", x = " << x << ", y = " << y << '\n';
	// more mixing
	a = 1725; // warning issued
	b = -19; // warning issued
	std::cout << "a = " << a << ", b = " << b << '\n';
}
*/

/* betterdivision.cpp
#include <iostream>

int main() {
	int dividend, divisor;

	// get two integers from the user
	std::cout << "Please, enter two integers to divide: ";
	std::cin >> dividend >> divisor;
	// if possible, divide them and report the reuslt
	if (divisor != 0)
		std::cout << dividend << "/" << divisor << " = "
		<< dividend / divisor << '\n';
}
 */

/* alternatedivision.cpp 
#include <iostream>

int main() {
	int dividend, divisor, quotient;
	// get two integers from the user
	std::cout << "Please, enter two integers to divide: ";
	std::cin >> dividend >> divisor;
	// if possible, divide them and report the result
	if (divisor != 0) {
		quotient = dividend / divisor;
		std::cout << dividend << " divided by " << divisor << " is "
			<< quotient << '\n';
	}
}
*/

/* betterfeedback.cpp 
#include <iostream>

int main() {
	int dividend, divisor;

	// get two integers from the user
	std::cout << "Please, enter two integers to divide: ";
	std::cin >> dividend >> divisor;
	// if possible, divide them and report the reuslt
	if (divisor != 0)
		std::cout << dividend << "/" << divisor << " = "
		<< dividend / divisor << '\n';
	else
		std::cout << "Division by zero is not allowed!";
}
*/

/* samedifferent.cpp
#include <iostream>
#include <iomanip>

int main() {
	double d1 = 1.11 - 1.10, d2 = 2.11 - 2.10;
	std::cout << "d1 = " << d1 << '\n';
	std::cout << "d2 = " << d2 << '\n';
	if (d1 == d2)
		std::cout << "Same\n";
	else
		std::cout << "Different\n";
	std::cout << "d1 = " << std::setprecision(20) << d1 << '\n';
	std::cout << "d2 = " << std::setprecision(20) << d2 << '\n';
}
 */

/* checkrange.cpp
#include <iostream>

int main() {
	int value;
	std::cout << "Please, eneter an integer value in the range 0...10: ";
	std::cin >> value;
	if (value >= 0) // first check
		if (value <= 10) // second check
			std::cout << "In range\n";
	std::cout << "Done\n";
}
 */

/* newcheckrange.cpp
#include <iostream>

int main() {
	int value;
	std::cout << "Please, eneter an integer value in the range 0...10: ";
	std::cin >> value;
	if (value >= 0 && value <= 10)
		std::cout << "In range\n";
}
 */

/* enhancedcheckrange.cpp
#include <iostream>

int main() {
	int value;
	std::cout << "Please, enter an integer value in the range 0...10: ";
	std::cin >> value;
	if (value >= 0) // first check
		if (value <= 10) // second check
			std::cout << value << " is acceptable\n";
		else
			std::cout << value << " is too large\n";
	else
		std::cout << value << " is too small\n";
}
 */

/* binaryconversion.cpp 
#include <iostream>

int main() {
	int value;
	// get number from user
	std::cout << "Please, enter an integer value in the range 0...1023: ";
	std::cin >> value;
	// integer must be less than 1024
	if (0 <= value && value < 1024) {
		if (value >= 512) {
			std::cout << 1;
			value %= 512;
		}
		else
			std::cout << 0;
		if (value >= 256) {
			std::cout << 1;
			value %= 256;
		}
		else
			std::cout << 0;
		if (value >= 128) {
			std::cout << 1;
			value %= 128;
		}
		else
			std::cout << 0;
		if (value >= 64) {
			std::cout << 1;
			value %= 64;
		}
		else
			std::cout << 0;
		if (value >= 32) {
			std::cout << 1;
			value %= 32;
		}
		else
			std::cout << 0;
		if (value >= 16) {
			std::cout << 1;
			value %= 16;
		}
		else
			std::cout << 0;
		if (value >= 8) {
			std::cout << 1;
			value %= 8;
		}
		else
			std::cout << 0;
		if (value >= 4) {
			std::cout << 1;
			value %= 4;
		}
		else
			std::cout << 0;
		if (value >= 2) {
			std::cout << 1;
			value %= 2;
		}
		else
			std::cout << 0;
		std::cout << value << '\n';
	}
}
*/

/* simplebinaryconversion.cpp 
#include <iostream>

int main() {
	int value;
	// get number from the user
	std::cout << "Please, enter an integer avlue in the range 0...1023: ";
	std::cin >> value;
	// integer must be less than 1024
	if (0 <= value && value < 1024) {
		std::cout << value / 512;
		value %= 512;
		std::cout << value / 256;
		value %= 256;
		std::cout << value / 128;
		value %= 128;
		std::cout << value / 64;
		value %= 64;
		std::cout << value / 32;
		value %= 32;
		std::cout << value / 16;
		value %= 16;
		std::cout << value / 8;
		value %= 8;
		std::cout << value / 4;
		value %= 4;
		std::cout << value / 2;
		value %= 2;
		std::cout << value << '\n';
	}
}
*/

/* troubleshoot.cpp 
#include <iostream>

int main() {
	std::cout << "Help! My computer doesn't work!\n";
	char choice;
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
	}
}
*/

/* timeconvcond1.cpp
#include <iostream>

int main() {
	// some useful conversion constants
	const int SECONDS_PER_MINUTE = 60, SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE; // 3600
	int hours, minutes, seconds;
	std::cout << "Please, enter the number of seconds: ";
	std::cin >> seconds;
	// first, compute the number of hours in the given number of seconds
	hours = seconds / SECONDS_PER_HOUR; // 3600 seconds = 1 hours
	// compute the remaining seconds after the hours are accounted for
	seconds = seconds % SECONDS_PER_HOUR;
	// next, compute the number of minutes in the remaining number of seconds
	minutes = seconds / SECONDS_PER_MINUTE; // 60 seconds = 1 minute
	// compute the remaining seconds after the minutes are accounted for
	seconds = seconds % SECONDS_PER_MINUTE;
	// report the results
	std::cout << hours;
	// decide between singular and plural form of hours
	if (hours == 1)
		std::cout << " hour ";
	else
		std::cout << " hours ";
	std::cout << minutes;
	// decide between singular and plural form of minutes
	if (minutes == 1)
		std::cout << " minute ";
	else
		std::cout << " minutes ";
	std::cout << seconds;
	// decide between singular and plural form of seconds
	if (seconds == 1)
		std::cout << " second ";
	else
		std::cout << " seconds ";
	std::cout << '\n';
}
*/

/* timeconvcond2.cpp
#include <iostream>

int main() {
	// some useful conversion constants
	const int SECONDS_PER_MINUTE = 60, SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE; // 3600
	int hours, minutes, seconds;
	std::cout << "Please, enter the number of seconds: ";
	std::cin >> seconds;
	// first, compute the number of hours in the given number of seconds
	hours = seconds / SECONDS_PER_HOUR; // 3600 seconds = 1 hours
	// compute the remaining seconds after the hours are accounted for
	seconds = seconds % SECONDS_PER_HOUR;
	// next, compute the number of minutes in the remaining number of seconds
	minutes = seconds / SECONDS_PER_MINUTE; // 60 seconds = 1 minute
	// compute the remaining seconds after the minutes are accounted for
	seconds = seconds % SECONDS_PER_MINUTE;
	// report the results
	if (hours > 0) { // print hours at all?
		std::cout << hours;
		// decide between singular and plural form of hours
		if (hours == 1)
			std::cout << " hour ";
		else
			std::cout << " hours ";
	}
	if (minutes > 0) { // print minutes at all?
		std::cout << minutes;
		// decide between singular and plural form of minutes
		if (minutes == 1)
			std::cout << " minute ";
		else
			std::cout << " minutes ";
	}
	if (seconds > 0 || (hours == 0 && minutes == 0 && seconds == 0)) { // print hours at all?
		std::cout << seconds;
		// decide between singular and plural form of seconds
		if (seconds == 1)
			std::cout << " second ";
		else
			std::cout << " seconds ";
	}
	std::cout << '\n';
} 
*/

/* digittoword.cpp
#include <iostream>

int main() {
	int value;
	std::cout << "Please, enter an integer in the range 0..5: ";
	std::cin >> value;
	if (value < 0)
		std::cout << "Too small";
	else
		if (value == 0)
			std::cout << "zero";
		else
			if (value == 1)
				std::cout << "one";
			else
				if (value == 2)
					std::cout << "two";
				else
					if (value == 3)
						std::cout << "three";
					else
						if (value == 4)
							std::cout << "four";
						else
							if (value == 5)
								std::cout << "five";
							else
								std::cout << "Too large";
	std::cout << '\n';
}
*/

/* restyleddigittoword.cpp
#include <iostream>

int main() {
	int value;
	std::cout << "Please, enter an integer in the range 0..5: ";
	std::cin >> value;
	if (value < 0)
		std::cout << "Too small";
	else if (value == 0)
			std::cout << "zero";
	else if (value == 1)
			std::cout << "one";
	else if (value == 2)
			std::cout << "two";
	else if (value == 3)
			std::cout << "three";
	else if (value == 4)
			std::cout << "four";
	else if (value == 5)
			std::cout << "five";
	else
			std::cout << "Too large";
	std::cout << '\n';
}
*/

/* datetransformer.cpp 
#include <iostream>

int main() {
	std::cout << "Please, enter the month and day as numbers: ";
	int month, day;
	std::cin >> month >> day;
	// translate month into English
	if (month == 1)
		std::cout << "January";
	else if (month == 2)
		std::cout << "February";
	else if (month == 3)
		std::cout << "March";
	else if (month == 4)
		std::cout << "April";
	else if (month == 5)
		std::cout << "May";
	else if (month == 6)
		std::cout << "June";
	else if (month == 7)
		std::cout << "July";
	else if (month == 8)
		std::cout << "August";
	else if (month == 9)
		std::cout << "September";
	else if (month == 10)
		std::cout << "October";
	else if (month == 11)
		std::cout << "November";
	else
		std::cout << "December";
	// add the day
	std::cout << " " << day << " or " << day << " de ";
	// translate into Spanish
	if (month == 1)
		std::cout << "enero";
	else if (month == 2)
		std::cout << "febrero";
	else if (month == 3)
		std::cout << "marzo";
	else if (month == 4)
		std::cout << "abril";
	else if (month == 5)
		std::cout << "mayo";
	else if (month == 6)
		std::cout << "junio";
	else if (month == 7)
		std::cout << "julio";
	else if (month == 8)
		std::cout << "agosto";
	else if (month == 9)
		std::cout << "septiembre";
	else if (month == 10)
		std::cout << "octubre";
	else if (month == 11)
		std::cout << "noviembre";
	else
		std::cout << "diciembre";
	std::cout << '\n';
}
*/

/* badequality.cpp
#include <iostream>

int main() {
	int input;
	std::cout << "Please, enter an integer: ";
	std::cin >> input;
	if (input = 2)
		std::cout << "two\n";
	std::cout << "You entered " << input << '\n';
}
 */

/* exercise 5.10.12-5.10.13
#include <iostream>

int main() {
	int value;
	std::cout << "Please, eneter an integer value in the range 0...100: ";
	std::cin >> value;
	if (value >= 0) // first check
		if (value <= 100) // second check
			std::cout << "In range\n";
	// 5.10.13
		else
			std::cout << "out of range";

}
 */

/* exercise-practise 5.10.14 
#include <iostream>
int main() {
	std::cout << "Please in value in the range 1...5: ";
	int value, month;
	std::cin >> value;
	// Translate number into its English word
	if (month == 1) {
		std::cout << "You entered a";
		std::cout << "one";
		std::cout << '\n';
	}
	else if (month == 2) {
		std::cout << "You entered a";
		std::cout << "two";
		std::cout << '\n';
	}
	else if (month == 3) {
		std::cout << "You entered a";
		std::cout << "three";
		std::cout << '\n';
	}
	else if (month == 4) {
		std::cout << "You entered a";
		std::cout << "four";
		std::cout << '\n';
	}
	else if (month == 5) {
		std::cout << "You entered a";
		std::cout << "five";
		std::cout << '\n';
	}
	else {// Value out of range
		std::cout << "You entered a";
		std::cout << "value out of range";
		std::cout << '\n';
	}
}
*/

/* exercise-practise 5.10.15 
#include <iostream>

int main() {
	// int i = 3, j = 5, k = 7;
	// int i = 3, j = 7, k = 5;
	// int i = 5, j = 3, k = 7;
	// int i = 5, j = 7, k = 3;
	// int i = 7, j = 3, k = 5;
	int i = 7, j = 5, k = 3;
	if (i < j) {
		if (j < k)
			i = j;
		else
			j = k;
	}
	else {
		if (j > k)
			j = i;
		else
			i = k;
	}
	std::cout << "i = " << i << " j = " << j << " k = " << k << '\n';
}
*/

/* exercise 5.10.16 
#include <iostream>
int main() {
	int input;
	std::cin >> input;
	if (input < 10) {
		if (input != 5)
			std::cout << "wow ";
		else
			input++;
	}
	else {
		if (input == 17)
			input += 10;
		else
			std::cout << "whoa ";
	}
	std::cout << input << '\n';
}
*/

/* exercise 5.10.18 */

/* exercise 5.10.19 */
#include <iostream>

int main() {
	int i, a[5], temp, j;
	for (i = 0; i < 4; i++) {
		scanf_s("%d", &a[i]);
	}
	for (j = 0; j < 4; j++) {
		temp = a[j];
		for (i = 0; i < 4; i++) {
			if (temp == a[i]) {
				printf("DUPLICATE");
				exit(0);
			}
		}
	}
	printf("ALL UNIQUE");
}
