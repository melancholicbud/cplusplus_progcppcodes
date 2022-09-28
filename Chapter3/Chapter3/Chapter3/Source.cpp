//number4.cpp
/* #include <iostream>

int main() {
	std::cout << 4 << '\n';
}
*/

//number4-alt.cpp
/* #include <iostream>

int main() {
	std::cout << "4\n";
}
*/

/* exceed.cpp
#include <iostream>

int main() {
	std::cout << -3000000000 << '\n';
}
*/

/* variable.cpp 
#include <iostream>

int main() {
	int x;
	x = 10;
	std::cout << x << '\n';
}
*/

/* multipleassignment.cpp 
#include <iostream>

int main() {
	int x;
	x = 10;
	std::cout << x << '\n';
	x = 20;
	std::cout << x << '\n';
	x = 30;
	std::cout << x << '\n';
}
*/

/* variable-init.cpp 
#include <iostream>

int main() {
	int x = 10;
	std::cout << x << '\n';
}
*/

/* alt-variable-init.cpp
#include <iostream>

int main() {
	int x[10];
	std::cout << x << '\n';
}
 */

/* pi-print.cpp 
#include <iostream>

int main() {
	double pi = 3.14159;
	std::cout << "Pi = " << pi << '\n';
	std::cout << "or " << 3.14 << " for short" << '\n';
}
*/

/* scientificnotation.cpp 
#include <iostream>

int main() {
	double avogadros_number = 6.022e23, c = 2.998e8;
	std::cout << "Avogardo's number = " << avogadros_number << '\n';
	std::cout << "Speed of light = " << c << '\n';
}
*/

/* const.cpp 
#include <iostream>

int main() {
	const double avogadros_number = 6.022e23, c = 2.998e8;
	std::cout << "Avogardo's number = " << avogadros_number << '\n';
	std::cout << "Speed of light = " << c << '\n';
}
*/

/* charexample.cpp 
#include <iostream>

int main() {
	char ch1, ch2;
	ch1 = 65;
	ch2 = 'A';
	std::cout << ch1 << ", " << ch2 << ", " << 'A' << '\n';
}
*/

/* exercise 3.11.23
#include <iostream>

int main() {
	char ch1;
	ch1 = 1;
	std::cout << ch1 << '\n';
	ch1 = 2;
	std::cout << ch1 << '\n';
	ch1 = 3;
	std::cout << ch1 << '\n';
}
*/

/* right answer for 3.11.23 
#include <iostream>
#include <iomanip>
using namespace std;

char const* character[] = { "", "", "", "", "", "", "", "",
							"\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
							"", "", "", "", "", "", "", "",
							"", "", "", "", "", "", "", "" };

int main()
{
	char c;
	int row;
	std::cout << " ASCII Table" << std::endl << "=============" << std::endl;
	for (int i = 0; i < 16; i++)
	{
		row = i;
		while (row <= 127) {
			if (row < 32)
				std::cout << std::setfill('0') << std::setw(2) << std::setbase(16)
				<< row << " = " << std::setw(3) << std::setfill(' ')
				<< character[i] << " | ";
			else if (row >= 32 && row < 127)
			{
				c = row;
				std::cout << std::setfill('0') << std::setw(2) << std::setbase(16)
					<< row << " = " << std::setw(3) << std::setfill(' ')
					<< c << " | ";
			}
			else
				std::cout << std::setfill('0') << std::setw(2) << std::setbase(16)
				<< row << " = " << std::setw(3) << std::setfill(' ')
				<< "DEL" << " | ";
			row = row + 16;
		}
		std::cout << std::endl;
	}
}
*/

/* exercise 3.11.30 
#include <iostream>

int main() {
	std::cout << "hello" << '\n' << '\a';
}
*/

