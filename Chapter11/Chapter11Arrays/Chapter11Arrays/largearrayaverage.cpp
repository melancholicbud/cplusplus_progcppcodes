/* #include <iostream>
using namespace std;

// maximum number of expected values is 1,000,000
const int MAX_NUMBER_OF_ENTRIES = 1000000;
double numbers[MAX_NUMBER_OF_ENTRIES];

int main() {
	double sum = 0.0;
	int size; // actual number of entries

	// get effective size of the array
	cout << "Please, enter number of values to process: ";
	cin >> size;

	if (size > 0) { // nothing to do with no entries
		cout << "Please, enter " << size << " numbers: ";
		// allow user to enter in the values
		for (int i = 0; i < size; i++) {
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size - 1; i++)
			cout << numbers[i] << ", ";
		// no comma following last element
		cout << numbers[size - 1] << " is " << sum / size << '\n';
 	}
}
*/