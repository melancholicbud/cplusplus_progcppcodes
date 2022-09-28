/* #include <iostream>
using namespace std;

int main() {
	double sum = 0.0;
	double* numbers; // note: numbers is a pointer, not an array
	int size; // actual number of entries

	// get effective size of the array
	cout << "Please, enter number of values to process: ";
	cin >> size;

	if (size > 0) { // nothing to do with no entries
		cout << "Please, enter " << size << " numbers: ";
		// allocate the exact size needed
		numbers = new double[size]; // dynamically allocated array
		// allow the user to enter in the values
		for (int i = 0; i < size; i++) {
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size - 1; i++)
			cout << numbers[i] << ", ";
		// no comma following last element
		cout << numbers[size - 1] << " is " << sum / size << '\n';
		delete[] numbers; // free up space held by numbers

	}
}
*/