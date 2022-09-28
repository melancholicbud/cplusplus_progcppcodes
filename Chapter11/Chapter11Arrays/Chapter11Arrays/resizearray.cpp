/* #include <iostream>
using namespace std;

int main() {
	double sum = 0.0, // sume of the elements in the list
		* numbers, // dynamic array of numbers
		input; // current user entry
	
	// initial size of array and amound to expand full array
	const int CHUNK = 3;
	int size = 0, // current number of entries 
		capacity = CHUNK; // initial size of array

	// allocate a modest-sized array to begin with
	numbers = new double[capacity];

	cout << "Please, enter any number of nonnegative values "
		<< "(negative value ends the list): ";
	cin >> input;

	while (input >= 0) { // continue until negative number entered
		if (size >= capacity) { // room left to add an element?
			capacity += CHUNK; // expand array
			double* temp = new double[capacity]; // allocate space
			for (int i = 0; i < size; i++)
				temp[i] = numbers[i]; // copy existing values
			delete[] numbers; // free up old space
			numbers = temp; // update numbers to new location
			cout << "Expanding by " << CHUNK << '\n';
		}
		numbers[size] = input; // add number to array at last position
		size++; // update last position
		sum += input; // add to running sum
		cin >> input; // get next number
	}
	if (size > 0) { // can't average less than oner number
		cout << "The average of ";
		for (int i = 0; i < size - 1; i++)
			cout << numbers[i] << ", ";
		// no comma following last element
		cout << numbers[size - 1] << " is " << sum / size << '\n';
	}
	else
		cout << "No numbers to average\n";
	delete[] numbers; // free up the space held by numbers
}
*/