/* 
#include <iostream>
#include <vector>
using std::vector;
using namespace std;

int main() {
	double sum = 0.0;
	const int NUMBER_OF_ENTRIES = 5;
	vector<double> numbers(NUMBER_OF_ENTRIES);
	cout << "Enter, please, " << NUMBER_OF_ENTRIES << " numbers: ";
	// allow user to enter in the values.
	for (int i = 0; i < NUMBER_OF_ENTRIES; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	cout << "The average of ";
	for (int i = 0; i < NUMBER_OF_ENTRIES - 1; i++)
		cout << numbers[i] << ", ";
	// no comma following last element
	cout << numbers[NUMBER_OF_ENTRIES - 1] << " is " << sum / NUMBER_OF_ENTRIES << '\n';
}
*/