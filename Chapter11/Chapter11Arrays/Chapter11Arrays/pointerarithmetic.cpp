/* #include <iostream>
using namespace std;

int main() {
	// make an array
	int arr[] = { 10, 20, 30, 40, 50 };
	int* p = arr; // p points to the first element
	cout << *p << '\n'; // prints 10, doesn't change p
	cout << p[0] << '\n';
	cout << p[1] << '\n'; // prints 20, doesn't change p
	cout << *p << '\n'; // again 10
	p++; // advances p to the next element
	cout << *p << '\n'; //prints 20
	p += 2; // advance p two places
	cout << *p << '\n'; // prints 40
	cout << p[0] << '\n'; // prints 40
	cout << p[1] << '\n'; // prints 50
	p--; // moves p back one place
	cout << *p << '\n';
}
*/