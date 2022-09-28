/* 
#include <iostream>
#include <vector>
using std::vector;
using namespace std;

int main() {
	// declare a vector of ten numbers
	vector<double> vec(10);

	// allow the user to populate the vector
	cout << "Enter 10 numbers, please: ";
	for (double& elem : vec)
		cin >> elem;

	// print the vector's contents
	for (double elem : vec)
		cout << elem << '\n';
}
*/