/*
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
using std::vector;

// display the prime numbers between 2 and 500,000 and time how long it takes

// largest potential prime considered
const int MAX = 500000;
// const int MAX = 500;

// each position in the boolean vector indicates
// if the number of that position is not prime:
// false means "prime," and true means "composite."
// initially all numbers are prime until proven otherwise
vector<bool> nonprimes(MAX); // global vector initialize to all false

int main() {
	clock_t start_time = clock(); // record start time

	// first prime number is 2; 0 and 1 aren't prime
	nonprimes[0] = nonprimes[1] = true;

	// start at the first prime number, 2.
	for (int i = 2; i < MAX; i++) {
		// see if i is prime
		if (!nonprimes[i]) {
			cout << i << " ";
			// it's prime, so eliminate all of its multiples that cannot be prime
			for (int j = 2 * i; j < MAX; j += i)
				nonprimes[j] = true;
		}
	}
	cout << '\n'; // move cursor down to next line
	// print elapsed time
	cout << "Elapsed time: " << static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC << " seconds\n";
}
*/